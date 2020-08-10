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

// WidgetBlueprintGeneratedClass W_VoipOwningPlayer.W_VoipOwningPlayer_C
// 0x00D9 (FullSize[0x02B9] - InheritedSize[0x01E0])
// LastOffsetWithSize(0x01E0)
#define PADDING_0408 - 0x0000 // Minimum to subtract -> (0050)
class UW_VoipOwningPlayer_C : public UUserWidget
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0050 PADDING_0408, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0230(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0058 PADDING_0408, class UBorder*,                                                        Border_1);                                                 // 0x0238(0x0008)  (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0060 PADDING_0408, class UBorder*,                                                        Border_command);                                           // 0x0240(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0068 PADDING_0408, class UTextBlock*,                                                     TB_Channel);                                               // 0x0248(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0070 PADDING_0408, class UImage*,                                                         VoipIcon);                                                 // 0x0250(0x0008)  (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0078 PADDING_0408, class ASQHUD*,                                                         REF_HUD);                                                  // 0x0258(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0080 PADDING_0408, ESlateVisibility,                                                      Voip_Vis);                                                 // 0x0260(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0084 PADDING_0408, struct FLinearColor,                                                   Voip_Colour);                                              // 0x0264(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0094 PADDING_0408, struct FLinearColor,                                                   SquadToAllSquadsRadioColor);                               // 0x0274(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00A4 PADDING_0408, struct FLinearColor,                                                   SquadToSquadRadioColor);                                   // 0x0284(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00B8 PADDING_0408, struct FText,                                                          Voip_Channel_Text);                                        // 0x0298(0x0018)  (Edit, BlueprintVisible, DisableEditOnInstance)
		DEFINE_MEMBER_NNN(0x00D0 PADDING_0408, class ASQPlayerController*,                                            My_PC);                                                    // 0x02B0(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00D8 PADDING_0408, ESQVoiceChannel,                                                       CurrentState);                                             // 0x02B8(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_VoipOwningPlayer.W_VoipOwningPlayer_C");
		return ptr;
	}


	struct FText Get_Squad_Leader_Name();
	void Construct();
	void Refresh_Voip();
	void ExecuteUbergraph_W_VoipOwningPlayer(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
