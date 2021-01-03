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

// BlueprintGeneratedClass BPI_CaptureZoneModifier.BPI_CaptureZoneModifier_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UBPI_CaptureZoneModifier_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_CaptureZoneModifier.BPI_CaptureZoneModifier_C");
		return ptr;
	}



	void Additional_Can_Capture(bool* Can_Capture);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
