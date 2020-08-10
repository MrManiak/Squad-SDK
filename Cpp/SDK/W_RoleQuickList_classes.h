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

// WidgetBlueprintGeneratedClass W_RoleQuickList.W_RoleQuickList_C
// 0x0057 (FullSize[0x0320] - InheritedSize[0x02C9])
// LastOffsetWithSize(0x02C9)
#define PADDING_049D - 0x0000 // Minimum to subtract -> (0007)
class UW_RoleQuickList_C : public UW_RoleList_C
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0007 PADDING_049D, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x02D0(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x000F PADDING_049D, class UBorder*,                                                        Border_Locked);                                            // 0x02D8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0017 PADDING_049D, class UW_RoleQuickGroup_C*,                                            FireSupport);                                              // 0x02E0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x001F PADDING_049D, class UImage*,                                                         Image_spacer1);                                            // 0x02E8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0027 PADDING_049D, class UImage*,                                                         Image_spacer2);                                            // 0x02F0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x002F PADDING_049D, class UImage*,                                                         Image_spacer3);                                            // 0x02F8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0037 PADDING_049D, class UW_RoleQuickGroup_C*,                                            Specialist);                                               // 0x0300(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x003F PADDING_049D, class UW_RoleQuickGroup_C*,                                            Standard);                                                 // 0x0308(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0047 PADDING_049D, class UW_RoleQuickGroup_C*,                                            SupportCommand);                                           // 0x0310(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x004F PADDING_049D, class UTextBlock*,                                                     Unavailable);                                              // 0x0318(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_RoleQuickList.W_RoleQuickList_C");
		return ptr;
	}


	bool IsRoleListWidgetValid();
	void CreateRoleListWidgetArray(TArray<class UW_RoleGroup_C*>* Array);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_W_RoleQuickList(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
