#pragma once

#include "nbt-cpp/nbt.hpp"
#include "llapi/mc/ByteArrayTag.hpp"
#include "llapi/mc/ByteTag.hpp"
#include "llapi/mc/CompoundTag.hpp"
#include "llapi/mc/CompoundTagVariant.hpp"
#include "llapi/mc/DoubleTag.hpp"
#include "llapi/mc/FloatTag.hpp"
#include "llapi/mc/Int64Tag.hpp"
#include "llapi/mc/IntArrayTag.hpp"
#include "llapi/mc/IntTag.hpp"
#include "llapi/mc/ListTag.hpp"
#include "llapi/mc/ShortTag.hpp"
#include "llapi/mc/EndTag.hpp"
#include "llapi/mc/StringTag.hpp"
#include "llapi/mc/Tag.hpp"

using namespace nbt;
using namespace std;

void Compound_Helper(tags::compound_tag& res, CompoundTag* nbt);
void List_Helper(tags::compound_list_tag& res, ListTag* nbt);

void List_Helper(tags::byte_list_tag& res, ListTag* nbt) {
    auto& list = nbt->value();
    for (auto& tag : list)
        res.value.emplace_back(tag->asByteTag()->value());
}

void List_Helper(tags::short_list_tag& res, ListTag* nbt) {
    auto& list = nbt->value();
    for (auto& tag : list)
        res.value.emplace_back(tag->asShortTag()->value());
}

void List_Helper(tags::int_list_tag& res, ListTag* nbt) {
    auto& list = nbt->value();
    for (auto& tag : list)
        res.value.emplace_back(tag->asIntTag()->value());
}

void List_Helper(tags::long_list_tag& res, ListTag* nbt) {
    auto& list = nbt->value();
    for (auto& tag : list)
        res.value.emplace_back(tag->asInt64Tag()->value());
}

void List_Helper(tags::float_list_tag& res, ListTag* nbt) {
    auto& list = nbt->value();
    for (auto& tag : list)
        res.value.emplace_back(tag->asFloatTag()->value());
}

void List_Helper(tags::double_list_tag& res, ListTag* nbt) {
    auto& list = nbt->value();
    for (auto& tag : list)
        res.value.emplace_back(tag->asDoubleTag()->value());
}

void List_Helper(tags::string_list_tag& res, ListTag* nbt) {
    auto& list = nbt->value();
    for (auto& tag : list)
        res.value.emplace_back(tag->asStringTag()->value());
}

void List_Helper(tags::bytearray_list_tag& res, ListTag* nbt) {
    auto& list = nbt->value();
    for (auto& tag : list) {
        auto& bytes = tag->asByteArrayTag()->value();

        char* raw = (char*)bytes.data.get();
        vector<int8_t> data;
        data.reserve(bytes.size);
        for (int i = 0; i < bytes.size; ++i)
            data.emplace_back(raw[i]);

        res.value.emplace_back(data);
    }
}

void List_Helper(tags::intarray_list_tag& res, ListTag* nbt) {
    auto& list = nbt->value();
    for (auto& tag : list) {
        auto& bytes = tag->asIntArrayTag()->value();

        int* raw = (int*)bytes.data.get();
        vector<int32_t> data;
        data.reserve(bytes.size);
        for (int i = 0; i < bytes.size / 4; ++i)
            data.emplace_back(raw[i]);

        res.value.emplace_back(data);
    }
}

tags::tag_list_tag List_Helper(ListTag* nbt) {
    // auto& list = nbt->value();
    // if (list.empty()) {
    //     return tags::tag_list_tag();
    // }

    switch (nbt->getElementType()) {
        case Tag::Type::End:
            return tags::end_list_tag().as_tags();
        case Tag::Type::Byte: {
            tags::byte_list_tag data;
            List_Helper(data, nbt);
            return data.as_tags();
        }
        case Tag::Type::Short: {
            tags::short_list_tag data;
            List_Helper(data, nbt);
            return data.as_tags();
        }
        case Tag::Type::Int: {
            tags::int_list_tag data;
            List_Helper(data, nbt);
            // this is error, so return.
            // res = std::move(data.as_tags());
            return data.as_tags();
        }
        case Tag::Type::Int64: {
            tags::long_list_tag data;
            List_Helper(data, nbt);
            return data.as_tags();
        }
        case Tag::Type::Float: {
            tags::float_list_tag data;
            List_Helper(data, nbt);
            return data.as_tags();
        }
        case Tag::Type::Double: {
            tags::double_list_tag data;
            List_Helper(data, nbt);
            return data.as_tags();
        }
        case Tag::Type::String: {
            tags::string_list_tag data;
            List_Helper(data, nbt);
            return data.as_tags();
        }
        case Tag::Type::ByteArray: {
            tags::bytearray_list_tag data;
            List_Helper(data, nbt);
            return data.as_tags();
        }
        case Tag::Type::IntArray: {
            tags::intarray_list_tag data;
            List_Helper(data, nbt);
            return data.as_tags();
        }
        case Tag::Type::List: {
            tags::list_list_tag res;
            for (auto& tag : nbt->value()) {
                tags::tag_list_tag data = List_Helper((ListTag*)tag);
                res.value.emplace_back(std::make_unique<tags::tag_list_tag>(data));
            }
            return res.as_tags();
        }
        case Tag::Type::Compound: {
            tags::compound_list_tag data;
            List_Helper(data, nbt);
            return data.as_tags();
        }
        default: {
            return tags::end_list_tag().as_tags();
        }
    }
}

void List_Helper(tags::compound_list_tag& res, ListTag* nbt) {
    auto& list = nbt->value();
    for (auto& tag : list) {
        auto obj = tags::compound_tag(false);
        Compound_Helper(obj, (CompoundTag*)tag);
        res.value.emplace_back(obj.value);
    }
}

void Compound_Helper(tags::compound_tag& res, CompoundTag* nbt) {
    auto& list = nbt->value();
    for (auto& [key, tmp] : list) {
        auto& tag = *tmp.get();
        switch (tag.getTagType()) {
            case Tag::Type::End:
                res.value[key].reset();
                break;
            case Tag::Type::Byte:
                res.value[key] = make_unique<tags::byte_tag>(tag.asByteTag()->value());
                break;
            case Tag::Type::Short:
                res.value[key] = make_unique<tags::short_tag>(tag.asShortTag()->value());
                break;
            case Tag::Type::Int:
                res.value[key] = make_unique<tags::int_tag>(tag.asIntTag()->value());
                break;
            case Tag::Type::Int64:
                res.value[key] = make_unique<tags::long_tag>(tag.asInt64Tag()->value());
                break;
            case Tag::Type::Float:
                res.value[key] = make_unique<tags::float_tag>(tag.asFloatTag()->value());
                break;
            case Tag::Type::Double:
                res.value[key] = make_unique<tags::double_tag>(tag.asDoubleTag()->value());
                break;
            case Tag::Type::String:
                res.value[key] = make_unique<tags::string_tag>(tag.asStringTag()->value());
                break;
            case Tag::Type::ByteArray: {
                auto& bytes = tag.asByteArrayTag()->value();
                char* raw = (char*)bytes.data.get();
                vector<int8_t> data;
                data.reserve(bytes.size);
                for (int i = 0; i < bytes.size; ++i)
                    data.emplace_back(raw[i]);

                res.value[key] = make_unique<tags::bytearray_tag>(data);
                break;
            }
            case Tag::Type::IntArray: {
                auto& bytes = tag.asIntArrayTag()->value();
                int* raw = (int*)bytes.data.get();
                vector<int32_t> data;
                data.reserve(bytes.size);
                for (int i = 0; i < bytes.size / 4; ++i)
                    data.emplace_back(raw[i]);

                res.value[key] = make_unique<tags::intarray_tag>(data);
                break;
            }
            case Tag::Type::List: {
                auto& list = tag.asListTag()->value();
                if (list.empty()) {
                    res.value[key] = make_unique<tags::tag_list_tag>();
                    break;
                }
                tags::tag_list_tag obj = List_Helper((ListTag*)&tag);
                res.value[key] = make_unique<tags::tag_list_tag>(obj);
                break;
            }
            case Tag::Type::Compound: {
                auto obj = tags::compound_tag(false);
                Compound_Helper(obj, (CompoundTag*)&tag);
                res.value[key] = make_unique<tags::compound_tag>(obj);
                break;
            }
            default:
                res.value[key].reset();
                break;
        }
    }
}
