// Generated by IDAStruct_To_CHeader.py
#pragma once
#include <windows.h>
#include "CTask.h"
#include "RwV3D.h"


#pragma pack(push, 1)
struct CTaskSimpleGunCtrl	// sizeof = 0x3C
{
	CTask __parent;
	BYTE field_8;
	BYTE _undefined_0;
	BYTE _undefined_1;
	BYTE _undefined_2;
	DWORD field_C;
	RwV3D field_10;
	RwV3D field_1C;
	DWORD field_28;
	WORD field_2C;
	BYTE field_2E;
	BYTE _undefined_3;
	DWORD field_30;
	DWORD field_34;
	BYTE field_38;
	BYTE field_39;
	BYTE field_3A;
	BYTE field_3B;
};
#pragma pack(pop)

static_assert(sizeof(CTaskSimpleGunCtrl) == 0x3C, "Incorrect struct size: CTaskSimpleGunCtrl");