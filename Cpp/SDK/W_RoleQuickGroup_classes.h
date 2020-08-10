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

// WidgetBlueprintGeneratedClass W_RoleQuickGroup.W_RoleQuickGroup_C
// 0x0020 (FullSize[0x02E0] - InheritedSize[0x02C0])
// LastOffsetWithSize(0x02C0)
#define PADDING_0265 - 0x0000 // Minimum to subtract -> (0000)
class UW_RoleQuickGroup_C : public UW_RoleGroup_C
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0265, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x02C0(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0008 PADDING_0265, class UImage*,                                                         Image_Group);                                              // 0x02C8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0010 PADDING_0265, class UWrapBox*,                                                       WrapBox_Roles);                                            // 0x02D0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0018 PADDING_0265, class UTexture2D*,                                                     Group_Icon);                                               // 0x02D8(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_RoleQuickGroup.W_RoleQuickGroup_C");
		return ptr;
	}


	void Get_Role_Panel(class UPanelWidget** RoleBox);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_W_RoleQuickGroup(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
