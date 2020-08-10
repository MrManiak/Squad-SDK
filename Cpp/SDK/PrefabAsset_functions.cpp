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

// Function PrefabAsset.PrefabActor.SetPrefab
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPrefabAsset*            NewPrefab                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           bForceRevertEvenDisconnected   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APrefabActor::SetPrefab(class UPrefabAsset* NewPrefab, bool bForceRevertEvenDisconnected)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrefabAsset.PrefabActor.SetPrefab");

	APrefabActor_SetPrefab_Params params;
	params.NewPrefab = NewPrefab;
	params.bForceRevertEvenDisconnected = bForceRevertEvenDisconnected;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PrefabAsset.PrefabActor.SetMobility
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EComponentMobility> InMobility                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APrefabActor::SetMobility(TEnumAsByte<EComponentMobility> InMobility)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrefabAsset.PrefabActor.SetMobility");

	APrefabActor_SetMobility_Params params;
	params.InMobility = InMobility;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PrefabAsset.PrefabActor.GetPrefab
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UPrefabAsset*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UPrefabAsset* APrefabActor::GetPrefab()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrefabAsset.PrefabActor.GetPrefab");

	APrefabActor_GetPrefab_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function PrefabAsset.PrefabActor.DestroyPrefabActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bDestroyAttachedChildren       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void APrefabActor::DestroyPrefabActor(bool bDestroyAttachedChildren)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrefabAsset.PrefabActor.DestroyPrefabActor");

	APrefabActor_DestroyPrefabActor_Params params;
	params.bDestroyAttachedChildren = bDestroyAttachedChildren;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PrefabAsset.PrefabFunctionLibrary.SpawnPrefab
// (Final, Native, Static, Private, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrefabAsset*            PrefabAsset                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform              SpawnTransform                 (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// TArray<class AActor*>          OutSpawnPrefabInstances        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                           bSpawnInstancesOnly            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// ESpawnActorCollisionHandlingMethod CollisionHandlingOverride      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                  Owner                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APrefabActor*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class APrefabActor* UPrefabFunctionLibrary::STATIC_SpawnPrefab(class UObject* WorldContextObject, class UPrefabAsset* PrefabAsset, const struct FTransform& SpawnTransform, TArray<class AActor*>* OutSpawnPrefabInstances, bool bSpawnInstancesOnly, ESpawnActorCollisionHandlingMethod CollisionHandlingOverride, class AActor* Owner)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrefabAsset.PrefabFunctionLibrary.SpawnPrefab");

	UPrefabFunctionLibrary_SpawnPrefab_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PrefabAsset = PrefabAsset;
	params.SpawnTransform = SpawnTransform;
	params.bSpawnInstancesOnly = bSpawnInstancesOnly;
	params.CollisionHandlingOverride = CollisionHandlingOverride;
	params.Owner = Owner;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutSpawnPrefabInstances != nullptr)
		*OutSpawnPrefabInstances = params.OutSpawnPrefabInstances;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
