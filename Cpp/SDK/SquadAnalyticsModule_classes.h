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

// Class SquadAnalyticsModule.SQGABlueprintLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class USQGABlueprintLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SquadAnalyticsModule.SQGABlueprintLibrary");
		return ptr;
	}



	void STATIC_RecordEvent(const struct FString& EventName);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
