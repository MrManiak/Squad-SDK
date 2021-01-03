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

// BlueprintGeneratedClass Comp_VehicleBayHandler.Comp_VehicleBayHandler_C
// 0x0020 (FullSize[0x00F8] - InheritedSize[0x00D8])
class UComp_VehicleBayHandler_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class ASQPlayerController*                         SQ_PC;                                                     // 0x00E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASQForwardBase*                              Target_Fob;                                                // 0x00E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_VehicleBay_C*                            Vehicle_Bay;                                               // 0x00F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Comp_VehicleBayHandler.Comp_VehicleBayHandler_C");
		return ptr;
	}



	bool Can_Afford(int Construction, int Ammo);
	void Get_Fob(class ASQForwardBase** fob);
	void Server_Request_Spawn_Vehicle(class UClass* Class, class ABP_VehicleBay_C* Vehicle_Bay, bool Require_FOB);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Comp_VehicleBayHandler(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
