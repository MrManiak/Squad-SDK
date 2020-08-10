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

// WidgetBlueprintGeneratedClass W_Helicopter_MiniMap.W_Helicopter_MiniMap_C
// 0x0098 (FullSize[0x0278] - InheritedSize[0x01E0])
// LastOffsetWithSize(0x01E0)
#define PADDING_032B - 0x0000 // Minimum to subtract -> (0050)
class UW_Helicopter_MiniMap_C : public UUserWidget
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0050 PADDING_032B, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x0230(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0058 PADDING_032B, class UWidgetAnimation*,                                               ShowAnim);                                                 // 0x0238(0x0008)  (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0060 PADDING_032B, class UImage*,                                                         GPSMap);                                                   // 0x0240(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0068 PADDING_032B, class UImage*,                                                         Icon_Player);                                              // 0x0248(0x0008)  (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0070 PADDING_032B, class UMaterialInstanceDynamic*,                                       MapMaterialInstance);                                      // 0x0250(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0078 PADDING_032B, class UW_SQMapBody_C*,                                                 Map_Body);                                                 // 0x0258(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0080 PADDING_032B, struct FTimerHandle,                                                   FadeAnimation);                                            // 0x0260(0x0008)  (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0088 PADDING_032B, bool,                                                                  Open);                                                     // 0x0268(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x0089 PADDING_032B, bool,                                                                  Engine_Active);                                            // 0x0269(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x0090 PADDING_032B, class ASQHelicopter2*,                                                 Helicopter);                                               // 0x0270(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_Helicopter_MiniMap.W_Helicopter_MiniMap_C");
		return ptr;
	}


	void InitializeMap(class ASQHelicopter2* OwningVehicle);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void PlayOpenAnim();
	void FinishOpen();
	void PlayCloseAnim();
	void Get_World();
	void ExecuteUbergraph_W_Helicopter_MiniMap(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
