#pragma once

// Name: S, Version: b


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

// BlueprintGeneratedClass BP_Smoke_Launcher_M1A2_Commander.BP_Smoke_Launcher_M1A2_Commander_C
// 0x0010 (FullSize[0x09C8] - InheritedSize[0x09B8])
class ABP_Smoke_Launcher_M1A2_Commander_C : public ASmoke_Launcher_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x09B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class ASQVehicleSeat*                              OwningTurret;                                              // 0x09C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Smoke_Launcher_M1A2_Commander.BP_Smoke_Launcher_M1A2_Commander_C");
		return ptr;
	}



	void BPBeginUse();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Smoke_Launcher_M1A2_Commander(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
