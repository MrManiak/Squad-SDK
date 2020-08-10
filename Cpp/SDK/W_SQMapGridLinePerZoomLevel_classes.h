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

// WidgetBlueprintGeneratedClass W_SQMapGridLinePerZoomLevel.W_SQMapGridLinePerZoomLevel_C
// 0x007C (FullSize[0x025C] - InheritedSize[0x01E0])
// LastOffsetWithSize(0x01E0)
#define PADDING_04FA - 0x0000 // Minimum to subtract -> (0050)
class UW_SQMapGridLinePerZoomLevel_C : public UUserWidget
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0050 PADDING_04FA, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0230(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0058 PADDING_04FA, class UImage*,                                                         GridLineImage);                                            // 0x0238(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0060 PADDING_04FA, class UMaterialInstanceDynamic*,                                       MaterialInstance);                                         // 0x0240(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0068 PADDING_04FA, class UCurveFloat*,                                                    OpacityCurve);                                             // 0x0248(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0070 PADDING_04FA, float,                                                                 ScaleAmountStart);                                         // 0x0250(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0074 PADDING_04FA, float,                                                                 ScaleAmountEnd);                                           // 0x0254(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0078 PADDING_04FA, float,                                                                 ViewableDistance);                                         // 0x0258(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_SQMapGridLinePerZoomLevel.W_SQMapGridLinePerZoomLevel_C");
		return ptr;
	}


	void UpdateOpacity(float ZoomAmount);
	void InitializeTexture(class UCurveFloat* GridZoomOpacities, class UTexture2D* GridTextures, float ZoomFadeIn, float ZoomOpaque, int ScaleFactor, const struct FLinearColor& Tint, const struct FVector2D& GridNumbers, float StartingZoom);
	void ExecuteUbergraph_W_SQMapGridLinePerZoomLevel(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
