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

// BlueprintGeneratedClass BPI_BaseHud.BPI_BaseHUD_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class UBPI_BaseHUD_C : public UInterface
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_BaseHud.BPI_BaseHUD_C");
		return ptr;
	}


	void Get_Capture_Event_Widget(class UW_FlagCapturedEvent_C** Capture_Event_Widget);
	void Get_Destruction_Event_Widget(class UW_DestructionObjectiveEvent_C** Destruction_Event_Widget);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
