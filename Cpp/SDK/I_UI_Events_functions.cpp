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

// Function I_UI_Events.I_UI_Events_C.Team Selected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Team_ID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UI_UI_Events_C::Team_Selected(int Team_ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function I_UI_Events.I_UI_Events_C.Team Selected");

	UI_UI_Events_C_Team_Selected_Params params;
	params.Team_ID = Team_ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
