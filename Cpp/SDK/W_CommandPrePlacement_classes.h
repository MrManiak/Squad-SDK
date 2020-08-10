#pragma once

// Name: Sq, Version: b21


#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

/*!!HELPER_DEF!!*/

/*!!DEFINE!!*/

namespace UFT
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass W_CommandPrePlacement.W_CommandPrePlacement_C
// 0x0038 (FullSize[0x0280] - InheritedSize[0x0248])
// LastOffsetWithSize(0x0248)
#define PADDING_0C9B - 0x0000 // Minimum to subtract -> (0000)
class UW_CommandPrePlacement_C : public UW_FloatingWidget_C
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0C9B, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0248(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0008 PADDING_0C9B, class UImage*,                                                         Image_1);                                                  // 0x0250(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0010 PADDING_0C9B, struct FVector,                                                        Zero_Based_World_Location);                                // 0x0258(0x000C)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0020 PADDING_0C9B, class UClass*,                                                         SQAction);                                                 // 0x0268(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0028 PADDING_0C9B, struct FScriptMulticastDelegate,                                       Created_Command_Control_Widget);                           // 0x0270(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_CommandPrePlacement.W_CommandPrePlacement_C");
		return ptr;
	}


	void Cache_Local_World_Location();
	void Get_Traced_Map_Location(struct FVector* Zero, struct FVector* Local);
	void Set_Action(class UClass* SQAction);
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void On_Map_Mouse_Down(const struct FPointerEvent& Mouse_Event, const struct FVector& World_Location);
	void Reset_Use();
	void ExecuteUbergraph_W_CommandPrePlacement(int EntryPoint);
	void Created_Command_Control_Widget__DelegateSignature(class UW_Command_ActionControl_C* Widget);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
