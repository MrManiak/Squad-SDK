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

// Function ServerListItem.ServerListItem_C.Toggle Favourite
// (Public, BlueprintCallable, BlueprintEvent)
void UServerListItem_C::Toggle_Favourite()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerListItem.ServerListItem_C.Toggle Favourite");

	UServerListItem_C_Toggle_Favourite_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ServerListItem.ServerListItem_C.GetFavouriteColor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
struct FLinearColor UServerListItem_C::GetFavouriteColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerListItem.ServerListItem_C.GetFavouriteColor");

	UServerListItem_C_GetFavouriteColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ServerListItem.ServerListItem_C.TooltipFavourite
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidget* UServerListItem_C::TooltipFavourite()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerListItem.ServerListItem_C.TooltipFavourite");

	UServerListItem_C_TooltipFavourite_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ServerListItem.ServerListItem_C.TooltipVAC
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidget* UServerListItem_C::TooltipVAC()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerListItem.ServerListItem_C.TooltipVAC");

	UServerListItem_C_TooltipVAC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ServerListItem.ServerListItem_C.TooltipLocked
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidget* UServerListItem_C::TooltipLocked()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerListItem.ServerListItem_C.TooltipLocked");

	UServerListItem_C_TooltipLocked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ServerListItem.ServerListItem_C.TooltipModIcon
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidget* UServerListItem_C::TooltipModIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerListItem.ServerListItem_C.TooltipModIcon");

	UServerListItem_C_TooltipModIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ServerListItem.ServerListItem_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply UServerListItem_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerListItem.ServerListItem_C.OnMouseButtonDown");

	UServerListItem_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ServerListItem.ServerListItem_C.OnMouseButtonDoubleClick
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               InMyGeometry                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent           InMouseEvent                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
struct FEventReply UServerListItem_C::OnMouseButtonDoubleClick(const struct FGeometry& InMyGeometry, const struct FPointerEvent& InMouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerListItem.ServerListItem_C.OnMouseButtonDoubleClick");

	UServerListItem_C_OnMouseButtonDoubleClick_Params params;
	params.InMyGeometry = InMyGeometry;
	params.InMouseEvent = InMouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ServerListItem.ServerListItem_C.Get_Modded_Icon_Color
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
struct FLinearColor UServerListItem_C::Get_Modded_Icon_Color()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerListItem.ServerListItem_C.Get_Modded_Icon_Color");

	UServerListItem_C_Get_Modded_Icon_Color_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ServerListItem.ServerListItem_C.Is Modded
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UServerListItem_C::Is_Modded()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerListItem.ServerListItem_C.Is Modded");

	UServerListItem_C_Is_Modded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ServerListItem.ServerListItem_C.Is Whitelisted
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Is_Whitelisted                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UServerListItem_C::Is_Whitelisted(bool* Is_Whitelisted)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerListItem.ServerListItem_C.Is Whitelisted");

	UServerListItem_C_Is_Whitelisted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Is_Whitelisted != nullptr)
		*Is_Whitelisted = params.Is_Whitelisted;

}


// Function ServerListItem.ServerListItem_C.Set Friend Count
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UServerListItem_C::Set_Friend_Count()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerListItem.ServerListItem_C.Set Friend Count");

	UServerListItem_C_Set_Friend_Count_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ServerListItem.ServerListItem_C.Get_ImageHealth_ToolTipWidget_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidget* UServerListItem_C::Get_ImageHealth_ToolTipWidget_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerListItem.ServerListItem_C.Get_ImageHealth_ToolTipWidget_1");

	UServerListItem_C_Get_ImageHealth_ToolTipWidget_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ServerListItem.ServerListItem_C.IsJoinServer
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           selected                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UServerListItem_C::IsJoinServer(bool* selected)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerListItem.ServerListItem_C.IsJoinServer");

	UServerListItem_C_IsJoinServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (selected != nullptr)
		*selected = params.selected;

}


// Function ServerListItem.ServerListItem_C.Get Queue Object
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           In_Queue                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UServerListItem_C::Get_Queue_Object(bool* In_Queue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerListItem.ServerListItem_C.Get Queue Object");

	UServerListItem_C_Get_Queue_Object_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (In_Queue != nullptr)
		*In_Queue = params.In_Queue;

}


// Function ServerListItem.ServerListItem_C.UpdatePlayerCounts
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UServerListItem_C::UpdatePlayerCounts()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerListItem.ServerListItem_C.UpdatePlayerCounts");

	UServerListItem_C_UpdatePlayerCounts_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ServerListItem.ServerListItem_C.IsSelected
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           selected                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UServerListItem_C::IsSelected(bool* selected)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerListItem.ServerListItem_C.IsSelected");

	UServerListItem_C_IsSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (selected != nullptr)
		*selected = params.selected;

}


// Function ServerListItem.ServerListItem_C.Get Main Color
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
struct FLinearColor UServerListItem_C::Get_Main_Color()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerListItem.ServerListItem_C.Get Main Color");

	UServerListItem_C_Get_Main_Color_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ServerListItem.ServerListItem_C.Init
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UServerListItem_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerListItem.ServerListItem_C.Init");

	UServerListItem_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ServerListItem.ServerListItem_C.ClientJoinAccepted
// (Event, Public, BlueprintEvent)
void UServerListItem_C::ClientJoinAccepted()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerListItem.ServerListItem_C.ClientJoinAccepted");

	UServerListItem_C_ClientJoinAccepted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ServerListItem.ServerListItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UServerListItem_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerListItem.ServerListItem_C.Construct");

	UServerListItem_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ServerListItem.ServerListItem_C.Marquee
// (BlueprintCallable, BlueprintEvent)
void UServerListItem_C::Marquee()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerListItem.ServerListItem_C.Marquee");

	UServerListItem_C_Marquee_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ServerListItem.ServerListItem_C.Finished Refresh_Event_1
// (BlueprintCallable, BlueprintEvent)
void UServerListItem_C::Finished_Refresh_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerListItem.ServerListItem_C.Finished Refresh_Event_1");

	UServerListItem_C_Finished_Refresh_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ServerListItem.ServerListItem_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UServerListItem_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerListItem.ServerListItem_C.OnMouseEnter");

	UServerListItem_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ServerListItem.ServerListItem_C.Start Marquee
// (BlueprintCallable, BlueprintEvent)
void UServerListItem_C::Start_Marquee()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerListItem.ServerListItem_C.Start Marquee");

	UServerListItem_C_Start_Marquee_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ServerListItem.ServerListItem_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UServerListItem_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerListItem.ServerListItem_C.Tick");

	UServerListItem_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ServerListItem.ServerListItem_C.BndEvt__Button_Fave_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
void UServerListItem_C::BndEvt__Button_Fave_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerListItem.ServerListItem_C.BndEvt__Button_Fave_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UServerListItem_C_BndEvt__Button_Fave_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ServerListItem.ServerListItem_C.ExecuteUbergraph_ServerListItem
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UServerListItem_C::ExecuteUbergraph_ServerListItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerListItem.ServerListItem_C.ExecuteUbergraph_ServerListItem");

	UServerListItem_C_ExecuteUbergraph_ServerListItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ServerListItem.ServerListItem_C.RequestJoin__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UServerListItem_C*       Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UServerListItem_C::RequestJoin__DelegateSignature(class UServerListItem_C* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServerListItem.ServerListItem_C.RequestJoin__DelegateSignature");

	UServerListItem_C_RequestJoin__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
