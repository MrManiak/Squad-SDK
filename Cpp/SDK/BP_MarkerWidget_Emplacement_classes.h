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

// WidgetBlueprintGeneratedClass BP_MarkerWidget_Emplacement.BP_MarkerWidget_Emplacement_C
// 0x0038 (FullSize[0x0288] - InheritedSize[0x0250])
class UBP_MarkerWidget_Emplacement_C : public USQMapIconWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0250(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                      Vehicle_Image;                                             // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      ViewCone;                                                  // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                                    WidgetOverlay;                                             // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    CloseTooltip;                                              // 0x0270(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UTexture2D*                                  VehicleImage;                                              // 0x0280(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_MarkerWidget_Emplacement.BP_MarkerWidget_Emplacement_C");
		return ptr;
	}



	bool IsMarkerVisible();
	void IsInVehicle(bool* InVehicle);
	ESlateVisibility GetVehicleConeVisbility();
	void IsVehicleEmpty(bool* Empty);
	void GetVehicle(class ASQVehicle** Vehicle);
	void IsSameSquad(bool* SquadVehicle);
	void IsSameTeam(bool* SameTeam);
	void IsNeutralTeam(bool* IsNeutral);
	void GetVehicleIcon(class UTexture** NewParam);
	ESlateVisibility Get_Vehicle_Image_Visibility_1();
	void IsOwnOrNeutralTeam(bool* OwnOrNeutral);
	struct FSlateBrush Get_PlayerImage_Brush();
	void IsSL();
	void SetAngle(float InAngle);
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_BP_MarkerWidget_Emplacement(int EntryPoint);
	void CloseTooltip__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
