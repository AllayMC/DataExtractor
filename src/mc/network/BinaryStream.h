#pragma once

#include "mc/_HeaderOutputPredefine.h"

#include "mc/common/Result.h"
#include "mc/network/ReadOnlyBinaryStream.h"

class BinaryStream : public ::ReadOnlyBinaryStream {
public:
    std::string  mOwnedBuffer;
    std::string* mBuffer;

    // prevent constructor by default
    BinaryStream& operator=(BinaryStream const&);
    BinaryStream(BinaryStream const&);

    template <typename T>
    inline void writeType(T const& x) {
        serialize<T>::write(x, *this);
    }

    MCTAPI void writeType(struct CommandOriginData const&);
    MCTAPI void writeType(std::vector<std::unique_ptr<class DataItem>> const&);
    MCTAPI void writeType(class NetworkItemStackDescriptor const&);
    MCTAPI void writeType(class MoveActorAbsoluteData const&);
    MCTAPI void writeType(class NetworkItemInstanceDescriptor const&);
    MCTAPI void writeType(struct ItemStackRequestSlotInfo const&);
    MCTAPI void writeType(class RecipeIngredient const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1BinaryStream@@UEAA@XZ
    virtual ~BinaryStream();

    // symbol: ??0BinaryStream@@QEAA@XZ
    MCAPI BinaryStream();

    // symbol: ??0BinaryStream@@QEAA@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
    MCAPI BinaryStream(std::string&, bool);

    // symbol: ?getAndReleaseData@BinaryStream@@QEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string getAndReleaseData();

    // symbol: ?writeString@BinaryStream@@QEAAXV?$basic_string_view@DU?$char_traits@D@std@@@std@@PEBD1@Z
    MCAPI void writeString(std::string_view,char const *,char const *);
};