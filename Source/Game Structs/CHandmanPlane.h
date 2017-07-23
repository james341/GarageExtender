// Generated by IDAStruct_To_CHeader.py
#pragma once
#include <windows.h>
#include "CTexCoord.h"
#include "RwV3D.h"
#include "RwRGBA.h"


#pragma pack(push, 1)
struct CHandmanPlane	// sizeof = 0x58
{
	RwV3D conerAA;
	RwV3D cornerAB;
	RwV3D cornerBA;
	RwV3D cornerBB;
	CTexCoord texCoordAA;
	CTexCoord texCoordAB;
	CTexCoord texCoordBA;
	CTexCoord texCoordBB;
	DWORD distanceToCamera;
	RwRGBA color;
};
#pragma pack(pop)

static_assert(sizeof(CHandmanPlane) == 0x58, "Incorrect struct size: CHandmanPlane");