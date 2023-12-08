#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/deps/core/utility/ReadOnlyBinaryStream.h"

class BinaryStream : public ::ReadOnlyBinaryStream {
public:
	// prevent constructor by default
	BinaryStream& operator=(BinaryStream const&) = delete;
	BinaryStream(BinaryStream const&) = delete;

public:
	// NOLINTBEGIN
	// vIndex: 0, symbol: __unk_vfn_0
	virtual void __unk_vfn_0();

	// symbol: ??1BinaryStream@@UEAA@XZ
	MCVAPI ~BinaryStream();

	// symbol: ??0BinaryStream@@QEAA@XZ
	MCAPI BinaryStream();

	// symbol: ??0BinaryStream@@QEAA@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
	MCAPI BinaryStream(std::string&, bool);

	// symbol: ?getAndReleaseData@BinaryStream@@QEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
	MCAPI std::string getAndReleaseData();

	// symbol: ?writeString@BinaryStream@@QEAAXV?$basic_string_view@DU?$char_traits@D@std@@@std@@PEBD1@Z
	MCAPI void writeString(std::string_view, char const*, char const*);
};

