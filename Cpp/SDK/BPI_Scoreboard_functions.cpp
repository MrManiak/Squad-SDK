// Name: Sq, Version: b21

#include "../SDK.h"

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

/*!!HELPER_DEF!!*/

/*!!DEFINE!!*/

namespace UFT
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BPI_Scoreboard.BPI_Scoreboard_C.Play Fade Animation
// (Public, BlueprintCallable, BlueprintEvent)
void UBPI_Scoreboard_C::Play_Fade_Animation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Scoreboard.BPI_Scoreboard_C.Play Fade Animation");

	UBPI_Scoreboard_C_Play_Fade_Animation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
