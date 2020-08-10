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

// WidgetBlueprintGeneratedClass UMG_StanceState.UMG_StanceState_C
// 0x00A9 (FullSize[0x0289] - InheritedSize[0x01E0])
// LastOffsetWithSize(0x01E0)
#define PADDING_0CC8 - 0x0000 // Minimum to subtract -> (0050)
class UUMG_StanceState_C : public UUserWidget
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0050 PADDING_0CC8, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0230(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0058 PADDING_0CC8, class UWidgetAnimation*,                                               BleedAnimationOff);                                        // 0x0238(0x0008)  (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0060 PADDING_0CC8, class UWidgetAnimation*,                                               BleedAnimation);                                           // 0x0240(0x0008)  (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0068 PADDING_0CC8, class UCanvasPanel*,                                                   CanvasPanel_1);                                            // 0x0248(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0070 PADDING_0CC8, class UImage*,                                                         Lean);                                                     // 0x0250(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0078 PADDING_0CC8, class UImage*,                                                         Stance);                                                   // 0x0258(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0080 PADDING_0CC8, class UTexture2D*,                                                     StandIcon);                                                // 0x0260(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0088 PADDING_0CC8, class UTexture2D*,                                                     ProneIcon);                                                // 0x0268(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0090 PADDING_0CC8, class UTexture2D*,                                                     CrouchIcon);                                               // 0x0270(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0098 PADDING_0CC8, class UTexture2D*,                                                     LeanLeft);                                                 // 0x0278(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00A0 PADDING_0CC8, class UTexture2D*,                                                     LeanRight);                                                // 0x0280(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00A8 PADDING_0CC8, bool,                                                                  bBleedingAnimPlaying);                                     // 0x0288(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_StanceState.UMG_StanceState_C");
		return ptr;
	}


	void UpdateBleeding(class ASQSoldier* Soldier);
	void UpdateLean(class ASQSoldier* Soldier);
	void UpdateStance(class ASQSoldier* Soldier);
	void UpdateStanceState();
	void Update_Stance_Visibility(class USaveData_UI_C* Data);
	void Construct();
	void ExecuteUbergraph_UMG_StanceState(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
