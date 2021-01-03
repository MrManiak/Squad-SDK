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

// BlueprintGeneratedClass BPI_Scoreboard.BPI_Scoreboard_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UBPI_Scoreboard_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_Scoreboard.BPI_Scoreboard_C");
		return ptr;
	}



	void Play_Fade_Animation();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
