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

// BlueprintGeneratedClass BPI_RadialModels.BPI_RadialModels_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class UBPI_RadialModels_C : public UInterface
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_RadialModels.BPI_RadialModels_C");
		return ptr;
	}


	void Open_Voice_Model();
	void Get_Deployable(class UClass** Deployable);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
