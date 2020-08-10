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

// WidgetBlueprintGeneratedClass W_TeamInfo.W_TeamInfo_C
// 0x0148 (FullSize[0x0328] - InheritedSize[0x01E0])
// LastOffsetWithSize(0x01E0)
#define PADDING_04F7 - 0x0000 // Minimum to subtract -> (0050)
class UW_TeamInfo_C : public UUserWidget
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0050 PADDING_04F7, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0230(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0058 PADDING_04F7, class UWidgetAnimation*,                                               BounceArrow);                                              // 0x0238(0x0008)  (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0060 PADDING_04F7, class UWidgetAnimation*,                                               Alpha);                                                    // 0x0240(0x0008)  (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0068 PADDING_04F7, class UImage*,                                                         Badge);                                                    // 0x0248(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0070 PADDING_04F7, class UButton*,                                                        ButtonSelect);                                             // 0x0250(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0078 PADDING_04F7, class UImage*,                                                         Image_7);                                                  // 0x0258(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0080 PADDING_04F7, class UBorder*,                                                        Info);                                                     // 0x0260(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0088 PADDING_04F7, class UImage*,                                                         LargeFlag);                                                // 0x0268(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0090 PADDING_04F7, class UScaleBox*,                                                      ScaleBox_Arrow);                                           // 0x0270(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0098 PADDING_04F7, class UScaleBox*,                                                      ScaleBox_TeamImage);                                       // 0x0278(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00A0 PADDING_04F7, class UBorder*,                                                        SelectedBorder);                                           // 0x0280(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00A8 PADDING_04F7, class USizeBox*,                                                       Size_Blurb);                                               // 0x0288(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00B0 PADDING_04F7, class USizeBox*,                                                       SizeBox_1);                                                // 0x0290(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00B8 PADDING_04F7, class USizeBox*,                                                       SizeBox_SmallFlag);                                        // 0x0298(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00C0 PADDING_04F7, class UTextBlock*,                                                     TB_Blurb);                                                 // 0x02A0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00C8 PADDING_04F7, class UTextBlock*,                                                     TB_Division);                                              // 0x02A8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00D0 PADDING_04F7, class UTextBlock*,                                                     TB_Players);                                               // 0x02B0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00D8 PADDING_04F7, class UTextBlock*,                                                     TB_TeamName);                                              // 0x02B8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00E0 PADDING_04F7, class UTextBlock*,                                                     TB_Text);                                                  // 0x02C0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00E8 PADDING_04F7, class UImage*,                                                         TeamImage);                                                // 0x02C8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00F0 PADDING_04F7, bool,                                                                  Team2_);                                                   // 0x02D0(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x00F8 PADDING_04F7, struct FScriptMulticastDelegate,                                       Clicked);                                                  // 0x02D8(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
		DEFINE_MEMBER_NNN(0x0108 PADDING_04F7, bool,                                                                  selected);                                                 // 0x02E8(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x0110 PADDING_04F7, class UMaterialInstanceDynamic*,                                       MID_RendTex);                                              // 0x02F0(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0118 PADDING_04F7, class ABP_R2T_Soldier_C*,                                              R2T_Blueprint);                                            // 0x02F8(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0120 PADDING_04F7, class UMaterialInstanceDynamic*,                                       MID_Flag);                                                 // 0x0300(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0128 PADDING_04F7, class UImage*,                                                         TeamIcon);                                                 // 0x0308(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0130 PADDING_04F7, class ASQTeamState*,                                                   Team);                                                     // 0x0310(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0138 PADDING_04F7, class ASQPlayerController*,                                            My_PC);                                                    // 0x0318(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0140 PADDING_04F7, class ASQPlayerState*,                                                 My_PS);                                                    // 0x0320(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_TeamInfo.W_TeamInfo_C");
		return ptr;
	}


	bool Same_Team();
	void Init_Team_Image();
	void Refresh_Descriptions();
	void Validate_Team(bool* Success);
	void Update_Button_Color();
	void Update_Button();
	void Are_Teams_Unbalanced(bool* bUnbalanced);
	void Init_Team(class ASQTeamState* Team);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void BndEvt__ButtonSelect_K2Node_ComponentBoundEvent_229_OnButtonClickedEvent__DelegateSignature();
	void Get_Team_Info();
	void Set_Minimised(bool Minimised);
	void Update_Widget();
	void Timer_Enable_Button();
	void Disable_Button_Temporarily();
	void ExecuteUbergraph_W_TeamInfo(int EntryPoint);
	void Clicked__DelegateSignature(class ASQTeamState* Team);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
