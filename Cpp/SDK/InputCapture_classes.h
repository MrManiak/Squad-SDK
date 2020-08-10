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

// WidgetBlueprintGeneratedClass InputCapture.InputCapture_C
// 0x0074 (FullSize[0x0254] - InheritedSize[0x01E0])
// LastOffsetWithSize(0x01E0)
#define PADDING_035A - 0x0000 // Minimum to subtract -> (0050)
class UInputCapture_C : public UUserWidget
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0050 PADDING_035A, class UImage*,                                                         Image_21);                                                 // 0x0230(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0058 PADDING_035A, struct FScriptMulticastDelegate,                                       OnInput);                                                  // 0x0238(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
		DEFINE_MEMBER_NNN(0x0068 PADDING_035A, bool,                                                                  bCapturingInput);                                          // 0x0248(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x006C PADDING_035A, struct FVector2D,                                                      Mouse_Delta);                                              // 0x024C(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass InputCapture.InputCapture_C");
		return ptr;
	}


	struct FEventReply OnMouseMove(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	struct FEventReply OnMouseWheel(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void EndInputCapture();
	void BeginInputCapture();
	void OnInput__DelegateSignature(const struct FKey& InputKey);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
