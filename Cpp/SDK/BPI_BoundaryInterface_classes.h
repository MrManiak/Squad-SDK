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

// BlueprintGeneratedClass BPI_BoundaryInterface.BPI_BoundaryInterface_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UBPI_BoundaryInterface_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_BoundaryInterface.BPI_BoundaryInterface_C");
		return ptr;
	}



	void On_Entered_Bounds();
	void On_Out_of_Bounds();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
