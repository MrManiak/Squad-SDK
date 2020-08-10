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

// WidgetBlueprintGeneratedClass W_PopupOptionBox.W_PopupOptionBox_C
// 0x00A0 (FullSize[0x0280] - InheritedSize[0x01E0])
// LastOffsetWithSize(0x01E0)
#define PADDING_025F - 0x0000 // Minimum to subtract -> (0050)
class UW_PopupOptionBox_C : public UUserWidget
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0050 PADDING_025F, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0230(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0058 PADDING_025F, class UBorder*,                                                        HoverCheckArea);                                           // 0x0238(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0060 PADDING_025F, class UImage*,                                                         Line);                                                     // 0x0240(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0068 PADDING_025F, class UVerticalBox*,                                                   VerticalBox_Buttons);                                      // 0x0248(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0070 PADDING_025F, bool,                                                                  was_hovered);                                              // 0x0250(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x0078 PADDING_025F, struct FScriptMulticastDelegate,                                       Option_Clicked);                                           // 0x0258(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
		DEFINE_MEMBER_NNN(0x0088 PADDING_025F, float,                                                                 Lifetime);                                                 // 0x0268(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0090 PADDING_025F, TArray<struct FS_PopupButtonSetup>,                                    Options);                                                  // 0x0270(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_PopupOptionBox.W_PopupOptionBox_C");
		return ptr;
	}


	void PreConstruct(bool IsDesignTime);
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Selector_Event(int ID);
	void Refresh_Position();
	void Clear();
	void ExecuteUbergraph_W_PopupOptionBox(int EntryPoint);
	void Option_Clicked__DelegateSignature(int ID);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
