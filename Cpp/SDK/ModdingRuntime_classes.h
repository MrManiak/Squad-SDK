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

// Class ModdingRuntime.ModdingRuntimeBlueprintLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class UModdingRuntimeBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ModdingRuntime.ModdingRuntimeBlueprintLibrary");
		return ptr;
	}


	static bool STATIC_VerifyModIntegrity(const struct FSQModLoadProgress& ServerModProgress);
	static struct FString STATIC_ToIDString(const struct FSQModInfo& ModInfo);
	static void STATIC_GetModInfo(const struct FSQModLoadProgress& MissingModData, struct FSQModInfo* OutModInfo);
	static void STATIC_DownloadMissingMods(TArray<struct FSQModLoadProgress>* MissingModData);
	static void STATIC_CancelDownloads();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
