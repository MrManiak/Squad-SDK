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

// WidgetBlueprintGeneratedClass BP_PlayerSoundStateButton.BP_PlayerSoundStateButton_C
// 0x0024 (FullSize[0x0298] - InheritedSize[0x0274])
// LastOffsetWithSize(0x0274)
#define PADDING_04E0 - 0x0000 // Minimum to subtract -> (0014)
class UBP_PlayerSoundStateButton_C : public USQStatefulButton
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0014 PADDING_04E0, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0288(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x001C PADDING_04E0, class UImage*,                                                         Image_59);                                                 // 0x0290(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_PlayerSoundStateButton.BP_PlayerSoundStateButton_C");
		return ptr;
	}


	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_BP_PlayerSoundStateButton(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
