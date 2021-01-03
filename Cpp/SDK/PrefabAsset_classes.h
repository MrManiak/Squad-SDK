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

// Class PrefabAsset.PrefabToolSettings
// 0x00D8 (FullSize[0x0100] - InheritedSize[0x0028])
class UPrefabToolSettings : public UObject
{
public:
	bool                                               bReplaceActorsWithCreatedPrefab;                           // 0x0028(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAutoIncludeAttachedActorsWhenCreateNewPrefab;             // 0x0029(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bNestedPrefabSupport;                                      // 0x002A(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRestorePrefabActorCollapseStatusAfterPIE;                 // 0x002B(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCollapseAllPrefabActorsAfterMapOpened;                    // 0x002C(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bMoveActorsInWorldAfterSetPrefabPivot;                     // 0x002D(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDuplicateNoRevertWithOffset;                              // 0x002E(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_19ZS[0x1];                                     // 0x002F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     NewPrefabNamePattern;                                      // 0x0030(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EPTUITheme                                         UITheme;                                                   // 0x0040(0x0001) ELEMENT_SIZE_MISMATCH  (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0DYB[0x3];                                     // 0x0041(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	bool                                               bUpdateAllPrefabActorsWhenOpenMap;                         // 0x0044(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCheckPrefabChangeBeforeUpdateAllPrefabActorsWhenOpenMap;  // 0x0045(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUpdateAllPrefabActorsWhenApply;                           // 0x0046(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bApplyToNestedPrefab;                                      // 0x0047(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEnableApplyFromDisconnectedPrefabActor;                   // 0x0048(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAutoAddRemoveVariantActorPrefix;                          // 0x0049(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KOXZ[0x6];                                     // 0x004A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     VariantActorPrefix;                                        // 0x0050(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEnablePrefabComponentVisualizer;                          // 0x0060(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EPrefabVisualizerType                              PrefabComponentVisualizerType;                             // 0x0061(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDisplayPrefabComponentVisualizerEvenNotSelected;          // 0x0062(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EG7F[0x1];                                     // 0x0063(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FColor                                      PrefabViewVisualizerColor;                                 // 0x0064(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                      TargetActorColor;                                          // 0x0068(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                      UnLockedConnectedColor;                                    // 0x006C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                      LockedConnectedColor;                                      // 0x0070(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                      UnLockedDisConnectedColor;                                 // 0x0074(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                      LockedDisConnectedColor;                                   // 0x0078(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                      UnLockedNoPrefabAssignedColor;                             // 0x007C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                      LockedNoPrefabAssignedColor;                               // 0x0080(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KN7O[0x4];                                     // 0x0084(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSoftObjectPath                             PrefabMaterialPath;                                        // 0x0088(0x0018) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FFNA[0x28];                                    // 0x00A0(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bShadedPrefabViewVisualizer;                               // 0x00C8(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bLockPrefabSelectionByDefault;                             // 0x00C9(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDisableLockPrefabSelectionFeature;                        // 0x00CA(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bForceApplyPerInstanceVertexColor;                         // 0x00CB(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DG1E[0x1];                                     // 0x00CC(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bSupportGenerateBlueprint;                                 // 0x00CD(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHarvestComponentsWhenGeneratingBlueprint;                 // 0x00CE(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bForceMobilityToMovableWhenGeneratingBlueprint;            // 0x00CF(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_URAA[0x8];                                     // 0x00D0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UClass*>                              IgnoreActorClassesWhenGeneratingBlueprint;                 // 0x00D8(0x0010) (Edit, ZeroConstructor, Config, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<struct FName>                               IgnoreActorTagsWhenGeneratingBlueprint;                    // 0x00E8(0x0010) (Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	bool                                               bFlashPrefabWindowForTargetPrefabActor;                    // 0x00F8(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEnablePrefabTextEditor;                                   // 0x00F9(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDebugMode;                                                // 0x00FA(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDisableThumbnailRender;                                   // 0x00FB(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShowPrefabInstanceTagInPrefabToolWindow;                  // 0x00FC(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NG04[0x3];                                     // 0x00FD(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PrefabAsset.PrefabToolSettings");
		return ptr;
	}



};

// Class PrefabAsset.PrefabExporter
// 0x0000 (FullSize[0x0078] - InheritedSize[0x0078])
class UPrefabExporter : public UExporter
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PrefabAsset.PrefabExporter");
		return ptr;
	}



};

// Class PrefabAsset.PrefabObjectExporterT3D
// 0x0000 (FullSize[0x0078] - InheritedSize[0x0078])
class UPrefabObjectExporterT3D : public UPrefabExporter
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PrefabAsset.PrefabObjectExporterT3D");
		return ptr;
	}



};

// Class PrefabAsset.PrefabLevelExporter
// 0x0010 (FullSize[0x0088] - InheritedSize[0x0078])
class UPrefabLevelExporter : public UPrefabExporter
{
public:
	unsigned char                                      UnknownData_FDOB[0x10];                                    // 0x0078(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PrefabAsset.PrefabLevelExporter");
		return ptr;
	}



};

// Class PrefabAsset.PrefabFunctionLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UPrefabFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PrefabAsset.PrefabFunctionLibrary");
		return ptr;
	}



	class APrefabActor* STATIC_SpawnPrefab(class UObject* WorldContextObject, class UPrefabAsset* PrefabAsset, const struct FTransform& SpawnTransform, TArray<class AActor*>* OutSpawnPrefabInstances, bool bSpawnInstancesOnly, ESpawnActorCollisionHandlingMethod CollisionHandlingOverride, class AActor* Owner);
};

// Class PrefabAsset.PrefabComponent
// 0x0088 (FullSize[0x0490] - InheritedSize[0x0408])
class UPrefabComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData_L85L[0x8];                                     // 0x0408(0x0008) Fix Super Size
	class UPrefabAsset*                                Prefab;                                                    // 0x0410(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBlueprint*                                  GeneratedBlueprint;                                        // 0x0418(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FName, class AActor*>                  PrefabInstancesMap;                                        // 0x0420(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, AdvancedDisplay, NativeAccessSpecifierPublic)
	TArray<struct FPrefabVariantRule>                  VariantRulesOverwrite;                                     // 0x0470(0x0010) (Edit, BlueprintVisible, ZeroConstructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	unsigned char                                      bTransient : 1;                                            // 0x0480(0x0001) BIT_FIELD  (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MMC4[0xF];                                     // 0x0481(0x000F) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PrefabAsset.PrefabComponent");
		return ptr;
	}



};

// Class PrefabAsset.PrefabAsset
// 0x00A8 (FullSize[0x00D0] - InheritedSize[0x0028])
class UPrefabAsset : public UObject
{
public:
	TMap<struct FString, struct FSoftObjectPath>       AssetReferences;                                           // 0x0028(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FSoftObjectPath                             GeneratedBlueprintAssetReference;                          // 0x0078(0x0018) (Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                       PrefabId;                                                  // 0x0090(0x0010) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     PrefabContent;                                             // 0x00A0(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     PrefabHash;                                                // 0x00B0(0x0010) (Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                NumActors;                                                 // 0x00C0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector                                     PrefabPivot;                                               // 0x00C4(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PrefabAsset.PrefabAsset");
		return ptr;
	}



};

// Class PrefabAsset.PrefabVariantAsset
// 0x0008 (FullSize[0x00D8] - InheritedSize[0x00D0])
class UPrefabVariantAsset : public UPrefabAsset
{
public:
	class UPrefabAsset*                                Parent;                                                    // 0x00D0(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PrefabAsset.PrefabVariantAsset");
		return ptr;
	}



};

// Class PrefabAsset.PrefabActor
// 0x0008 (FullSize[0x0250] - InheritedSize[0x0248])
class APrefabActor : public AActor
{
public:
	class UPrefabComponent*                            PrefabComponent;                                           // 0x0248(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PrefabAsset.PrefabActor");
		return ptr;
	}



	void SetPrefab(class UPrefabAsset* NewPrefab, bool bForceRevertEvenDisconnected);
	void SetMobility(TEnumAsByte<EComponentMobility> InMobility);
	class UPrefabAsset* GetPrefab();
	void DestroyPrefabActor(bool bDestroyAttachedChildren);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
