// Generated by IDAStruct_To_CHeader.py
#pragma once
#include <windows.h>
#include "RwMatrix.h"


#pragma pack(push, 1)
struct CParticle	// sizeof = 0x84
{
	DWORD next;
	DWORD prev;
	DWORD pUnk;
	DWORD AttachingMatrix;
	RwMatrix m;
	BYTE status;
	BYTE unkStatus;
	BYTE field_52;
	BYTE field_53;
	DWORD field_54;
	DWORD DistFromCamera;
	WORD Time;
	WORD FrequencyIntensity;
	WORD Speed;
	BYTE Flag;
	BYTE field_63;
	DWORD field_64;
	DWORD field_68;
	DWORD field_6C;
	DWORD field_70;
	DWORD field_74;
	DWORD field_78;
	DWORD field_7C;
	DWORD field_80;
};
#pragma pack(pop)

static_assert(sizeof(CParticle) == 0x84, "Incorrect struct size: CParticle");