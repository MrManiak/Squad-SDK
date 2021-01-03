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

// BlueprintGeneratedClass BP_GenericDestroyedVehicleWreck.BP_GenericDestroyedVehicleWreck_C
// 0x0010 (FullSize[0x0320] - InheritedSize[0x0310])
class ABP_GenericDestroyedVehicleWreck_C : public ASQDestroyedVehicle
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0310(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UClass*                                      WreckDestructionLastingEffect;                             // 0x0318(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_GenericDestroyedVehicleWreck.BP_GenericDestroyedVehicleWreck_C");
		return ptr;
	}



	void ReceiveDestroyed();
	void ExecuteUbergraph_BP_GenericDestroyedVehicleWreck(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
