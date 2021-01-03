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

// WidgetBlueprintGeneratedClass CreditListItem_Header.CreditListItem_Header_C
// 0x0028 (FullSize[0x0258] - InheritedSize[0x0230])
class UCreditListItem_Header_C : public UUserWidget
{
public:
	class UTextBlock*                                  Title;                                                     // 0x0230(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCreditsWindow_C*                            CreditsWindow;                                             // 0x0238(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FText                                       Header_Text;                                               // 0x0240(0x0018) (Edit, BlueprintVisible, ExposeOnSpawn)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CreditListItem_Header.CreditListItem_Header_C");
		return ptr;
	}



	struct FText Title_Text();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
