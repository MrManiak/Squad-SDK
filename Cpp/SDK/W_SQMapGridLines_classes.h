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

// WidgetBlueprintGeneratedClass W_SQMapGridLines.W_SQMapGridLines_C
// 0x0028 (FullSize[0x0258] - InheritedSize[0x0230])
class UW_SQMapGridLines_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                                     Border_1;                                                  // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                                    GridOverlay;                                               // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<struct FGridLinesPerZoomLevel>              GridLineLevels;                                            // 0x0248(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_SQMapGridLines.W_SQMapGridLines_C");
		return ptr;
	}



	void InitializeTexture(const struct FVector2D& GridNumbers, float StartingZoom);
	void UpdateZoom(float ZoomAmount);
	void Update_Grid_Opacity();
	void Construct();
	void ExecuteUbergraph_W_SQMapGridLines(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
