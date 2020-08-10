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

// Function W_ParseKeybindItem.W_ParseKeybindItem_C.Get Short Name
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName                   Action_Name                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   Short_Name                     (Parm, OutParm)
void UW_ParseKeybindItem_C::Get_Short_Name(const struct FName& Action_Name, struct FText* Short_Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ParseKeybindItem.W_ParseKeybindItem_C.Get Short Name");

	UW_ParseKeybindItem_C_Get_Short_Name_Params params;
	params.Action_Name = Action_Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Short_Name != nullptr)
		*Short_Name = params.Short_Name;

}


// Function W_ParseKeybindItem.W_ParseKeybindItem_C.Parse Keybind
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 inString                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FText                   Short_Name                     (Parm, OutParm)
void UW_ParseKeybindItem_C::Parse_Keybind(const struct FString& inString, struct FText* Short_Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ParseKeybindItem.W_ParseKeybindItem_C.Parse Keybind");

	UW_ParseKeybindItem_C_Parse_Keybind_Params params;
	params.inString = inString;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Short_Name != nullptr)
		*Short_Name = params.Short_Name;

}


// Function W_ParseKeybindItem.W_ParseKeybindItem_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_ParseKeybindItem_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ParseKeybindItem.W_ParseKeybindItem_C.Tick");

	UW_ParseKeybindItem_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_ParseKeybindItem.W_ParseKeybindItem_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_ParseKeybindItem_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ParseKeybindItem.W_ParseKeybindItem_C.PreConstruct");

	UW_ParseKeybindItem_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_ParseKeybindItem.W_ParseKeybindItem_C.ExecuteUbergraph_W_ParseKeybindItem
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_ParseKeybindItem_C::ExecuteUbergraph_W_ParseKeybindItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_ParseKeybindItem.W_ParseKeybindItem_C.ExecuteUbergraph_W_ParseKeybindItem");

	UW_ParseKeybindItem_C_ExecuteUbergraph_W_ParseKeybindItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
