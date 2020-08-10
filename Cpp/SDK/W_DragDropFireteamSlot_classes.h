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

// WidgetBlueprintGeneratedClass W_DragDropFireteamSlot.W_DragDropFireteamSlot_C
// 0x0078 (FullSize[0x0258] - InheritedSize[0x01E0])
// LastOffsetWithSize(0x01E0)
#define PADDING_024C - 0x0000 // Minimum to subtract -> (0050)
class UW_DragDropFireteamSlot_C : public UUserWidget
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0050 PADDING_024C, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0230(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0058 PADDING_024C, class UBorder*,                                                        Border_1);                                                 // 0x0238(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0060 PADDING_024C, class UTextBlock*,                                                     TBName);                                                   // 0x0240(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0068 PADDING_024C, int,                                                                   FireTeamId);                                               // 0x0248(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x006C PADDING_024C, bool,                                                                  LeaderSlot);                                               // 0x024C(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x0070 PADDING_024C, class ASQPlayerController*,                                            My_PC);                                                    // 0x0250(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_DragDropFireteamSlot.W_DragDropFireteamSlot_C");
		return ptr;
	}


	bool OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	void Construct();
	void OnDragLeave(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	void OnDragEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	void Refresh_Text();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_W_DragDropFireteamSlot(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
