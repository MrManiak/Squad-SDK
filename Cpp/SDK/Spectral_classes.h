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

// Class Spectral.SpectralBPLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class USpectralBPLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Spectral.SpectralBPLibrary");
		return ptr;
	}



	void STATIC_Shutdown();
	bool STATIC_SetColorForLeds(TArray<ESpectralLedName> ledNames, const struct FColor& Color);
	bool STATIC_SetColorForLed(ESpectralLedName ledName, const struct FColor& Color);
	bool STATIC_SetColorForDevice(ESpectralDeviceType DeviceType, const struct FColor& Color);
	bool STATIC_SetColor(const struct FColor& Color);
	bool STATIC_RazerIsEnabled();
	bool STATIC_LogitechIsEnabled();
	bool STATIC_IsInitialized();
	bool STATIC_Initialize();
	bool STATIC_CorsairIsEnabled();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
