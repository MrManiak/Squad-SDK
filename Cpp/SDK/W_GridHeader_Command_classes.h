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

// WidgetBlueprintGeneratedClass W_GridHeader_Command.W_GridHeader_Command_C
// 0x0009 (FullSize[0x02A1] - InheritedSize[0x0298])
// LastOffsetWithSize(0x0298)
#define PADDING_01C3 - 0x0000 // Minimum to subtract -> (0000)
class UW_GridHeader_Command_C : public UW_GridHeader_C
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_01C3, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0298(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0008 PADDING_01C3, bool,                                                                  Always_Allow_Action);                                      // 0x02A0(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_GridHeader_Command.W_GridHeader_Command_C");
		return ptr;
	}


	void Construct_Categories();
	void Construct_Buttons();
	void ExecuteUbergraph_W_GridHeader_Command(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
