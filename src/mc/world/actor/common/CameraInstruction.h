#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct CameraInstruction {
public:
    // CameraInstruction inner types declare
    // clang-format off
    struct FadeInstruction;
    struct SetInstruction;
    // clang-format on
    
    // CameraInstruction inner types define
    struct FadeInstruction {
    public:
        // FadeInstruction inner types declare
        // clang-format off
        struct ColorOption;
        struct TimeOption;
        // clang-format on
        
        // FadeInstruction inner types define
        struct ColorOption {
        public:
            // prevent constructor by default
            ColorOption& operator=(ColorOption const &) = delete;
            ColorOption(ColorOption const &) = delete;
            ColorOption() = delete;
        
        public:
            // NOLINTBEGIN
            // symbol: ?bindType@ColorOption@FadeInstruction@CameraInstruction@@SAXAEAUReflectionCtx@cereal@@@Z
            MCAPI static void bindType(struct cereal::ReflectionCtx &);
        
            // symbol: ?read@ColorOption@FadeInstruction@CameraInstruction@@SA?AV?$Result@UColorOption@FadeInstruction@CameraInstruction@@Verror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
            MCAPI static class Bedrock::Result<struct CameraInstruction::FadeInstruction::ColorOption> read(class ReadOnlyBinaryStream &);
        
            // NOLINTEND
        
        };
        
        struct TimeOption {
        public:
            // prevent constructor by default
            TimeOption& operator=(TimeOption const &) = delete;
            TimeOption(TimeOption const &) = delete;
            TimeOption() = delete;
        
        public:
            // NOLINTBEGIN
            // symbol: ?bindType@TimeOption@FadeInstruction@CameraInstruction@@SAXAEAUReflectionCtx@cereal@@@Z
            MCAPI static void bindType(struct cereal::ReflectionCtx &);
        
            // symbol: ?read@TimeOption@FadeInstruction@CameraInstruction@@SA?AV?$Result@UTimeOption@FadeInstruction@CameraInstruction@@Verror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
            MCAPI static class Bedrock::Result<struct CameraInstruction::FadeInstruction::TimeOption> read(class ReadOnlyBinaryStream &);
        
            // NOLINTEND
        
        };
        
    public:
        // prevent constructor by default
        FadeInstruction& operator=(FadeInstruction const &) = delete;
        FadeInstruction(FadeInstruction const &) = delete;
        FadeInstruction() = delete;
    
    public:
        // NOLINTBEGIN
        // symbol: ??8FadeInstruction@CameraInstruction@@QEBA_NAEBU01@@Z
        MCAPI bool operator==(struct CameraInstruction::FadeInstruction const &) const;
    
        // symbol: ?bindType@FadeInstruction@CameraInstruction@@SAXAEAUReflectionCtx@cereal@@@Z
        MCAPI static void bindType(struct cereal::ReflectionCtx &);
    
        // symbol: ?read@FadeInstruction@CameraInstruction@@SA?AV?$Result@UFadeInstruction@CameraInstruction@@Verror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
        MCAPI static class Bedrock::Result<struct CameraInstruction::FadeInstruction> read(class ReadOnlyBinaryStream &);
    
        // NOLINTEND
    
    };
    
    struct SetInstruction {
    public:
        // SetInstruction inner types declare
        // clang-format off
        struct EaseOption;
        struct FacingOption;
        struct PosOption;
        struct RotOption;
        // clang-format on
        
        // SetInstruction inner types define
        struct EaseOption {
        public:
            // prevent constructor by default
            EaseOption& operator=(EaseOption const &) = delete;
            EaseOption(EaseOption const &) = delete;
            EaseOption() = delete;
        
        public:
            // NOLINTBEGIN
            // symbol: ?bindType@EaseOption@SetInstruction@CameraInstruction@@SAXAEAUReflectionCtx@cereal@@@Z
            MCAPI static void bindType(struct cereal::ReflectionCtx &);
        
            // symbol: ?read@EaseOption@SetInstruction@CameraInstruction@@SA?AV?$Result@UEaseOption@SetInstruction@CameraInstruction@@Verror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
            MCAPI static class Bedrock::Result<struct CameraInstruction::SetInstruction::EaseOption> read(class ReadOnlyBinaryStream &);
        
            // NOLINTEND
        
        };
        
        struct FacingOption {
        public:
            // prevent constructor by default
            FacingOption& operator=(FacingOption const &) = delete;
            FacingOption(FacingOption const &) = delete;
            FacingOption() = delete;
        
        public:
            // NOLINTBEGIN
            // symbol: ?read@FacingOption@SetInstruction@CameraInstruction@@SA?AV?$Result@UFacingOption@SetInstruction@CameraInstruction@@Verror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
            MCAPI static class Bedrock::Result<struct CameraInstruction::SetInstruction::FacingOption> read(class ReadOnlyBinaryStream &);
        
            // NOLINTEND
        
        };
        
        struct PosOption {
        public:
            // prevent constructor by default
            PosOption& operator=(PosOption const &) = delete;
            PosOption(PosOption const &) = delete;
            PosOption() = delete;
        
        public:
            // NOLINTBEGIN
            // symbol: ?read@PosOption@SetInstruction@CameraInstruction@@SA?AV?$Result@UPosOption@SetInstruction@CameraInstruction@@Verror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
            MCAPI static class Bedrock::Result<struct CameraInstruction::SetInstruction::PosOption> read(class ReadOnlyBinaryStream &);
        
            // NOLINTEND
        
        };
        
        struct RotOption {
        public:
            // prevent constructor by default
            RotOption& operator=(RotOption const &) = delete;
            RotOption(RotOption const &) = delete;
            RotOption() = delete;
        
        public:
            // NOLINTBEGIN
            // symbol: ?bindType@RotOption@SetInstruction@CameraInstruction@@SAXAEAUReflectionCtx@cereal@@@Z
            MCAPI static void bindType(struct cereal::ReflectionCtx &);
        
            // symbol: ?read@RotOption@SetInstruction@CameraInstruction@@SA?AV?$Result@URotOption@SetInstruction@CameraInstruction@@Verror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
            MCAPI static class Bedrock::Result<struct CameraInstruction::SetInstruction::RotOption> read(class ReadOnlyBinaryStream &);
        
            // NOLINTEND
        
        };
        
    public:
        // prevent constructor by default
        SetInstruction(SetInstruction const &) = delete;
        SetInstruction() = delete;
    
    public:
        // NOLINTBEGIN
        // symbol: ??4SetInstruction@CameraInstruction@@QEAAAEAU01@AEBU01@@Z
        MCAPI struct CameraInstruction::SetInstruction & operator=(struct CameraInstruction::SetInstruction const &);
    
        // symbol: ??4SetInstruction@CameraInstruction@@QEAAAEAU01@$$QEAU01@@Z
        MCAPI struct CameraInstruction::SetInstruction & operator=(struct CameraInstruction::SetInstruction &&);
    
        // symbol: ??8SetInstruction@CameraInstruction@@QEBA_NAEBU01@@Z
        MCAPI bool operator==(struct CameraInstruction::SetInstruction const &) const;
    
        // symbol: ?bindType@SetInstruction@CameraInstruction@@SAXAEAUReflectionCtx@cereal@@@Z
        MCAPI static void bindType(struct cereal::ReflectionCtx &);
    
        // symbol: ?read@SetInstruction@CameraInstruction@@SA?AV?$Result@USetInstruction@CameraInstruction@@Verror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
        MCAPI static class Bedrock::Result<struct CameraInstruction::SetInstruction> read(class ReadOnlyBinaryStream &);
    
        // NOLINTEND
    
    };
    
public:
    // prevent constructor by default
    CameraInstruction& operator=(CameraInstruction const &) = delete;
    CameraInstruction(CameraInstruction const &) = delete;
    CameraInstruction() = delete;

public:
    // NOLINTBEGIN
    // symbol: ?write@CameraInstruction@@QEBAXAEAVBinaryStream@@@Z
    MCAPI void write(class BinaryStream &) const;

    // symbol: ?bindType@CameraInstruction@@SAXAEAUReflectionCtx@cereal@@@Z
    MCAPI static void bindType(struct cereal::ReflectionCtx &);

    // symbol: ?read@CameraInstruction@@SA?AV?$Result@UCameraInstruction@@Verror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    MCAPI static class Bedrock::Result<struct CameraInstruction> read(class ReadOnlyBinaryStream &);

    // NOLINTEND

};

