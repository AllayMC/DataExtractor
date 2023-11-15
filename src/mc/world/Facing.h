#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/WeirdoDirection.h"
#include "mc/external/glm/mat.h"
#include "mc/world/Direction.h"

class Facing {
public:
    // Facing inner types declare
    // clang-format off
    class Plane;
    // clang-format on
    
    // Facing inner types define
    enum class Axis {};
    
    enum class Name {};
    
    enum class Rotation {};
    
    class Plane {
    public:
        // prevent constructor by default
        Plane& operator=(Plane const &) = delete;
        Plane(Plane const &) = delete;
        Plane() = delete;
    
    public:
        // NOLINTBEGIN
        // symbol: ?HORIZONTAL@Plane@Facing@@2V?$vector@EV?$allocator@E@std@@@std@@B
        MCAPI static std::vector<uint8_t> const HORIZONTAL;
    
        // NOLINTEND
    
    };
    
public:
    // prevent constructor by default
    Facing& operator=(Facing const &) = delete;
    Facing(Facing const &) = delete;
    Facing() = delete;

public:
    // NOLINTBEGIN
    // symbol: ?convertDirectionToFacingDirection@Facing@@SAEW4Type@Direction@@@Z
    MCAPI static uint8_t convertDirectionToFacingDirection(::Direction::Type);

    // symbol: ?convertWeirdoDirectionToFacingDirection@Facing@@SAEW4WeirdoDirection@@@Z
    MCAPI static uint8_t convertWeirdoDirectionToFacingDirection(::WeirdoDirection);

    // symbol: ?convertYRotationToFacingDirection@Facing@@SAEM@Z
    MCAPI static uint8_t convertYRotationToFacingDirection(float);

    // symbol: ?from2DDataValue@Facing@@SA?AW4Name@1@H@Z
    MCAPI static ::Facing::Name from2DDataValue(int32_t);

    // symbol: ?fromVec3@Facing@@SAEAEBVVec3@@@Z
    MCAPI static uint8_t fromVec3(class Vec3 const &);

    // symbol: ?getAxis@Facing@@SA?AW4Axis@1@E@Z
    MCAPI static ::Facing::Axis getAxis(uint8_t);

    // symbol: ?getAxisFromStandingRotation@Facing@@SA?AV?$optional@W4Axis@Facing@@@std@@H@Z
    MCAPI static std::optional<::Facing::Axis> getAxisFromStandingRotation(int32_t);

    // symbol: ?getClockWise@Facing@@SAEE@Z
    MCAPI static uint8_t getClockWise(uint8_t);

    // symbol: ?getClosestRotation@Facing@@SA?AW4Rotation@1@M@Z
    MCAPI static ::Facing::Rotation getClosestRotation(float);

    // symbol: ?getCounterClockWise@Facing@@SAEE@Z
    MCAPI static uint8_t getCounterClockWise(uint8_t);

    // symbol: ?getFaceLocation@Facing@@SA?AVVec3@@EMM@Z
    MCAPI static class Vec3 getFaceLocation(uint8_t, float, float);

    // symbol: ?getFacingDirection@Facing@@SAEAEBVVec3@@0@Z
    MCAPI static uint8_t getFacingDirection(class Vec3 const &, class Vec3 const &);

    // symbol: ?getMostPrioritizedFacingDirection@Facing@@SA?AV?$vector@EV?$allocator@E@std@@@std@@AEBVVec2@@E_N@Z
    MCAPI static std::vector<uint8_t> getMostPrioritizedFacingDirection(class Vec2 const &, uint8_t, bool);

    // symbol: ?getMostPrioritizedFacingDirectionFromViewVector@Facing@@SA?AV?$array@E$05@std@@AEBVVec2@@@Z
    MCAPI static std::array<uint8_t, 6> getMostPrioritizedFacingDirectionFromViewVector(class Vec2 const &);

    // symbol: ?getOpposite@Facing@@SAEE@Z
    MCAPI static uint8_t getOpposite(uint8_t);

    // symbol: ?getRandomFace@Facing@@SAHAEAVRandom@@@Z
    MCAPI static int32_t getRandomFace(class Random &);

    // symbol: ?getRandomFaceHorizontal@Facing@@SAHAEAVRandom@@@Z
    MCAPI static int32_t getRandomFaceHorizontal(class Random &);

    // symbol: ?getRotationMatrix@Facing@@SA?AU?$mat@$02$02M$0A@@glm@@EW4Rotation@1@@Z
    MCAPI static struct glm::mat<3, 3, float, 0> getRotationMatrix(uint8_t, ::Facing::Rotation);

    // symbol: ?getShuffledDirections@Facing@@SA?AV?$vector@EV?$allocator@E@std@@@std@@XZ
    MCAPI static std::vector<uint8_t> getShuffledDirections();

    // symbol: ?getShuffledDirections@Facing@@SA?AV?$vector@EV?$allocator@E@std@@@std@@AEAVRandom@@@Z
    MCAPI static std::vector<uint8_t> getShuffledDirections(class Random &);

    // symbol: ?getStepX@Facing@@SAHE@Z
    MCAPI static int32_t getStepX(uint8_t);

    // symbol: ?getStepY@Facing@@SAHE@Z
    MCAPI static int32_t getStepY(uint8_t);

    // symbol: ?getStepZ@Facing@@SAHE@Z
    MCAPI static int32_t getStepZ(uint8_t);

    // symbol: ?isValidDirection@Facing@@SA_NH@Z
    MCAPI static bool isValidDirection(int32_t);

    // symbol: ?makeDirectionArray@Facing@@SA?AV?$array@E$05@std@@EEE@Z
    MCAPI static std::array<uint8_t, 6> makeDirectionArray(uint8_t, uint8_t, uint8_t);

    // symbol: ?rotateFace@Facing@@SAEEW4Rotation@1@@Z
    MCAPI static uint8_t rotateFace(uint8_t, ::Facing::Rotation);

    // symbol: ?rotateFaceAroundGivenFace@Facing@@SAEEEW4Rotation@1@@Z
    MCAPI static uint8_t rotateFaceAroundGivenFace(uint8_t, uint8_t, ::Facing::Rotation);

    // symbol: ?toString@Facing@@SA?AV?$basic_string_view@DU?$char_traits@D@std@@@std@@E@Z
    MCAPI static std::string_view toString(uint8_t);

    // symbol: ?ALL_EXCEPT@Facing@@2V?$array@V?$vector@EV?$allocator@E@std@@@std@@$05@std@@B
    MCAPI static std::array<std::vector<uint8_t>, 6> const ALL_EXCEPT;

    // symbol: ?ALL_EXCEPT_AXIS_Y@Facing@@2V?$array@V?$vector@EV?$allocator@E@std@@@std@@$05@std@@B
    MCAPI static std::array<std::vector<uint8_t>, 6> const ALL_EXCEPT_AXIS_Y;

    // symbol: ?ALL_FACES@Facing@@2V?$vector@EV?$allocator@E@std@@@std@@B
    MCAPI static std::vector<uint8_t> const ALL_FACES;

    // symbol: ?BY2DDATA@Facing@@2QBW4Name@1@B
    MCAPI static ::Facing::Name const BY2DDATA[];

    // symbol: ?DIRECTIONS@Facing@@2QBW4Name@1@B
    MCAPI static ::Facing::Name const DIRECTIONS[];

    // symbol: ?DIRECTION@Facing@@2QBVBlockPos@@B
    MCAPI static class BlockPos const DIRECTION[];

    // symbol: ?FACINGMASK@Facing@@2QBEB
    MCAPI static uint8_t const FACINGMASK[];

    // symbol: ?FACINGMASK_INV@Facing@@2QBEB
    MCAPI static uint8_t const FACINGMASK_INV[];

    // symbol: ?FROM_STRING_MAP@Facing@@2V?$unordered_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@EU?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@E@std@@@2@@std@@B
    MCAPI static std::unordered_map<std::string,uint8_t> const FROM_STRING_MAP;

    // symbol: ?NORMAL@Facing@@2QBVVec3@@B
    MCAPI static class Vec3 const NORMAL[];

    // symbol: ?OPPOSITE_FACING@Facing@@2QBEB
    MCAPI static uint8_t const OPPOSITE_FACING[];

    // symbol: ?STEP_X@Facing@@2QBHB
    MCAPI static int32_t const STEP_X[];

    // symbol: ?STEP_Y@Facing@@2QBHB
    MCAPI static int32_t const STEP_Y[];

    // symbol: ?STEP_Z@Facing@@2QBHB
    MCAPI static int32_t const STEP_Z[];

    // symbol: ?TO_STRING_ARR@Facing@@2V?$array@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$05@std@@B
    MCAPI static std::array<std::string, 6> const TO_STRING_ARR;

    // NOLINTEND

};

