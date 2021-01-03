// Name: S, Version: b

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

// Function Library_SquadUI.Library_SquadUI_C.Add Notification
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
// ESQNotificationTypes           Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ULibrary_SquadUI_C::STATIC_Add_Notification(const struct FText& Text, ESQNotificationTypes Type, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function Library_SquadUI.Library_SquadUI_C.Add Notification");

	ULibrary_SquadUI_C_Add_Notification_Params params;
	params.Text = Text;
	params.Type = Type;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Library_SquadUI.Library_SquadUI_C.Get SQHUD Colors
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USQColorsDataAsset*      ColorsDataAsset                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ULibrary_SquadUI_C::STATIC_Get_SQHUD_Colors(class UObject* __WorldContext, class USQColorsDataAsset** ColorsDataAsset)
{
	static auto fn = UObject::FindObject<UFunction>("Function Library_SquadUI.Library_SquadUI_C.Get SQHUD Colors");

	ULibrary_SquadUI_C_Get_SQHUD_Colors_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ColorsDataAsset != nullptr)
		*ColorsDataAsset = params.ColorsDataAsset;

}


// Function Library_SquadUI.Library_SquadUI_C.Save UI Save Data
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USaveData_UI_C*          SaveGameObject                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ULibrary_SquadUI_C::STATIC_Save_UI_Save_Data(class USaveData_UI_C* SaveGameObject, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function Library_SquadUI.Library_SquadUI_C.Save UI Save Data");

	ULibrary_SquadUI_C_Save_UI_Save_Data_Params params;
	params.SaveGameObject = SaveGameObject;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Library_SquadUI.Library_SquadUI_C.Get UI Save Data
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USaveData_UI_C*          UI_Save_Data                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ULibrary_SquadUI_C::STATIC_Get_UI_Save_Data(class UObject* __WorldContext, class USaveData_UI_C** UI_Save_Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function Library_SquadUI.Library_SquadUI_C.Get UI Save Data");

	ULibrary_SquadUI_C_Get_UI_Save_Data_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (UI_Save_Data != nullptr)
		*UI_Save_Data = params.UI_Save_Data;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
