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

// Function UMG_GenericState.UMG_GenericState_C.Set Icon Color
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            InColorAndOpacity              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUMG_GenericState_C::Set_Icon_Color(const struct FLinearColor& InColorAndOpacity)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_GenericState.UMG_GenericState_C.Set Icon Color");

	UUMG_GenericState_C_Set_Icon_Color_Params params;
	params.InColorAndOpacity = InColorAndOpacity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_GenericState.UMG_GenericState_C.Set Outer Color
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            InColorAndOpacity              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUMG_GenericState_C::Set_Outer_Color(const struct FLinearColor& InColorAndOpacity)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_GenericState.UMG_GenericState_C.Set Outer Color");

	UUMG_GenericState_C_Set_Outer_Color_Params params;
	params.InColorAndOpacity = InColorAndOpacity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_GenericState.UMG_GenericState_C.Set Inner Color
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            InColorAndOpacity              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUMG_GenericState_C::Set_Inner_Color(const struct FLinearColor& InColorAndOpacity)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_GenericState.UMG_GenericState_C.Set Inner Color");

	UUMG_GenericState_C_Set_Inner_Color_Params params;
	params.InColorAndOpacity = InColorAndOpacity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_GenericState.UMG_GenericState_C.Set Icon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*              Texture                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUMG_GenericState_C::Set_Icon(class UTexture2D* Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_GenericState.UMG_GenericState_C.Set Icon");

	UUMG_GenericState_C_Set_Icon_Params params;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_GenericState.UMG_GenericState_C.Set Outer Visibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Outer_Visible                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUMG_GenericState_C::Set_Outer_Visibility(bool Outer_Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_GenericState.UMG_GenericState_C.Set Outer Visibility");

	UUMG_GenericState_C_Set_Outer_Visibility_Params params;
	params.Outer_Visible = Outer_Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_GenericState.UMG_GenericState_C.Set Inner Visibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Inner_Visible                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUMG_GenericState_C::Set_Inner_Visibility(bool Inner_Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_GenericState.UMG_GenericState_C.Set Inner Visibility");

	UUMG_GenericState_C_Set_Inner_Visibility_Params params;
	params.Inner_Visible = Inner_Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_GenericState.UMG_GenericState_C.Set Outer Bar Percent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUMG_GenericState_C::Set_Outer_Bar_Percent(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_GenericState.UMG_GenericState_C.Set Outer Bar Percent");

	UUMG_GenericState_C_Set_Outer_Bar_Percent_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_GenericState.UMG_GenericState_C.Set Inner Bar Percent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUMG_GenericState_C::Set_Inner_Bar_Percent(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_GenericState.UMG_GenericState_C.Set Inner Bar Percent");

	UUMG_GenericState_C_Set_Inner_Bar_Percent_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_GenericState.UMG_GenericState_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUMG_GenericState_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_GenericState.UMG_GenericState_C.PreConstruct");

	UUMG_GenericState_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_GenericState.UMG_GenericState_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUMG_GenericState_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_GenericState.UMG_GenericState_C.Construct");

	UUMG_GenericState_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UMG_GenericState.UMG_GenericState_C.ExecuteUbergraph_UMG_GenericState
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUMG_GenericState_C::ExecuteUbergraph_UMG_GenericState(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UMG_GenericState.UMG_GenericState_C.ExecuteUbergraph_UMG_GenericState");

	UUMG_GenericState_C_ExecuteUbergraph_UMG_GenericState_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
