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

// BlueprintGeneratedClass BP_PlaceMarkerActionModel.BP_PlaceMarkerActionModel_C
// 0x0018 (FullSize[0x00B8] - InheritedSize[0x00A0])
class UBP_PlaceMarkerActionModel_C : public UBP_RadialActionModel_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USQMapMarkerDataAsset*                       MapMarkerData;                                             // 0x00A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      MarkerClass;                                               // 0x00B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PlaceMarkerActionModel.BP_PlaceMarkerActionModel_C");
		return ptr;
	}



	void OnClicked(class UBaseRadialMenu_C* Radial);
	void ExecuteUbergraph_BP_PlaceMarkerActionModel(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
