// Generated by IDAStruct_To_CHeader.py
#pragma once
#include <windows.h>


#pragma pack(push, 1)
struct CDamageManager	// sizeof = 0x18
{
	BYTE field_0;
	BYTE _undefined_0;
	BYTE _undefined_1;
	BYTE _undefined_2;
	BYTE engineStatus;
	BYTE wheelsStatus[4];
	BYTE field_9[6];
	BYTE __align;
	DWORD lightsStatus;
	DWORD panelStatus;
};
#pragma pack(pop)

static_assert(sizeof(CDamageManager) == 0x18, "Incorrect struct size: CDamageManager");