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

// Class EyeTracker.EyeTrackerFunctionLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class UEyeTrackerFunctionLibrary : public UBlueprintFunctionLibrary
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EyeTracker.EyeTrackerFunctionLibrary");
		return ptr;
	}


	static void STATIC_SetEyeTrackedPlayer(class APlayerController* PlayerController);
	static bool STATIC_IsStereoGazeDataAvailable();
	static bool STATIC_IsEyeTrackerConnected();
	static bool STATIC_GetStereoGazeData(struct FEyeTrackerStereoGazeData* OutGazeData);
	static bool STATIC_GetGazeData(struct FEyeTrackerGazeData* OutGazeData);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
