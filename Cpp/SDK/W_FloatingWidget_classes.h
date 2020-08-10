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

// WidgetBlueprintGeneratedClass W_FloatingWidget.W_FloatingWidget_C
// 0x0068 (FullSize[0x0248] - InheritedSize[0x01E0])
// LastOffsetWithSize(0x01E0)
#define PADDING_0AAD - 0x0000 // Minimum to subtract -> (0050)
class UW_FloatingWidget_C : public UUserWidget
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0050 PADDING_0AAD, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0230(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0058 PADDING_0AAD, bool,                                                                  Can_Block_Grid_Menu);                                      // 0x0238(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x0060 PADDING_0AAD, class ASQWorldSettings*,                                               SQ_World_Settings);                                        // 0x0240(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_FloatingWidget.W_FloatingWidget_C");
		return ptr;
	}


	void Validate_Action(const struct FPointerEvent& Mouse_Event, bool* Valid);
	void On_Map_Mouse_Down(const struct FPointerEvent& Mouse_Event, const struct FVector& World_Location);
	void Construct();
	void Remove_floating_widget();
	void ExecuteUbergraph_W_FloatingWidget(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
