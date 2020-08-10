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

// WidgetBlueprintGeneratedClass W_GridHeader_FTL_Orders.W_GridHeader_FTL_Orders_C
// 0x0000 (FullSize[0x0298] - InheritedSize[0x0298])
// LastOffsetWithSize(0x0298)
class UW_GridHeader_FTL_Orders_C : public UW_GridHeader_C
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_GridHeader_FTL_Orders.W_GridHeader_FTL_Orders_C");
		return ptr;
	}


	void Get_Fireteam_ID(int* ID);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
