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

// WidgetBlueprintGeneratedClass W_SQMapScaleBarSingle.W_SQMapScaleBarSingle_C
// 0x0098 (FullSize[0x0278] - InheritedSize[0x01E0])
// LastOffsetWithSize(0x01E0)
#define PADDING_04FF - 0x0000 // Minimum to subtract -> (0050)
class UW_SQMapScaleBarSingle_C : public UUserWidget
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0050 PADDING_04FF, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0230(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0058 PADDING_04FF, class UImage*,                                                         LeftEdge);                                                 // 0x0238(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0060 PADDING_04FF, class UImage*,                                                         LineLength);                                               // 0x0240(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0068 PADDING_04FF, class UTextBlock*,                                                     MetersText);                                               // 0x0248(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0070 PADDING_04FF, class UImage*,                                                         RightEdge);                                                // 0x0250(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0078 PADDING_04FF, float,                                                                 ScaleInMeters);                                            // 0x0258(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0080 PADDING_04FF, class USizeBox*,                                                       ZoomLayer);                                                // 0x0260(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0088 PADDING_04FF, float,                                                                 InitialZoom);                                              // 0x0268(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x008C PADDING_04FF, float,                                                                 PixelLengthAtInitialZoom);                                 // 0x026C(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0090 PADDING_04FF, float,                                                                 MaxFractionOfMap);                                         // 0x0270(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0094 PADDING_04FF, float,                                                                 MinFractionOfMap);                                         // 0x0274(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_SQMapScaleBarSingle.W_SQMapScaleBarSingle_C");
		return ptr;
	}


	void BarSizeInPixels(float* OutWidth);
	void Construct();
	void UpdateZoom(float ZoomAmount);
	void InitializeScaleBar(float InitialZoomAmount, class USizeBox* ZoomLayer);
	void ExecuteUbergraph_W_SQMapScaleBarSingle(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
