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

// Class SquadAnalyticsModule.SQGABlueprintLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class USQGABlueprintLibrary : public UBlueprintFunctionLibrary
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SquadAnalyticsModule.SQGABlueprintLibrary");
		return ptr;
	}


	static void STATIC_RecordEvent(const struct FString& EventName);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
