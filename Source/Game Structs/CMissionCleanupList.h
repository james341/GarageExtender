// Generated by IDAStruct_To_CHeader.py
#pragma once
#include <windows.h>
#include "CMissionCleanup.h"


#pragma pack(push, 1)
struct CMissionCleanupList	// sizeof = 0x259
{
	CMissionCleanup objects[75];
	BYTE count;
};
#pragma pack(pop)

static_assert(sizeof(CMissionCleanupList) == 0x259, "Incorrect struct size: CMissionCleanupList");