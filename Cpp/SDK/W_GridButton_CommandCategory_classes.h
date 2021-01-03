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

// WidgetBlueprintGeneratedClass W_GridButton_CommandCategory.W_GridButton_CommandCategory_C
// 0x0028 (FullSize[0x0300] - InheritedSize[0x02D8])
class UW_GridButton_CommandCategory_C : public UW_GridButton_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class ASQPlayerController*                         My_PC;                                                     // 0x02E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Category_ID;                                               // 0x02E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_A20Q[0x4];                                     // 0x02EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UClass*>                              SQActionList;                                              // 0x02F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_GridButton_CommandCategory.W_GridButton_CommandCategory_C");
		return ptr;
	}



	void Get_Actions();
	void Construct();
	void Init_Actions(int Category_ID);
	void Draw_List();
	void ExecuteUbergraph_W_GridButton_CommandCategory(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
