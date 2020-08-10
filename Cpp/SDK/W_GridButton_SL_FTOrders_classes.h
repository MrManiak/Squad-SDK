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

// WidgetBlueprintGeneratedClass W_GridButton_SL_FTOrders.W_GridButton_SL_FTOrders_C
// 0x0008 (FullSize[0x02E0] - InheritedSize[0x02D8])
// LastOffsetWithSize(0x02D8)
#define PADDING_0396 - 0x0000 // Minimum to subtract -> (0000)
class UW_GridButton_SL_FTOrders_C : public UW_GridButton_C
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0396, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x02D8(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_GridButton_SL_FTOrders.W_GridButton_SL_FTOrders_C");
		return ptr;
	}


	void Get_Text(struct FText* Text);
	void Get_Color(struct FLinearColor* Icon_Color);
	void Update_Appearance();
	void ExecuteUbergraph_W_GridButton_SL_FTOrders(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
