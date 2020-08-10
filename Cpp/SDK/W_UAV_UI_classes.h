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

// WidgetBlueprintGeneratedClass W_UAV_UI.W_UAV_UI_C
// 0x0136 (FullSize[0x0380] - InheritedSize[0x024A])
// LastOffsetWithSize(0x024A)
#define PADDING_016E - 0x0000 // Minimum to subtract -> (0006)
class UW_UAV_UI_C : public UW_CameraWidget_C
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0006 PADDING_016E, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0250(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x000E PADDING_016E, class UWidgetAnimation*,                                               Close);                                                    // 0x0258(0x0008)  (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0016 PADDING_016E, class UWidgetAnimation*,                                               fuellow);                                                  // 0x0260(0x0008)  (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x001E PADDING_016E, class UProgressBar*,                                                   Battery);                                                  // 0x0268(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0026 PADDING_016E, class UButton*,                                                        Button_Back);                                              // 0x0270(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x002E PADDING_016E, class UImage*,                                                         CameraPitchLadder);                                        // 0x0278(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0036 PADDING_016E, class UImage*,                                                         Corner1);                                                  // 0x0280(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x003E PADDING_016E, class UImage*,                                                         Corner2);                                                  // 0x0288(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0046 PADDING_016E, class UImage*,                                                         Corner3);                                                  // 0x0290(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x004E PADDING_016E, class UImage*,                                                         Corner4);                                                  // 0x0298(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0056 PADDING_016E, class UImage*,                                                         cross);                                                    // 0x02A0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x005E PADDING_016E, class UImage*,                                                         Image_3);                                                  // 0x02A8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0066 PADDING_016E, class UImage*,                                                         Image_4);                                                  // 0x02B0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x006E PADDING_016E, class UOverlay*,                                                       NorthArrow);                                               // 0x02B8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0076 PADDING_016E, class UOverlay*,                                                       PitchPanel);                                               // 0x02C0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x007E PADDING_016E, class UTextBlock*,                                                     StableText);                                               // 0x02C8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0086 PADDING_016E, class UTextBlock*,                                                     TB_CameraPitchAngle);                                      // 0x02D0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x008E PADDING_016E, class UTextBlock*,                                                     TB_DroneState);                                            // 0x02D8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0096 PADDING_016E, class UTextBlock*,                                                     TB_Elevation);                                             // 0x02E0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x009E PADDING_016E, class UTextBlock*,                                                     TB_GridRef);                                               // 0x02E8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00A6 PADDING_016E, class UTextBlock*,                                                     TB_North);                                                 // 0x02F0(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00AE PADDING_016E, class UTextBlock*,                                                     TB_RangeFromUAV);                                          // 0x02F8(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00B6 PADDING_016E, class UTextBlock*,                                                     TB_SelfGridRef);                                           // 0x0300(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00BE PADDING_016E, class UTextBlock*,                                                     TB_ZoomLevel);                                             // 0x0308(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00C6 PADDING_016E, class UTextBlock*,                                                     TextBlock_1);                                              // 0x0310(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00CE PADDING_016E, class UTextBlock*,                                                     TextBlock_2);                                              // 0x0318(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00D6 PADDING_016E, class UTextBlock*,                                                     TextBlock_3);                                              // 0x0320(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00DE PADDING_016E, class UTextBlock*,                                                     TextBlock_5);                                              // 0x0328(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00E6 PADDING_016E, class UTextBlock*,                                                     TextBlock_7);                                              // 0x0330(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00EE PADDING_016E, class UTextBlock*,                                                     TextBlock_12);                                             // 0x0338(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00F6 PADDING_016E, class UTextBlock*,                                                     Time);                                                     // 0x0340(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00FE PADDING_016E, class UW_CustomCompass_C*,                                             W_CustomCompass);                                          // 0x0348(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0106 PADDING_016E, class UW_ParseKeybindItem_C*,                                          W_ParseKeybindItem);                                       // 0x0350(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x010E PADDING_016E, class UW_ParseKeybindItem_C*,                                          W_ParseKeybindItem_C_1);                                   // 0x0358(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0116 PADDING_016E, class UW_ParseKeybindItem_C*,                                          W_ParseKeybindItem_C_2);                                   // 0x0360(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x011E PADDING_016E, class UW_ParseKeybindItem_C*,                                          W_ParseKeybindItem_C_3);                                   // 0x0368(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0126 PADDING_016E, class UW_ParseKeybindItem_C*,                                          W_ParseKeybindItem_C_4);                                   // 0x0370(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x012E PADDING_016E, class UW_VoipOwningPlayer_C*,                                          W_VoipOwningPlayer_188);                                   // 0x0378(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_UAV_UI.W_UAV_UI_C");
		return ptr;
	}


	void Update_Lock_Text();
	void Manage_Animations();
	void Set_Zoom();
	void Set_Elevation();
	void Set_Self_Grid_Ref();
	void Set_Pitch();
	void Set_Fuel();
	void Update_Compass();
	void Set_Time();
	void Set_Grid_Ref();
	void Get_Cam_Delta(const struct FVector2D& Mouse_Coordinate, const struct FGeometry& Geometry, float* X, float* Y);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void BndEvt__Button_Back_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Close_Animation();
	void ExecuteUbergraph_W_UAV_UI(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
