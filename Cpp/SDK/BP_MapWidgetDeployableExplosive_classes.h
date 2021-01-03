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

// WidgetBlueprintGeneratedClass BP_MapWidgetDeployableExplosive.BP_MapWidgetDeployableExplosive_C
// 0x0018 (FullSize[0x02D0] - InheritedSize[0x02B8])
class UBP_MapWidgetDeployableExplosive_C : public USQMapWidgetDeployableExplosive
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                      MarkerImage;                                               // 0x02C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                                   ScaleBox_1;                                                // 0x02C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_MapWidgetDeployableExplosive.BP_MapWidgetDeployableExplosive_C");
		return ptr;
	}



	void OnScaleChanged(float UniformScale);
	void OnExplosiveTypeChanged();
	void ExecuteUbergraph_BP_MapWidgetDeployableExplosive(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
