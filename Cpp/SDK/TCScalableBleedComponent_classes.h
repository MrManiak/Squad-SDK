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

// BlueprintGeneratedClass TCScalableBleedComponent.TCScalableBleedComponent_C
// 0x00B0 (FullSize[0x0178] - InheritedSize[0x00C8])
// LastOffsetWithSize(0x00C8)
#define PADDING_020B - 0x0000 // Minimum to subtract -> (0010)
class UTCScalableBleedComponent_C : public UActorComponent
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0010 PADDING_020B, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x00D8(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0018 PADDING_020B, TArray<float>,                                                         BleedThresholds);                                          // 0x00E0(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
		DEFINE_MEMBER_NNN(0x0028 PADDING_020B, bool,                                                                  bInterpolateBleedValues);                                  // 0x00F0(0x0001)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
		DEFINE_MEMBER_NNN(0x0030 PADDING_020B, TMap<float COMMA int>,                                                 BleedScaleMap);                                            // 0x00F8(0x0050)  (Edit, BlueprintVisible, ZeroConstructor)
		DEFINE_MEMBER_NNN(0x0080 PADDING_020B, int,                                                                   Minimum_of_Hexes_Required_for_Bleed);                      // 0x0148(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0088 PADDING_020B, TArray<int>,                                                           Current_Bleed);                                            // 0x0150(0x0010)  (Edit, BlueprintVisible, Net, ZeroConstructor)
		DEFINE_MEMBER_NNN(0x0098 PADDING_020B, TArray<class ATC_HexZone_C*>,                                          All_TC_Zones);                                             // 0x0160(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
		DEFINE_MEMBER_NNN(0x00A8 PADDING_020B, class UCurveFloat*,                                                    Ticket_Bleed_Curve);                                       // 0x0170(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TCScalableBleedComponent.TCScalableBleedComponent_C");
		return ptr;
	}


	void CalcBleedValue_Curve(int Zones_captured, int* Bleed_Value);
	void CalcBleedValue(int Zones_captured, int* Bleed_Value);
	void InitBleedThresholds();
	void Get_Current_Bleed(int Team_ID, int* Bleed_Per_Min);
	void Initialise_TC_Bleed_Component(TArray<class ATC_HexZone_C*>* All_TC_Zones);
	void Update_Bleed_Count();
	void ReceiveBeginPlay();
	void Apply_Bleed_Per_Minute();
	void ExecuteUbergraph_TCScalableBleedComponent(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
