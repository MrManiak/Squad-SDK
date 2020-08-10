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

// WidgetBlueprintGeneratedClass W_ControlledCameraList.W_ControlledCameraList_C
// 0x0078 (FullSize[0x0258] - InheritedSize[0x01E0])
// LastOffsetWithSize(0x01E0)
#define PADDING_0327 - 0x0000 // Minimum to subtract -> (0050)
class UW_ControlledCameraList_C : public UUserWidget
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0050 PADDING_0327, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0230(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0058 PADDING_0327, class UWrapBox*,                                                       CamControlWrapBox);                                        // 0x0238(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0060 PADDING_0327, class ASQPlayerController*,                                            My_PC);                                                    // 0x0240(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0068 PADDING_0327, TArray<class UW_CamControlButton_C*>,                                  Camera_Widgets);                                           // 0x0248(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_ControlledCameraList.W_ControlledCameraList_C");
		return ptr;
	}


	void Check_Player_Wounded();
	void Update_Button_Visibilities();
	void Construct();
	void Add_New_Camera(class UW_CamControlButton_C* Cam_Button);
	void ExecuteUbergraph_W_ControlledCameraList(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
