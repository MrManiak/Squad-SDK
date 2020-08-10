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

// Class Spectral.SpectralBPLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class USpectralBPLibrary : public UBlueprintFunctionLibrary
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Spectral.SpectralBPLibrary");
		return ptr;
	}


	static void STATIC_Shutdown();
	static bool STATIC_SetColorForLeds(TArray<ESpectralLedName> ledNames, const struct FColor& Color);
	static bool STATIC_SetColorForLed(ESpectralLedName ledName, const struct FColor& Color);
	static bool STATIC_SetColorForDevice(ESpectralDeviceType DeviceType, const struct FColor& Color);
	static bool STATIC_SetColor(const struct FColor& Color);
	static bool STATIC_RazerIsEnabled();
	static bool STATIC_LogitechIsEnabled();
	static bool STATIC_IsInitialized();
	static bool STATIC_Initialize();
	static bool STATIC_CorsairIsEnabled();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
