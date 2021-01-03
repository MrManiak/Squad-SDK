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

// Class ModdingRuntime.ModdingRuntimeBlueprintLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UModdingRuntimeBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ModdingRuntime.ModdingRuntimeBlueprintLibrary");
		return ptr;
	}



	bool STATIC_VerifyModIntegrity(const struct FSQModLoadProgress& ServerModProgress);
	struct FString STATIC_ToIDString(const struct FSQModInfo& ModInfo);
	void STATIC_GetModInfo(const struct FSQModLoadProgress& MissingModData, struct FSQModInfo* OutModInfo);
	void STATIC_DownloadMissingMods(TArray<struct FSQModLoadProgress>* MissingModData);
	void STATIC_CancelDownloads();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
