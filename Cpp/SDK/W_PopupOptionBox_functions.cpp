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

// Function W_PopupOptionBox.W_PopupOptionBox_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_PopupOptionBox_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_PopupOptionBox.W_PopupOptionBox_C.PreConstruct");

	UW_PopupOptionBox_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_PopupOptionBox.W_PopupOptionBox_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UW_PopupOptionBox_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_PopupOptionBox.W_PopupOptionBox_C.Construct");

	UW_PopupOptionBox_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_PopupOptionBox.W_PopupOptionBox_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_PopupOptionBox_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_PopupOptionBox.W_PopupOptionBox_C.Tick");

	UW_PopupOptionBox_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_PopupOptionBox.W_PopupOptionBox_C.Selector Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_PopupOptionBox_C::Selector_Event(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_PopupOptionBox.W_PopupOptionBox_C.Selector Event");

	UW_PopupOptionBox_C_Selector_Event_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_PopupOptionBox.W_PopupOptionBox_C.Refresh Position
// (BlueprintCallable, BlueprintEvent)
void UW_PopupOptionBox_C::Refresh_Position()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_PopupOptionBox.W_PopupOptionBox_C.Refresh Position");

	UW_PopupOptionBox_C_Refresh_Position_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_PopupOptionBox.W_PopupOptionBox_C.Clear
// (BlueprintCallable, BlueprintEvent)
void UW_PopupOptionBox_C::Clear()
{
	static auto fn = UObject::FindObject<UFunction>("Function W_PopupOptionBox.W_PopupOptionBox_C.Clear");

	UW_PopupOptionBox_C_Clear_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_PopupOptionBox.W_PopupOptionBox_C.ExecuteUbergraph_W_PopupOptionBox
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_PopupOptionBox_C::ExecuteUbergraph_W_PopupOptionBox(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_PopupOptionBox.W_PopupOptionBox_C.ExecuteUbergraph_W_PopupOptionBox");

	UW_PopupOptionBox_C_ExecuteUbergraph_W_PopupOptionBox_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function W_PopupOptionBox.W_PopupOptionBox_C.Option Clicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_PopupOptionBox_C::Option_Clicked__DelegateSignature(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function W_PopupOptionBox.W_PopupOptionBox_C.Option Clicked__DelegateSignature");

	UW_PopupOptionBox_C_Option_Clicked__DelegateSignature_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
