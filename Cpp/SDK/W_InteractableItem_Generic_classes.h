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

// WidgetBlueprintGeneratedClass W_InteractableItem_Generic.W_InteractableItem_Generic_C
// 0x0018 (FullSize[0x02A8] - InheritedSize[0x0290])
// LastOffsetWithSize(0x0290)
#define PADDING_000A - 0x0000 // Minimum to subtract -> (0000)
class UW_InteractableItem_Generic_C : public UW_InteractableItem_Master_C
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_000A, class UWidgetAnimation*,                                               Fade);                                                     // 0x0290(0x0008)  (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0008 PADDING_000A, class UHorizontalBox*,                                                 FormatBox);                                                // 0x0298(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0010 PADDING_000A, class UImage*,                                                         Line);                                                     // 0x02A0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_InteractableItem_Generic.W_InteractableItem_Generic_C");
		return ptr;
	}


	void Get_Format_Box(class UHorizontalBox** FormatBox);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
