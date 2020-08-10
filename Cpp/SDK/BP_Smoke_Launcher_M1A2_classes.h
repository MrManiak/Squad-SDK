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
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Smoke_Launcher_M1A2.BP_Smoke_Launcher_M1A2_C
// 0x0008 (FullSize[0x09C0] - InheritedSize[0x09B8])
// LastOffsetWithSize(0x09B5)
#define PADDING_020E - 0x0000 // Minimum to subtract -> (0003)
class ABP_Smoke_Launcher_M1A2_C : public ASmoke_Launcher_C
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0003 PADDING_020E, class ASQVehicleSeat*,                                                 OwningTurret);                                             // 0x09B8(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Smoke_Launcher_M1A2.BP_Smoke_Launcher_M1A2_C");
		return ptr;
	}


};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
