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

// WidgetBlueprintGeneratedClass UMG_GenericState.UMG_GenericState_C
// 0x00C4 (FullSize[0x02A4] - InheritedSize[0x01E0])
// LastOffsetWithSize(0x01E0)
#define PADDING_01AA - 0x0000 // Minimum to subtract -> (0050)
class UUMG_GenericState_C : public UUserWidget
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0050 PADDING_01AA, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0230(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0058 PADDING_01AA, class UImage*,                                                         Icon);                                                     // 0x0238(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0060 PADDING_01AA, class UImage*,                                                         InnerBar);                                                 // 0x0240(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0068 PADDING_01AA, class UImage*,                                                         OuterBar);                                                 // 0x0248(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0070 PADDING_01AA, class UMaterialInstanceDynamic*,                                       MI_InnerBar);                                              // 0x0250(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0078 PADDING_01AA, class UMaterialInstanceDynamic*,                                       MI_OuterBar);                                              // 0x0258(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0080 PADDING_01AA, class UTexture2D*,                                                     State_Texture);                                            // 0x0260(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0088 PADDING_01AA, bool,                                                                  Inner_Visible);                                            // 0x0268(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x0089 PADDING_01AA, bool,                                                                  Outer_Visible);                                            // 0x0269(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x008C PADDING_01AA, struct FLinearColor,                                                   Inner_Bar_Color);                                          // 0x026C(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x009C PADDING_01AA, struct FLinearColor,                                                   Outer_Bar_Color);                                          // 0x027C(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00AC PADDING_01AA, struct FLinearColor,                                                   Icon_Color);                                               // 0x028C(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00BC PADDING_01AA, float,                                                                 Outer_Percent);                                            // 0x029C(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00C0 PADDING_01AA, float,                                                                 Inner_Percent);                                            // 0x02A0(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_GenericState.UMG_GenericState_C");
		return ptr;
	}


	void Set_Icon_Color(const struct FLinearColor& InColorAndOpacity);
	void Set_Outer_Color(const struct FLinearColor& InColorAndOpacity);
	void Set_Inner_Color(const struct FLinearColor& InColorAndOpacity);
	void Set_Icon(class UTexture2D* Texture);
	void Set_Outer_Visibility(bool Outer_Visible);
	void Set_Inner_Visibility(bool Inner_Visible);
	void Set_Outer_Bar_Percent(float Value);
	void Set_Inner_Bar_Percent(float Value);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void ExecuteUbergraph_UMG_GenericState(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
