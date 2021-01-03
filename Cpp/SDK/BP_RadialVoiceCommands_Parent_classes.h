#pragma once

// Name: S, Version: b


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
class UBP_RadialVoiceCommands_Parent_C : public UBP_RadialMenuModel_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0058(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	TArray<class USoundCue*>                           Sounds;                                                    // 0x0060(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FText>                               Display_Names;                                             // 0x0070(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class USoundCue*                                   Center_Sound;                                              // 0x0080(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       Center_Name;                                               // 0x0088(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UDataTable*                                  Data_Table_Voice;                                          // 0x00A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      Voice_Command_Radial_Class;                                // 0x00A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


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
