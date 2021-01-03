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

// BlueprintGeneratedClass BP_GameplayFunctionLibrary.BP_GameplayFunctionLibrary_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UBP_GameplayFunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_GameplayFunctionLibrary.BP_GameplayFunctionLibrary_C");
		return ptr;
	}



	void STATIC_Show_Hide_Mouse(class UUserWidget* Focus, bool Game_Input, bool Display_Input, bool UI_Input, bool New_Input_State, const struct FString& Reason, class UObject* __WorldContext);
	void STATIC_GetSquadGameMode(class UObject* __WorldContext, class ASQGameMode** Return_Value);
	void STATIC_GetSquadGameState(class UObject* __WorldContext, class ASQGameState** Return_Value);
	void STATIC_GetSquadPlayerController(int Player_Index, class UObject* __WorldContext, class ASQPlayerController** Return_Value);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
