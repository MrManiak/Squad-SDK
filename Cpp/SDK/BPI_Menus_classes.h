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

// BlueprintGeneratedClass BPI_Menus.BPI_Menus_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UBPI_Menus_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_Menus.BPI_Menus_C");
		return ptr;
	}



	void Key_Action();
	void Close_UI_Element(bool* Success);
	void Open_UI_Element(class USQCoreStateMapComponent* Map_Component, bool* Success);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
