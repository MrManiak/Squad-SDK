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

// BlueprintGeneratedClass BP_RadialVoiceCommands_Parent.BP_RadialVoiceCommands_Parent_C
// 0x0058 (FullSize[0x00B0] - InheritedSize[0x0058])
// LastOffsetWithSize(0x0058)
#define PADDING_0253 - 0x0000 // Minimum to subtract -> (0000)
class UBP_RadialVoiceCommands_Parent_C : public UBP_RadialMenuModel_C
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0253, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0058(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0008 PADDING_0253, TArray<class USoundCue*>,                                              Sounds);                                                   // 0x0060(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
		DEFINE_MEMBER_NNN(0x0018 PADDING_0253, TArray<struct FText>,                                                  Display_Names);                                            // 0x0070(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
		DEFINE_MEMBER_NNN(0x0028 PADDING_0253, class USoundCue*,                                                      Center_Sound);                                             // 0x0080(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0030 PADDING_0253, struct FText,                                                          Center_Name);                                              // 0x0088(0x0018)  (Edit, BlueprintVisible, DisableEditOnInstance)
		DEFINE_MEMBER_NNN(0x0048 PADDING_0253, class UDataTable*,                                                     Data_Table_Voice);                                         // 0x00A0(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0050 PADDING_0253, class UClass*,                                                         Voice_Command_Radial_Class);                               // 0x00A8(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_RadialVoiceCommands_Parent.BP_RadialVoiceCommands_Parent_C");
		return ptr;
	}


	void Create_Radial_Widgets(class UBaseRadialMenu_C* Base_Radial);
	void CreateChildWidgets(class UBaseRadialMenu_C* BaseRadialMenu);
	void ExecuteUbergraph_BP_RadialVoiceCommands_Parent(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
