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

// Function StaticCableComponent.StaticCableComponent.Wake
// (Final, Native, Public, BlueprintCallable)
void UStaticCableComponent::Wake()
{
	static auto fn = UObject::FindObject<UFunction>("Function StaticCableComponent.StaticCableComponent.Wake");

	UStaticCableComponent_Wake_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function StaticCableComponent.StaticCableComponent.Sleep
// (Final, Native, Public, BlueprintCallable)
void UStaticCableComponent::Sleep()
{
	static auto fn = UObject::FindObject<UFunction>("Function StaticCableComponent.StaticCableComponent.Sleep");

	UStaticCableComponent_Sleep_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
