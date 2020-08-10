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

// BlueprintGeneratedClass BP_PlaceMarkerAction.BP_PlaceMarkerAction_C
// 0x001C (FullSize[0x004C] - InheritedSize[0x0030])
// LastOffsetWithSize(0x0030)
#define PADDING_027D - 0x0000 // Minimum to subtract -> (0000)
class UBP_PlaceMarkerAction_C : public UBP_RadialAction_C
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_027D, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0030(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0008 PADDING_027D, struct FScriptMulticastDelegate,                                       DoAction);                                                 // 0x0038(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
		DEFINE_MEMBER_NNN(0x0018 PADDING_027D, int,                                                                   PlaceMarkerRange);                                         // 0x0048(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PlaceMarkerAction.BP_PlaceMarkerAction_C");
		return ptr;
	}


	void DoAction_Event(class USQMapMarkerDataAsset* MapMarkerData, class UBaseRadialMenu_C* RadialMenu, class UClass* MapMarkerClass);
	void ExecuteUbergraph_BP_PlaceMarkerAction(int EntryPoint);
	void DoAction__DelegateSignature(class UClass* NewParam);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
