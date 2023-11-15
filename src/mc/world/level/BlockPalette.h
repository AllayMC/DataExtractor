#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/deps/core/utility/buffer_span.h"
#include "mc/deps/core/utility/buffer_span_mut.h"

class BlockPalette {
public:
    // BlockPalette inner types declare
    // clang-format off
    struct ConstructorToken;
    // clang-format on
    
    // BlockPalette inner types define
    enum class PaletteType {};
    
    struct ConstructorToken {
    public:
        // prevent constructor by default
        ConstructorToken& operator=(ConstructorToken const &) = delete;
        ConstructorToken(ConstructorToken const &) = delete;
        ConstructorToken() = delete;
    
    };
    
public:
    // prevent constructor by default
    BlockPalette& operator=(BlockPalette const &) = delete;
    BlockPalette(BlockPalette const &) = delete;
    BlockPalette() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?getPaletteType@BlockPalette@@UEAA?AW4PaletteType@1@XZ
    virtual ::BlockPalette::PaletteType getPaletteType();

    // vIndex: 2, symbol: ?appendBlock@BlockPalette@@UEAAXAEBVBlock@@@Z
    virtual void appendBlock(class Block const &);

    // vIndex: 3, symbol: ?getBlock@BlockPalette@@UEBAAEBVBlock@@AEBI@Z
    virtual class Block const & getBlock(uint32_t const &) const;

    // vIndex: 4, symbol: ?assignBlockNetworkId@BlockPalette@@MEBAXAEBVBlock@@_K@Z
    virtual void assignBlockNetworkId(class Block const &, uint64_t) const;

    // symbol: ??1BlockPalette@@UEAA@XZ
    MCVAPI ~BlockPalette();

    // symbol: ??0BlockPalette@@QEAA@UConstructorToken@0@@Z
    MCAPI BlockPalette(struct BlockPalette::ConstructorToken);

    // symbol: ??0BlockPalette@@QEAA@AEAVLevel@@@Z
    MCAPI BlockPalette(class Level &);

    // symbol: ?cacheBlockComponentData@BlockPalette@@QEAAXXZ
    MCAPI void cacheBlockComponentData();

    // symbol: ?getBlockFromLegacyData@BlockPalette@@QEBAAEBVBlock@@UNewBlockID@@I@Z
    MCAPI class Block const & getBlockFromLegacyData(struct NewBlockID, uint32_t) const;

    // symbol: ?getUnknownBlockTypeRegistry@BlockPalette@@QEBA?BV?$NonOwnerPointer@VIUnknownBlockTypeRegistry@@@Bedrock@@XZ
    MCAPI class Bedrock::NonOwnerPointer<class IUnknownBlockTypeRegistry> const getUnknownBlockTypeRegistry() const;

    // symbol: ?initFromBlockDefinitions@BlockPalette@@QEAAXXZ
    MCAPI void initFromBlockDefinitions();

    // symbol: ?switchBlock@BlockPalette@@QEBAAEBVBlock@@AEBV2@AEBVBlockLegacy@@@Z
    MCAPI class Block const & switchBlock(class Block const &, class BlockLegacy const &) const;

    // symbol: ?convertLegacyBlock@BlockPalette@@SAAEBVBlock@@UBlockID@@G@Z
    MCAPI static class Block const & convertLegacyBlock(struct BlockID, uint16_t);

    // symbol: ?convertLegacyBlocks@BlockPalette@@SA_NV?$buffer_span_mut@PEBVBlock@@@@V?$buffer_span@UBlockID@@@@V?$buffer_span@UNibblePair@@@@_K@Z
    MCAPI static bool convertLegacyBlocks(class buffer_span_mut<class Block const *>, class buffer_span<struct BlockID>, class buffer_span<struct NibblePair>, uint64_t);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?shouldWarnFor@BlockPalette@@IEBA_NUNewBlockID@@G@Z
    MCAPI bool shouldWarnFor(struct NewBlockID, uint16_t) const;

    // NOLINTEND

};

