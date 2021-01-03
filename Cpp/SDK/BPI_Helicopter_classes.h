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

// BlueprintGeneratedClass BPI_Helicopter.BPI_Helicopter_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UBPI_Helicopter_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_Helicopter.BPI_Helicopter_C");
		return ptr;
	}



	void Set_Landing_Camera(bool Active);
	void Get_UI_Tint(struct FLinearColor* Color);
	void Is_Using_Landing_Camera(bool* Using_Landing_Camera);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
