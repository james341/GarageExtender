// Generated by IDAStruct_To_CHeader.py
#pragma once
#include <windows.h>


#pragma pack(push, 1)
struct IGraphBuilderVtbl	// sizeof = 0x48
{
	DWORD QueryInterface;
	DWORD AddRef;
	DWORD Release;
	DWORD AddFilter;
	DWORD RemoveFilter;
	DWORD EnumFilters;
	DWORD FindFilterByName;
	DWORD ConnectDirect;
	DWORD Reconnect;
	DWORD Disconnect;
	DWORD SetDefaultSyncSource;
	DWORD Connect;
	DWORD Render;
	DWORD RenderFile;
	DWORD AddSourceFilter;
	DWORD SetLogFile;
	DWORD Abort;
	DWORD ShouldOperationContinue;
};
#pragma pack(pop)

static_assert(sizeof(IGraphBuilderVtbl) == 0x48, "Incorrect struct size: IGraphBuilderVtbl");