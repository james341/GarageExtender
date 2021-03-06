// Generated by IDAStruct_To_CHeader.py
#pragma once
#include <windows.h>
#include "RwV3D.h"


#pragma pack(push, 1)
struct CStuntJump	// sizeof = 0x44
{
	RwV3D startLowerLeft;
	RwV3D startUpperRight;
	RwV3D landLowerLeft;
	RwV3D landUpperRight;
	RwV3D camera;
	DWORD reward;
	BYTE done;
	BYTE found;
	BYTE field_42;
	BYTE field_43;
};
#pragma pack(pop)

static_assert(sizeof(CStuntJump) == 0x44, "Incorrect struct size: CStuntJump");