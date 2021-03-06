// Generated by IDAStruct_To_CHeader.py
#pragma once
#include <windows.h>
#include "RwV3D.h"


#pragma pack(push, 1)
struct CHandlingBoat	// sizeof = 0x3C
{
	DWORD index;
	DWORD thrustY;
	DWORD thrustZ;
	DWORD thrustAppZ;
	DWORD aqPlaneForce;
	DWORD aqPlaneLimit;
	DWORD aqPlaneOffset;
	DWORD waveAudioMult;
	DWORD look_L_R_BehindCamHeight;
	RwV3D moveRes;
	RwV3D turnRes;
};
#pragma pack(pop)

static_assert(sizeof(CHandlingBoat) == 0x3C, "Incorrect struct size: CHandlingBoat");