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

// WidgetBlueprintGeneratedClass W_GridButton_FTOrders.W_GridButton_FTOrders_C
// 0x0000 (FullSize[0x02D8] - InheritedSize[0x02D8])
// LastOffsetWithSize(0x02D8)
class UW_GridButton_FTOrders_C : public UW_GridButton_C
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_GridButton_FTOrders.W_GridButton_FTOrders_C");
		return ptr;
	}


	void Get_Fireteam_ID(int* ID);
	void Get_Text(struct FText* Text);
	void Get_Color(struct FLinearColor* Icon_Color);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
