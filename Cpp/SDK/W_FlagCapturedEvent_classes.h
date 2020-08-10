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

// WidgetBlueprintGeneratedClass W_FlagCapturedEvent.W_FlagCapturedEvent_C
// 0x008A (FullSize[0x026A] - InheritedSize[0x01E0])
// LastOffsetWithSize(0x01E0)
#define PADDING_0CC6 - 0x0000 // Minimum to subtract -> (0050)
class UW_FlagCapturedEvent_C : public UUserWidget
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0050 PADDING_0CC6, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0230(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0058 PADDING_0CC6, class UWidgetAnimation*,                                               FlagAnim);                                                 // 0x0238(0x0008)  (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0060 PADDING_0CC6, class UWidgetAnimation*,                                               AlphaAnim);                                                // 0x0240(0x0008)  (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0068 PADDING_0CC6, class UImage*,                                                         Image_Flag);                                               // 0x0248(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0070 PADDING_0CC6, class UImage*,                                                         Image_Progress);                                           // 0x0250(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0078 PADDING_0CC6, class UTextBlock*,                                                     TB_FlagName);                                              // 0x0258(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0080 PADDING_0CC6, class UTextBlock*,                                                     TB_State);                                                 // 0x0260(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0088 PADDING_0CC6, unsigned char,                                                         New_Team);                                                 // 0x0268(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0089 PADDING_0CC6, unsigned char,                                                         Old_Team);                                                 // 0x0269(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_FlagCapturedEvent.W_FlagCapturedEvent_C");
		return ptr;
	}


	void Set_Owner_Flag_Image();
	void Set_State_Text();
	void Setup_Fill_Image();
	void Change_Flag_Image();
	void Play_Capture_Animation(const struct FText& Flag_Name, unsigned char New_Owning_Team, unsigned char Last_Owning_Team);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();
	void ExecuteUbergraph_W_FlagCapturedEvent(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
