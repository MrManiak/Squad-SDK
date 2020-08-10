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

// WidgetBlueprintGeneratedClass W_GridHeader.W_GridHeader_C
// 0x00B8 (FullSize[0x0298] - InheritedSize[0x01E0])
// LastOffsetWithSize(0x01E0)
#define PADDING_0CAE - 0x0000 // Minimum to subtract -> (0050)
class UW_GridHeader_C : public UUserWidget
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0050 PADDING_0CAE, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0230(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0058 PADDING_0CAE, class UGridPanel*,                                                     GridPanel_Main);                                           // 0x0238(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0060 PADDING_0CAE, TEnumAsByte<E_HeaderDirection>,                                        Draw_Direction);                                           // 0x0240(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0061 PADDING_0CAE, TEnumAsByte<E_HeaderDirection>,                                        Build_Direction);                                          // 0x0241(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0068 PADDING_0CAE, TArray<class UClass*>,                                                 Buttons);                                                  // 0x0248(0x0010)  (Edit, BlueprintVisible, ZeroConstructor)
		DEFINE_MEMBER_NNN(0x0078 PADDING_0CAE, class UTexture2D*,                                                     Header_Icon);                                              // 0x0258(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0080 PADDING_0CAE, struct FLinearColor,                                                   Icon_Color);                                               // 0x0260(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0090 PADDING_0CAE, TArray<class UW_GridButton_C*>,                                        My_Buttons);                                               // 0x0270(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference)
		DEFINE_MEMBER_NNN(0x00A0 PADDING_0CAE, bool,                                                                  Buttons_Visible);                                          // 0x0280(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x00A4 PADDING_0CAE, struct FVector2D,                                                      Screen_Position);                                          // 0x0284(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00B0 PADDING_0CAE, class UW_GridMenu_C*,                                                  Grid_Menu);                                                // 0x0290(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_GridHeader.W_GridHeader_C");
		return ptr;
	}


	void Get_Squad_ID(int* ID);
	void Get_Fireteam_ID(int* ID);
	void Set_Buttons_Visibility(bool Visible);
	void Set_Viewport_Position();
	void Construct();
	void Construct_Buttons();
	void ExecuteUbergraph_W_GridHeader(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
