#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/persona/PieceType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class SubClientConnectionRequest {
public:
    // prevent constructor by default
    SubClientConnectionRequest& operator=(SubClientConnectionRequest const &) = delete;
    SubClientConnectionRequest() = delete;

public:
    // NOLINTBEGIN
    // symbol: ??0SubClientConnectionRequest@@QEAA@AEBV0@@Z
    MCAPI SubClientConnectionRequest(class SubClientConnectionRequest const &);

    // symbol: ?getAnimatedImageData@SubClientConnectionRequest@@QEBA?AV?$vector@VAnimatedImageData@@V?$allocator@VAnimatedImageData@@@std@@@std@@XZ
    MCAPI std::vector<class AnimatedImageData> getAnimatedImageData() const;

    // symbol: ?getArmSize@SubClientConnectionRequest@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string getArmSize() const;

    // symbol: ?getCapeData@SubClientConnectionRequest@@QEBA?AV?$vector@EV?$allocator@E@std@@@std@@XZ
    MCAPI std::vector<uint8_t> getCapeData() const;

    // symbol: ?getCapeId@SubClientConnectionRequest@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string getCapeId() const;

    // symbol: ?getCapeImageHeight@SubClientConnectionRequest@@QEBAGXZ
    MCAPI uint16_t getCapeImageHeight() const;

    // symbol: ?getCapeImageWidth@SubClientConnectionRequest@@QEBAGXZ
    MCAPI uint16_t getCapeImageWidth() const;

    // symbol: ?getClientRandomId@SubClientConnectionRequest@@QEBA_KXZ
    MCAPI uint64_t getClientRandomId() const;

    // symbol: ?getDeviceId@SubClientConnectionRequest@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string getDeviceId() const;

    // symbol: ?getPersonaPieces@SubClientConnectionRequest@@QEBA?AV?$vector@VSerializedPersonaPieceHandle@@V?$allocator@VSerializedPersonaPieceHandle@@@std@@@std@@XZ
    MCAPI std::vector<class SerializedPersonaPieceHandle> getPersonaPieces() const;

    // symbol: ?getPieceTintColors@SubClientConnectionRequest@@QEBA?AV?$unordered_map@W4PieceType@persona@@VTintMapColor@@U?$hash@W4PieceType@persona@@@std@@U?$equal_to@W4PieceType@persona@@@5@V?$allocator@U?$pair@$$CBW4PieceType@persona@@VTintMapColor@@@std@@@5@@std@@XZ
    MCAPI std::unordered_map<::persona::PieceType,class TintMapColor> getPieceTintColors() const;

    // symbol: ?getPlatformId@SubClientConnectionRequest@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string getPlatformId() const;

    // symbol: ?getPlatformOfflineId@SubClientConnectionRequest@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string getPlatformOfflineId() const;

    // symbol: ?getPlatformOnlineId@SubClientConnectionRequest@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string getPlatformOnlineId() const;

    // symbol: ?getPlayFabId@SubClientConnectionRequest@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string getPlayFabId() const;

    // symbol: ?getSelfSignedId@SubClientConnectionRequest@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string getSelfSignedId() const;

    // symbol: ?getSkinAnimationData@SubClientConnectionRequest@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string getSkinAnimationData() const;

    // symbol: ?getSkinColor@SubClientConnectionRequest@@QEBA?AVColor@mce@@XZ
    MCAPI class mce::Color getSkinColor() const;

    // symbol: ?getSkinData@SubClientConnectionRequest@@QEBA?AV?$vector@EV?$allocator@E@std@@@std@@XZ
    MCAPI std::vector<uint8_t> getSkinData() const;

    // symbol: ?getSkinGeometry@SubClientConnectionRequest@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string getSkinGeometry() const;

    // symbol: ?getSkinGeometryEngineVersion@SubClientConnectionRequest@@QEBA?AVSemVersion@@XZ
    MCAPI class SemVersion getSkinGeometryEngineVersion() const;

    // symbol: ?getSkinId@SubClientConnectionRequest@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string getSkinId() const;

    // symbol: ?getSkinImageHeight@SubClientConnectionRequest@@QEBAGXZ
    MCAPI uint16_t getSkinImageHeight() const;

    // symbol: ?getSkinImageWidth@SubClientConnectionRequest@@QEBAGXZ
    MCAPI uint16_t getSkinImageWidth() const;

    // symbol: ?getSkinResourcePatch@SubClientConnectionRequest@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string getSkinResourcePatch() const;

    // symbol: ?getThirdPartyName@SubClientConnectionRequest@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string getThirdPartyName() const;

    // symbol: ?isCapeOnClassicSkin@SubClientConnectionRequest@@QEBA_NXZ
    MCAPI bool isCapeOnClassicSkin() const;

    // symbol: ?isOverrideSkin@SubClientConnectionRequest@@QEBA_NXZ
    MCAPI bool isOverrideSkin() const;

    // symbol: ?isPersonaSkin@SubClientConnectionRequest@@QEBA_NXZ
    MCAPI bool isPersonaSkin() const;

    // symbol: ?isPremiumSkin@SubClientConnectionRequest@@QEBA_NXZ
    MCAPI bool isPremiumSkin() const;

    // symbol: ?isPrimaryUser@SubClientConnectionRequest@@QEBA_NXZ
    MCAPI bool isPrimaryUser() const;

    // symbol: ?isTrustedSkin@SubClientConnectionRequest@@QEBA_NXZ
    MCAPI bool isTrustedSkin() const;

    // symbol: ?toString@SubClientConnectionRequest@@QEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string toString();

    // symbol: ?verify@SubClientConnectionRequest@@QEAA_NAEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@_J@Z
    MCAPI bool verify(std::vector<std::string> const &, int64_t);

    // symbol: ?verifySelfSigned@SubClientConnectionRequest@@QEAA_NXZ
    MCAPI bool verifySelfSigned();

    // symbol: ??1SubClientConnectionRequest@@QEAA@XZ
    MCAPI ~SubClientConnectionRequest();

    // symbol: ?fromString@SubClientConnectionRequest@@SA?AV1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI static class SubClientConnectionRequest fromString(std::string const &);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ??0SubClientConnectionRequest@@AEAA@V?$unique_ptr@VWebToken@@U?$default_delete@VWebToken@@@std@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@@Z
    MCAPI SubClientConnectionRequest(std::unique_ptr<class WebToken>, std::string const &);

    // symbol: ?validate@SubClientConnectionRequest@@AEBA?AV?$unique_ptr@VCertificate@@U?$default_delete@VCertificate@@@std@@@std@@V23@_J_N@Z
    MCAPI std::unique_ptr<class Certificate> validate(std::unique_ptr<class Certificate>, int64_t, bool) const;

    // NOLINTEND

};

