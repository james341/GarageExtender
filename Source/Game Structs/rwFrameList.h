// Generated by IDAStruct_To_CHeader.py
#pragma once
#include <windows.h>


#pragma pack(push, 1)
struct rwFrameList	// sizeof = 0x8
{
	DWORD frames;
	DWORD numFrames;
};
#pragma pack(pop)

static_assert(sizeof(rwFrameList) == 0x8, "Incorrect struct size: rwFrameList");