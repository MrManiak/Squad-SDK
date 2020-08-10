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

// Enum PhysicsCore.EChaosBufferMode
enum class EChaosBufferMode : uint8_t
{
	EChaosBufferMode__Double       = 0,
	EChaosBufferMode__Triple       = 1,
	EChaosBufferMode__Num          = 2,
	EChaosBufferMode__Invalid      = 3,
	EChaosBufferMode__EChaosBufferMode_MAX = 4,

};

// Enum PhysicsCore.EChaosThreadingMode
enum class EChaosThreadingMode : uint8_t
{
	EChaosThreadingMode__DedicatedThread = 0,
	EChaosThreadingMode__TaskGraph = 1,
	EChaosThreadingMode__SingleThread = 2,
	EChaosThreadingMode__Num       = 3,
	EChaosThreadingMode__Invalid   = 4,
	EChaosThreadingMode__EChaosThreadingMode_MAX = 5,

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
