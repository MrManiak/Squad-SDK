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

// WidgetBlueprintGeneratedClass BP_MapWidgetVehicleViewCone.BP_MapWidgetVehicleViewCone_C
// 0x0020 (FullSize[0x02D8] - InheritedSize[0x02B8])
// LastOffsetWithSize(0x02B8)
#define PADDING_0CA4 - 0x0000 // Minimum to subtract -> (0000)
class UBP_MapWidgetVehicleViewCone_C : public USQMapWidgetVehicleSeat
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0CA4, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x02B8(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0008 PADDING_0CA4, class UImage*,                                                         BP_Player_Cone_Image);                                     // 0x02C0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0010 PADDING_0CA4, class UScaleBox*,                                                      ScaleBox_1);                                               // 0x02C8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0018 PADDING_0CA4, class UCanvasPanel*,                                                   ViewCone_Rotation);                                        // 0x02D0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_MapWidgetVehicleViewCone.BP_MapWidgetVehicleViewCone_C");
		return ptr;
	}


	void OnCameraRotationYawChanged();
	void OnScaleChanged(float UniformScale);
	void ExecuteUbergraph_BP_MapWidgetVehicleViewCone(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
