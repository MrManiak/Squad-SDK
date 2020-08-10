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

// WidgetBlueprintGeneratedClass W_HelicopterStatusSmall.W_HelicopterStatusSmall_C
// 0x0080 (FullSize[0x0260] - InheritedSize[0x01E0])
// LastOffsetWithSize(0x01E0)
#define PADDING_02CB - 0x0000 // Minimum to subtract -> (0050)
class UW_HelicopterStatusSmall_C : public UUserWidget
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0050 PADDING_02CB, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0230(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0058 PADDING_02CB, class UUMG_GenericState_C*,                                            EngineState);                                              // 0x0238(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0060 PADDING_02CB, class UUMG_GenericState_C*,                                            MainRotor);                                                // 0x0240(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0068 PADDING_02CB, class UUMG_GenericState_C*,                                            TailRotor);                                                // 0x0248(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0070 PADDING_02CB, class ASQHelicopter2*,                                                 REF_Helicopter);                                           // 0x0250(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0078 PADDING_02CB, class ASQPlayerController*,                                            My_PC);                                                    // 0x0258(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_HelicopterStatusSmall.W_HelicopterStatusSmall_C");
		return ptr;
	}


	void Update_Tail_Rotor_State();
	void Get_Specific_Blades(bool Main, class USQRotorBladesComponent** Rotor);
	void Update_Main_Rotor_State();
	void Update_Engine_State();
	void Get_Helicopter();
	void Construct();
	void Refresh_Vehicle();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_W_HelicopterStatusSmall(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
