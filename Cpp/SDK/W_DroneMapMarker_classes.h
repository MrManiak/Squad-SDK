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

// WidgetBlueprintGeneratedClass W_DroneMapMarker.W_DroneMapMarker_C
// 0x0018 (FullSize[0x02D0] - InheritedSize[0x02B8])
// LastOffsetWithSize(0x02B8)
#define PADDING_02E6 - 0x0000 // Minimum to subtract -> (0000)
class UW_DroneMapMarker_C : public USQMapWidgetPawn
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_02E6, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x02B8(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0008 PADDING_02E6, class UImage*,                                                         Image_1);                                                  // 0x02C0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0010 PADDING_02E6, class UImage*,                                                         Player_Cone_Image);                                        // 0x02C8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_DroneMapMarker.W_DroneMapMarker_C");
		return ptr;
	}


	void OnIsInSelfSquad();
	void Update_Colors();
	void OnIsOwnedBySelfChanged();
	void ExecuteUbergraph_W_DroneMapMarker(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
