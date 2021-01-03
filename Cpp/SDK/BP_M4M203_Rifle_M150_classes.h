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

// BlueprintGeneratedClass BP_M4M203_Rifle_M150.BP_M4M203_Rifle_M150_C
// 0x0014 (FullSize[0x070C] - InheritedSize[0x06F8])
class ABP_M4M203_Rifle_M150_C : public ABP_M4M203_Rifle_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x06F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FVector                                     LScale;                                                    // 0x0700(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_M4M203_Rifle_M150.BP_M4M203_Rifle_M150_C");
		return ptr;
	}



	void BlueprintOnZoom(bool bNewZoom);
	void ExecuteUbergraph_BP_M4M203_Rifle_M150(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
