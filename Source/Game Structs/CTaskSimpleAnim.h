// Generated by IDAStruct_To_CHeader.py
#pragma once
#include <windows.h>
#include "CTask.h"


#pragma pack(push, 1)
struct CTaskSimpleAnim	// sizeof = 0x10
{
	CTask __parent;
	DWORD field_8;
	BYTE field_C;
	BYTE field_D[3];
};
#pragma pack(pop)

static_assert(sizeof(CTaskSimpleAnim) == 0x10, "Incorrect struct size: CTaskSimpleAnim");