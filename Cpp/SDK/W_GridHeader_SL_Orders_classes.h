#pragma once

// Name: S, Version: b


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

// WidgetBlueprintGeneratedClass W_GridHeader_SL_Orders.W_GridHeader_SL_Orders_C
// 0x0018 (FullSize[0x02B0] - InheritedSize[0x0298])
class UW_GridHeader_SL_Orders_C : public UW_GridHeader_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0298(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	TArray<int>                                        FireTeams;                                                 // 0x02A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_GridHeader_SL_Orders.W_GridHeader_SL_Orders_C");
		return ptr;
	}



	void Cache_Fireteam_IDs();
	void Construct_Buttons();
	void ExecuteUbergraph_W_GridHeader_SL_Orders(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
