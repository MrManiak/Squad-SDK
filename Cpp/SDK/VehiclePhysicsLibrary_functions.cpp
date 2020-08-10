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

// Function VehiclePhysicsLibrary.VehiclePhysicsLibrary_C.ApplyPhysicsFeedback
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          ForceToApply                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UVehiclePhysicsLibrary_C::STATIC_ApplyPhysicsFeedback(class AActor* Target, float ForceToApply, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function VehiclePhysicsLibrary.VehiclePhysicsLibrary_C.ApplyPhysicsFeedback");

	UVehiclePhysicsLibrary_C_ApplyPhysicsFeedback_Params params;
	params.Target = Target;
	params.ForceToApply = ForceToApply;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
