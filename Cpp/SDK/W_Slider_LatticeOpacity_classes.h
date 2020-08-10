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

// WidgetBlueprintGeneratedClass W_Slider_LatticeOpacity.W_Slider_LatticeOpacity_C
// 0x0081 (FullSize[0x0261] - InheritedSize[0x01E0])
// LastOffsetWithSize(0x01E0)
#define PADDING_0CD3 - 0x0000 // Minimum to subtract -> (0050)
class UW_Slider_LatticeOpacity_C : public UUserWidget
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0050 PADDING_0CD3, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0230(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0058 PADDING_0CD3, class USettingsItem_Slider_C*,                                         SettingsItem_Slider);                                      // 0x0238(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0060 PADDING_0CD3, class ASQPlayerState*,                                                 My_PS);                                                    // 0x0240(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0068 PADDING_0CD3, class ASQTeamState*,                                                   Current_Team);                                             // 0x0248(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0070 PADDING_0CD3, float,                                                                 Cached_Scale);                                             // 0x0250(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0078 PADDING_0CD3, class USaveData_UI_C*,                                                 Save);                                                     // 0x0258(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0080 PADDING_0CD3, bool,                                                                  Remove_after_interact);                                    // 0x0260(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_Slider_LatticeOpacity.W_Slider_LatticeOpacity_C");
		return ptr;
	}


	void BndEvt__SettingsItem_Slider_K2Node_ComponentBoundEvent_6_OnCaptureEnd__DelegateSignature(float Value);
	void Set_Value(float Value);
	void Construct();
	void ExecuteUbergraph_W_Slider_LatticeOpacity(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
