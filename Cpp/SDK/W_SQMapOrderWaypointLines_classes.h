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

// WidgetBlueprintGeneratedClass W_SQMapOrderWaypointLines.W_SQMapOrderWaypointLines_C
// 0x0008 (FullSize[0x0278] - InheritedSize[0x0270])
class UW_SQMapOrderWaypointLines_C : public USQOrderLines
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_SQMapOrderWaypointLines.W_SQMapOrderWaypointLines_C");
		return ptr;
	}



	void Construct();
	void RefreshUIData(class USaveData_UI_C* Data);
	void ExecuteUbergraph_W_SQMapOrderWaypointLines(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
