// Generated by IDAStruct_To_CHeader.py
#pragma once
#include <windows.h>
#include "DIPROPHEADER.h"


#pragma pack(push, 1)
struct DIPROPRANGE	// sizeof = 0x18
{
	DIPROPHEADER diph;
	DWORD lMin;
	DWORD lMax;
};
#pragma pack(pop)

static_assert(sizeof(DIPROPRANGE) == 0x18, "Incorrect struct size: DIPROPRANGE");