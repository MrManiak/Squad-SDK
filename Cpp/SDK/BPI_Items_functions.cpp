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

// Function BPI_Items.BPI_Items_C.Pickup Item
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*       Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_Items_C::Pickup_Item(class APlayerController* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Items.BPI_Items_C.Pickup Item");

	UBPI_Items_C_Pickup_Item_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_Items.BPI_Items_C.Player Left Radius
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*       Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_Items_C::Player_Left_Radius(class APlayerController* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Items.BPI_Items_C.Player Left Radius");

	UBPI_Items_C_Player_Left_Radius_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BPI_Items.BPI_Items_C.Player Enter Radius
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*       Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Can_Pickup                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBPI_Items_C::Player_Enter_Radius(class APlayerController* Player, bool Can_Pickup)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_Items.BPI_Items_C.Player Enter Radius");

	UBPI_Items_C_Player_Enter_Radius_Params params;
	params.Player = Player;
	params.Can_Pickup = Can_Pickup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
