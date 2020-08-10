#pragma once

// Name: Sq, Version: b21


#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

/*!!HELPER_DEF!!*/

/*!!DEFINE!!*/

namespace UFT
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum MRMesh.EMeshTrackerVertexColorMode
enum class EMeshTrackerVertexColorMode : uint8_t
{
	EMeshTrackerVertexColorMode__None = 0,
	EMeshTrackerVertexColorMode__Confidence = 1,
	EMeshTrackerVertexColorMode__Block = 2,
	EMeshTrackerVertexColorMode__EMeshTrackerVertexColorMode_MAX = 3,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct MRMesh.MRMeshConfiguration
// 0x0001
struct FMRMeshConfiguration
{

};
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
