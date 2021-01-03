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

// BlueprintGeneratedClass I_UI_Events.I_UI_Events_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UI_UI_Events_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass I_UI_Events.I_UI_Events_C");
		return ptr;
	}



	void Team_Selected(int Team_ID);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
