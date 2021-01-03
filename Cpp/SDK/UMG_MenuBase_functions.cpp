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

// Function UMG_MenuBase.UMG_MenuBase_C.Open UI Element
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USQCoreStateMapComponent* Map_Component                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUMG_MenuBase_C::Open_UI_Element(class USQCoreStateMapComponent* Map_Component, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_MenuBase.UMG_MenuBase_C.Open UI Element");

	UUMG_MenuBase_C_Open_UI_Element_Params params;
	params.Map_Component = Map_Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;

}


// Function UMG_MenuBase.UMG_MenuBase_C.Close UI Element
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUMG_MenuBase_C::Close_UI_Element(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_MenuBase.UMG_MenuBase_C.Close UI Element");

	UUMG_MenuBase_C_Close_UI_Element_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;

}


// Function UMG_MenuBase.UMG_MenuBase_C.Get Voting Widget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*             Voting_Widget                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUMG_MenuBase_C::Get_Voting_Widget(class UUserWidget** Voting_Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_MenuBase.UMG_MenuBase_C.Get Voting Widget");

	UUMG_MenuBase_C_Get_Voting_Widget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Voting_Widget != nullptr)
		*Voting_Widget = params.Voting_Widget;

}


// Function UMG_MenuBase.UMG_MenuBase_C.Get Role List Roots
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPanelWidget*            Squad_Panel                    (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelWidget*            Unassigned_Panel               (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUMG_MenuBase_C::Get_Role_List_Roots(class UPanelWidget** Squad_Panel, class UPanelWidget** Unassigned_Panel)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_MenuBase.UMG_MenuBase_C.Get Role List Roots");

	UUMG_MenuBase_C_Get_Role_List_Roots_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Squad_Panel != nullptr)
		*Squad_Panel = params.Squad_Panel;
	if (Unassigned_Panel != nullptr)
		*Unassigned_Panel = params.Unassigned_Panel;

}


// Function UMG_MenuBase.UMG_MenuBase_C.Get Squad List Roots
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPanelWidget*            Squad_Panel                    (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelWidget*            Unassigned_Panel               (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelWidget*            Commander_Panel                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUMG_MenuBase_C::Get_Squad_List_Roots(class UPanelWidget** Squad_Panel, class UPanelWidget** Unassigned_Panel, class UPanelWidget** Commander_Panel)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_MenuBase.UMG_MenuBase_C.Get Squad List Roots");

	UUMG_MenuBase_C_Get_Squad_List_Roots_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Squad_Panel != nullptr)
		*Squad_Panel = params.Squad_Panel;
	if (Unassigned_Panel != nullptr)
		*Unassigned_Panel = params.Unassigned_Panel;
	if (Commander_Panel != nullptr)
		*Commander_Panel = params.Commander_Panel;

}


// Function UMG_MenuBase.UMG_MenuBase_C.Get Spawn Point Roots
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGridPanel*              SpawnBase                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGridPanel*              SpawnHab                       (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGridPanel*              SpawnRally                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUMG_MenuBase_C::Get_Spawn_Point_Roots(class UGridPanel** SpawnBase, class UGridPanel** SpawnHab, class UGridPanel** SpawnRally)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_MenuBase.UMG_MenuBase_C.Get Spawn Point Roots");

	UUMG_MenuBase_C_Get_Spawn_Point_Roots_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SpawnBase != nullptr)
		*SpawnBase = params.SpawnBase;
	if (SpawnHab != nullptr)
		*SpawnHab = params.SpawnHab;
	if (SpawnRally != nullptr)
		*SpawnRally = params.SpawnRally;

}


// Function UMG_MenuBase.UMG_MenuBase_C.On Close
// (Public, BlueprintCallable, BlueprintEvent)
void UUMG_MenuBase_C::On_Close()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_MenuBase.UMG_MenuBase_C.On Close");

	UUMG_MenuBase_C_On_Close_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_MenuBase.UMG_MenuBase_C.On Open
// (Public, BlueprintCallable, BlueprintEvent)
void UUMG_MenuBase_C::On_Open()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_MenuBase.UMG_MenuBase_C.On Open");

	UUMG_MenuBase_C_On_Open_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_MenuBase.UMG_MenuBase_C.Configure Map Elements
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USQCoreStateMapComponent* MapComponent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USQMapMarkerManagerComponent* MarkerManager                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUMG_MenuBase_C::Configure_Map_Elements(class USQCoreStateMapComponent* MapComponent, class USQMapMarkerManagerComponent* MarkerManager)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_MenuBase.UMG_MenuBase_C.Configure Map Elements");

	UUMG_MenuBase_C_Configure_Map_Elements_Params params;
	params.MapComponent = MapComponent;
	params.MarkerManager = MarkerManager;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_MenuBase.UMG_MenuBase_C.Is Open
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Open                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Transitioning                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUMG_MenuBase_C::Is_Open(bool* Open, bool* Transitioning)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_MenuBase.UMG_MenuBase_C.Is Open");

	UUMG_MenuBase_C_Is_Open_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Open != nullptr)
		*Open = params.Open;
	if (Transitioning != nullptr)
		*Transitioning = params.Transitioning;

}


// Function UMG_MenuBase.UMG_MenuBase_C.Key Action
// (Public, BlueprintCallable, BlueprintEvent)
void UUMG_MenuBase_C::Key_Action()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_MenuBase.UMG_MenuBase_C.Key Action");

	UUMG_MenuBase_C_Key_Action_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_MenuBase.UMG_MenuBase_C.Opened
// (BlueprintCallable, BlueprintEvent)
void UUMG_MenuBase_C::Opened()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_MenuBase.UMG_MenuBase_C.Opened");

	UUMG_MenuBase_C_Opened_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_MenuBase.UMG_MenuBase_C.Closed
// (BlueprintCallable, BlueprintEvent)
void UUMG_MenuBase_C::Closed()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_MenuBase.UMG_MenuBase_C.Closed");

	UUMG_MenuBase_C_Closed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_MenuBase.UMG_MenuBase_C.ExecuteUbergraph_UMG_MenuBase
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUMG_MenuBase_C::ExecuteUbergraph_UMG_MenuBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_MenuBase.UMG_MenuBase_C.ExecuteUbergraph_UMG_MenuBase");

	UUMG_MenuBase_C_ExecuteUbergraph_UMG_MenuBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_MenuBase.UMG_MenuBase_C.Finished Close__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UUMG_MenuBase_C::Finished_Close__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_MenuBase.UMG_MenuBase_C.Finished Close__DelegateSignature");

	UUMG_MenuBase_C_Finished_Close__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_MenuBase.UMG_MenuBase_C.Finished Open__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UUMG_MenuBase_C::Finished_Open__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_MenuBase.UMG_MenuBase_C.Finished Open__DelegateSignature");

	UUMG_MenuBase_C_Finished_Open__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_MenuBase.UMG_MenuBase_C.Started Close__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UUMG_MenuBase_C::Started_Close__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_MenuBase.UMG_MenuBase_C.Started Close__DelegateSignature");

	UUMG_MenuBase_C_Started_Close__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_MenuBase.UMG_MenuBase_C.Started Open__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UUMG_MenuBase_C::Started_Open__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_MenuBase.UMG_MenuBase_C.Started Open__DelegateSignature");

	UUMG_MenuBase_C_Started_Open__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_MenuBase.UMG_MenuBase_C.Team Selected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASQTeamState*            Team                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUMG_MenuBase_C::Team_Selected__DelegateSignature(class ASQTeamState* Team)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_MenuBase.UMG_MenuBase_C.Team Selected__DelegateSignature");

	UUMG_MenuBase_C_Team_Selected__DelegateSignature_Params params;
	params.Team = Team;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
