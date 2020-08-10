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

// WidgetBlueprintGeneratedClass W_HelicopterDirection.W_HelicopterDirection_C
// 0x0078 (FullSize[0x0258] - InheritedSize[0x01E0])
// LastOffsetWithSize(0x01E0)
#define PADDING_0107 - 0x0000 // Minimum to subtract -> (0050)
class UW_HelicopterDirection_C : public UUserWidget
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0050 PADDING_0107, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0230(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0058 PADDING_0107, class UImage*,                                                         dot);                                                      // 0x0238(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0060 PADDING_0107, class UImage*,                                                         Grid);                                                     // 0x0240(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0068 PADDING_0107, TScriptInterface<class USQHelicopterInstruments>,                      VehicleRef);                                               // 0x0248(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_HelicopterDirection.W_HelicopterDirection_C");
		return ptr;
	}


	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void InitializeScreen(const TScriptInterface<class USQHelicopterInstruments>& Vehicle);
	void ExecuteUbergraph_W_HelicopterDirection(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
