#pragma once

// Name: S, Version: b


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
// 0x00A0 (FullSize[0x0178] - InheritedSize[0x00D8])
class UTCScalableBleedComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	TArray<float>                                      BleedThresholds;                                           // 0x00E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               bInterpolateBleedValues;                                   // 0x00F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_JZYK[0x7];                                     // 0x00F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<float, int>                                   BleedScaleMap;                                             // 0x00F8(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                Minimum_of_Hexes_Required_for_Bleed;                       // 0x0148(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_SC70[0x4];                                     // 0x014C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<int>                                        Current_Bleed;                                             // 0x0150(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor)
	TArray<class ATC_HexZone_C*>                       All_TC_Zones;                                              // 0x0160(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class UCurveFloat*                                 Ticket_Bleed_Curve;                                        // 0x0170(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


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
