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

// Function BP_WeatherSystem.BP_WeatherSystem_C.SetupGlobalWind
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_WeatherSystem_C::SetupGlobalWind()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeatherSystem.BP_WeatherSystem_C.SetupGlobalWind");

	ABP_WeatherSystem_C_SetupGlobalWind_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_WeatherSystem.BP_WeatherSystem_C.SetupWindMaterial
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_WeatherSystem_C::SetupWindMaterial()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeatherSystem.BP_WeatherSystem_C.SetupWindMaterial");

	ABP_WeatherSystem_C_SetupWindMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_WeatherSystem.BP_WeatherSystem_C.drawRoom
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          CeilingHeight                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          RoomWidth                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          RoomLenght                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<EPhysicalSurface>  FloorType                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_WeatherSystem_C::drawRoom(float* CeilingHeight, float* RoomWidth, float* RoomLenght, TEnumAsByte<EPhysicalSurface>* FloorType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeatherSystem.BP_WeatherSystem_C.drawRoom");

	ABP_WeatherSystem_C_drawRoom_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CeilingHeight != nullptr)
		*CeilingHeight = params.CeilingHeight;
	if (RoomWidth != nullptr)
		*RoomWidth = params.RoomWidth;
	if (RoomLenght != nullptr)
		*RoomLenght = params.RoomLenght;
	if (FloorType != nullptr)
		*FloorType = params.FloorType;

}


// Function BP_WeatherSystem.BP_WeatherSystem_C.SpawnParticleSystem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_WeatherSystem_C::SpawnParticleSystem()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeatherSystem.BP_WeatherSystem_C.SpawnParticleSystem");

	ABP_WeatherSystem_C_SpawnParticleSystem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_WeatherSystem.BP_WeatherSystem_C.WeatherSystemDirection
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_WeatherSystem_C::WeatherSystemDirection()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeatherSystem.BP_WeatherSystem_C.WeatherSystemDirection");

	ABP_WeatherSystem_C_WeatherSystemDirection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_WeatherSystem.BP_WeatherSystem_C.SpawnDistantParticleSystem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_WeatherSystem_C::SpawnDistantParticleSystem()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeatherSystem.BP_WeatherSystem_C.SpawnDistantParticleSystem");

	ABP_WeatherSystem_C_SpawnDistantParticleSystem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_WeatherSystem.BP_WeatherSystem_C.SetRadius
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_WeatherSystem_C::SetRadius()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeatherSystem.BP_WeatherSystem_C.SetRadius");

	ABP_WeatherSystem_C_SetRadius_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_WeatherSystem.BP_WeatherSystem_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_WeatherSystem_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeatherSystem.BP_WeatherSystem_C.UserConstructionScript");

	ABP_WeatherSystem_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_WeatherSystem.BP_WeatherSystem_C.CheckRoomType
// (BlueprintCallable, BlueprintEvent)
void ABP_WeatherSystem_C::CheckRoomType()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeatherSystem.BP_WeatherSystem_C.CheckRoomType");

	ABP_WeatherSystem_C_CheckRoomType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_WeatherSystem.BP_WeatherSystem_C.CheckRoofMaterial
// (BlueprintCallable, BlueprintEvent)
void ABP_WeatherSystem_C::CheckRoofMaterial()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeatherSystem.BP_WeatherSystem_C.CheckRoofMaterial");

	ABP_WeatherSystem_C_CheckRoofMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_WeatherSystem.BP_WeatherSystem_C.ResetSpawningParticles
// (BlueprintCallable, BlueprintEvent)
void ABP_WeatherSystem_C::ResetSpawningParticles()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeatherSystem.BP_WeatherSystem_C.ResetSpawningParticles");

	ABP_WeatherSystem_C_ResetSpawningParticles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_WeatherSystem.BP_WeatherSystem_C.LeaveNegativeArea
// (BlueprintCallable, BlueprintEvent)
void ABP_WeatherSystem_C::LeaveNegativeArea()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeatherSystem.BP_WeatherSystem_C.LeaveNegativeArea");

	ABP_WeatherSystem_C_LeaveNegativeArea_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_WeatherSystem.BP_WeatherSystem_C.EnterNegativeArea
// (BlueprintCallable, BlueprintEvent)
void ABP_WeatherSystem_C::EnterNegativeArea()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeatherSystem.BP_WeatherSystem_C.EnterNegativeArea");

	ABP_WeatherSystem_C_EnterNegativeArea_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_WeatherSystem.BP_WeatherSystem_C.ApplyWeatherToMap
// (BlueprintCallable, BlueprintEvent)
void ABP_WeatherSystem_C::ApplyWeatherToMap()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeatherSystem.BP_WeatherSystem_C.ApplyWeatherToMap");

	ABP_WeatherSystem_C_ApplyWeatherToMap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_WeatherSystem.BP_WeatherSystem_C.SetEffectLocation
// (BlueprintCallable, BlueprintEvent)
void ABP_WeatherSystem_C::SetEffectLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeatherSystem.BP_WeatherSystem_C.SetEffectLocation");

	ABP_WeatherSystem_C_SetEffectLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_WeatherSystem.BP_WeatherSystem_C.CheckPlayerProximity
// (BlueprintCallable, BlueprintEvent)
void ABP_WeatherSystem_C::CheckPlayerProximity()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeatherSystem.BP_WeatherSystem_C.CheckPlayerProximity");

	ABP_WeatherSystem_C_CheckPlayerProximity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_WeatherSystem.BP_WeatherSystem_C.UpdateWeatherDirection
// (BlueprintCallable, BlueprintEvent)
void ABP_WeatherSystem_C::UpdateWeatherDirection()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeatherSystem.BP_WeatherSystem_C.UpdateWeatherDirection");

	ABP_WeatherSystem_C_UpdateWeatherDirection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_WeatherSystem.BP_WeatherSystem_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_WeatherSystem_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeatherSystem.BP_WeatherSystem_C.ReceiveBeginPlay");

	ABP_WeatherSystem_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_WeatherSystem.BP_WeatherSystem_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_WeatherSystem_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeatherSystem.BP_WeatherSystem_C.ReceiveTick");

	ABP_WeatherSystem_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_WeatherSystem.BP_WeatherSystem_C.ExecuteUbergraph_BP_WeatherSystem
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_WeatherSystem_C::ExecuteUbergraph_BP_WeatherSystem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeatherSystem.BP_WeatherSystem_C.ExecuteUbergraph_BP_WeatherSystem");

	ABP_WeatherSystem_C_ExecuteUbergraph_BP_WeatherSystem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
