// Generated by IDAStruct_To_CHeader.py
#pragma once
#include <windows.h>
#include "RxRenderStateVector.h"


#pragma pack(push, 1)
struct RxPipelineModule	// sizeof = 0x60
{
	DWORD rxPipesFreeList;
	RxRenderStateVector vector;
	DWORD field_30;
	DWORD field_34;
	DWORD maxNodes;
	DWORD pPipeline;
	DWORD field_40;
	DWORD field_44;
	DWORD field_48;
	DWORD field_4C;
	DWORD field_50;
	DWORD field_54;
	DWORD field_58;
	DWORD field_5C;
};
#pragma pack(pop)

static_assert(sizeof(RxPipelineModule) == 0x60, "Incorrect struct size: RxPipelineModule");