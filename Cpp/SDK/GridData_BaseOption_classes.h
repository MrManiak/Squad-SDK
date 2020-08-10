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

// BlueprintGeneratedClass GridData_BaseOption.GridData_BaseOption_C
// 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_014B - 0x0000 // Minimum to subtract -> (0000)
class UGridData_BaseOption_C : public UObject
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_014B, struct FText,                                                          Display_Name);                                             // 0x0028(0x0018)  (Edit, BlueprintVisible, DisableEditOnInstance)
		DEFINE_MEMBER_NNN(0x0018 PADDING_014B, class UTexture2D*,                                                     Texture);                                                  // 0x0040(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0020 PADDING_014B, struct FLinearColor,                                                   Tint);                                                     // 0x0048(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0030 PADDING_014B, class UClass*,                                                         Action_Widget_Class);                                      // 0x0058(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GridData_BaseOption.GridData_BaseOption_C");
		return ptr;
	}


};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
