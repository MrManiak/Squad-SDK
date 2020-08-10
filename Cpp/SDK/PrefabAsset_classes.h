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

// Class PrefabAsset.PrefabActor
// 0x0018 (FullSize[0x0250] - InheritedSize[0x0238])
// LastOffsetWithSize(0x0238)
#define PADDING_00FA - 0x0000 // Minimum to subtract -> (0010)
class APrefabActor : public AActor
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0010 PADDING_00FA, class UPrefabComponent*,                                               PrefabComponent);                                          // 0x0248(0x0008)  (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	};

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

// Class PrefabAsset.PrefabAsset
// 0x00A8 (FullSize[0x00D0] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_00FC - 0x0000 // Minimum to subtract -> (0000)
class UPrefabAsset : public UObject
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_00FC, TMap<struct FString COMMA struct FSoftObjectPath>,                     AssetReferences);                                          // 0x0028(0x0050)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0050 PADDING_00FC, struct FSoftObjectPath,                                                GeneratedBlueprintAssetReference);                         // 0x0078(0x0018)  (Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0068 PADDING_00FC, struct FGuid,                                                          PrefabId);                                                 // 0x0090(0x0010)  (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0078 PADDING_00FC, struct FString,                                                        PrefabContent);                                            // 0x00A0(0x0010)  (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0088 PADDING_00FC, struct FString,                                                        PrefabHash);                                               // 0x00B0(0x0010)  (Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0098 PADDING_00FC, int,                                                                   NumActors);                                                // 0x00C0(0x0004)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x009C PADDING_00FC, struct FVector,                                                        PrefabPivot);                                              // 0x00C4(0x000C)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PrefabAsset.PrefabAsset");
		return ptr;
	}


};

// Class PrefabAsset.PrefabVariantAsset
// 0x0008 (FullSize[0x00D8] - InheritedSize[0x00D0])
// LastOffsetWithSize(0x00D0)
#define PADDING_00FD - 0x0000 // Minimum to subtract -> (0000)
class UPrefabVariantAsset : public UPrefabAsset
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_00FD, class UPrefabAsset*,                                                   Parent);                                                   // 0x00D0(0x0008)  (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PrefabAsset.PrefabVariantAsset");
		return ptr;
	}


};

// Class PrefabAsset.PrefabComponent
// 0x007C (FullSize[0x0481] - InheritedSize[0x0405])
// LastOffsetWithSize(0x0408)
#define PADDING_00FE - 0x0000 // Minimum to subtract -> (0008)
class UPrefabComponent : public UPrimitiveComponent
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0008 PADDING_00FE, class UPrefabAsset*,                                                   Prefab);                                                   // 0x0410(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0010 PADDING_00FE, class UBlueprint*,                                                     GeneratedBlueprint);                                       // 0x0418(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0018 PADDING_00FE, TMap<struct FName COMMA class AActor*>,                                PrefabInstancesMap);                                       // 0x0420(0x0050)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, AdvancedDisplay, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0068 PADDING_00FE, TArray<struct FPrefabVariantRule>,                                     VariantRulesOverwrite);                                    // 0x0470(0x0010)  (Edit, BlueprintVisible, ZeroConstructor, AdvancedDisplay, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0078 PADDING_00FE, unsigned char,                                                         bTransient);                                               // 0x0480(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PrefabAsset.PrefabComponent");
		return ptr;
	}


};

// Class PrefabAsset.PrefabFunctionLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class UPrefabFunctionLibrary : public UBlueprintFunctionLibrary
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PrefabAsset.PrefabFunctionLibrary");
		return ptr;
	}


	static class APrefabActor* STATIC_SpawnPrefab(class UObject* WorldContextObject, class UPrefabAsset* PrefabAsset, const struct FTransform& SpawnTransform, TArray<class AActor*>* OutSpawnPrefabInstances, bool bSpawnInstancesOnly, ESpawnActorCollisionHandlingMethod CollisionHandlingOverride, class AActor* Owner);
};

// Class PrefabAsset.PrefabExporter
// 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
// LastOffsetWithSize(0x0070)
class UPrefabExporter : public UExporter
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PrefabAsset.PrefabExporter");
		return ptr;
	}


};

// Class PrefabAsset.PrefabLevelExporter
// 0x0000 (FullSize[0x0078] - InheritedSize[0x0078])
// LastOffsetWithSize(0x0070)
class UPrefabLevelExporter : public UPrefabExporter
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PrefabAsset.PrefabLevelExporter");
		return ptr;
	}


};

// Class PrefabAsset.PrefabObjectExporterT3D
// 0x0000 (FullSize[0x0078] - InheritedSize[0x0078])
// LastOffsetWithSize(0x0070)
class UPrefabObjectExporterT3D : public UPrefabExporter
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PrefabAsset.PrefabObjectExporterT3D");
		return ptr;
	}


};

// Class PrefabAsset.PrefabToolSettings
// 0x00D2 (FullSize[0x00FA] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_0108 - 0x0000 // Minimum to subtract -> (0000)
class UPrefabToolSettings : public UObject
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0108, bool,                                                                  bReplaceActorsWithCreatedPrefab);                          // 0x0028(0x0001)  (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0001 PADDING_0108, bool,                                                                  bAutoIncludeAttachedActorsWhenCreateNewPrefab);            // 0x0029(0x0001)  (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0002 PADDING_0108, bool,                                                                  bNestedPrefabSupport);                                     // 0x002A(0x0001)  (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0003 PADDING_0108, bool,                                                                  bRestorePrefabActorCollapseStatusAfterPIE);                // 0x002B(0x0001)  (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0004 PADDING_0108, bool,                                                                  bCollapseAllPrefabActorsAfterMapOpened);                   // 0x002C(0x0001)  (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0005 PADDING_0108, bool,                                                                  bMoveActorsInWorldAfterSetPrefabPivot);                    // 0x002D(0x0001)  (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0006 PADDING_0108, bool,                                                                  bDuplicateNoRevertWithOffset);                             // 0x002E(0x0001)  (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0008 PADDING_0108, struct FString,                                                        NewPrefabNamePattern);                                     // 0x0030(0x0010)  (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0018 PADDING_0108, EPTUITheme,                                                            UITheme);                                                  // 0x0040(0x0001)  (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x001C PADDING_0108, bool,                                                                  bUpdateAllPrefabActorsWhenOpenMap);                        // 0x0044(0x0001)  (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x001D PADDING_0108, bool,                                                                  bCheckPrefabChangeBeforeUpdateAllPrefabActorsWhenOpenMap); // 0x0045(0x0001)  (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x001E PADDING_0108, bool,                                                                  bUpdateAllPrefabActorsWhenApply);                          // 0x0046(0x0001)  (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x001F PADDING_0108, bool,                                                                  bApplyToNestedPrefab);                                     // 0x0047(0x0001)  (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0020 PADDING_0108, bool,                                                                  bEnableApplyFromDisconnectedPrefabActor);                  // 0x0048(0x0001)  (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0021 PADDING_0108, bool,                                                                  bAutoAddRemoveVariantActorPrefix);                         // 0x0049(0x0001)  (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0028 PADDING_0108, struct FString,                                                        VariantActorPrefix);                                       // 0x0050(0x0010)  (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0038 PADDING_0108, bool,                                                                  bEnablePrefabComponentVisualizer);                         // 0x0060(0x0001)  (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0039 PADDING_0108, EPrefabVisualizerType,                                                 PrefabComponentVisualizerType);                            // 0x0061(0x0001)  (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x003A PADDING_0108, bool,                                                                  bDisplayPrefabComponentVisualizerEvenNotSelected);         // 0x0062(0x0001)  (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x003C PADDING_0108, struct FColor,                                                         PrefabViewVisualizerColor);                                // 0x0064(0x0004)  (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0040 PADDING_0108, struct FColor,                                                         TargetActorColor);                                         // 0x0068(0x0004)  (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0044 PADDING_0108, struct FColor,                                                         UnLockedConnectedColor);                                   // 0x006C(0x0004)  (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0048 PADDING_0108, struct FColor,                                                         LockedConnectedColor);                                     // 0x0070(0x0004)  (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x004C PADDING_0108, struct FColor,                                                         UnLockedDisConnectedColor);                                // 0x0074(0x0004)  (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0050 PADDING_0108, struct FColor,                                                         LockedDisConnectedColor);                                  // 0x0078(0x0004)  (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0054 PADDING_0108, struct FColor,                                                         UnLockedNoPrefabAssignedColor);                            // 0x007C(0x0004)  (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0058 PADDING_0108, struct FColor,                                                         LockedNoPrefabAssignedColor);                              // 0x0080(0x0004)  (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0060 PADDING_0108, struct FSoftObjectPath,                                                PrefabMaterialPath);                                       // 0x0088(0x0018)  (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00A0 PADDING_0108, bool,                                                                  bShadedPrefabViewVisualizer);                              // 0x00C8(0x0001)  (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00A1 PADDING_0108, bool,                                                                  bLockPrefabSelectionByDefault);                            // 0x00C9(0x0001)  (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00A2 PADDING_0108, bool,                                                                  bDisableLockPrefabSelectionFeature);                       // 0x00CA(0x0001)  (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00A3 PADDING_0108, bool,                                                                  bForceApplyPerInstanceVertexColor);                        // 0x00CB(0x0001)  (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00A5 PADDING_0108, bool,                                                                  bSupportGenerateBlueprint);                                // 0x00CD(0x0001)  (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00A6 PADDING_0108, bool,                                                                  bHarvestComponentsWhenGeneratingBlueprint);                // 0x00CE(0x0001)  (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00A7 PADDING_0108, bool,                                                                  bForceMobilityToMovableWhenGeneratingBlueprint);           // 0x00CF(0x0001)  (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00B0 PADDING_0108, TArray<class UClass*>,                                                 IgnoreActorClassesWhenGeneratingBlueprint);                // 0x00D8(0x0010)  (Edit, ZeroConstructor, Config, UObjectWrapper, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00C0 PADDING_0108, TArray<struct FName>,                                                  IgnoreActorTagsWhenGeneratingBlueprint);                   // 0x00E8(0x0010)  (Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00D0 PADDING_0108, bool,                                                                  bFlashPrefabWindowForTargetPrefabActor);                   // 0x00F8(0x0001)  (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00D1 PADDING_0108, bool,                                                                  bEnablePrefabTextEditor);                                  // 0x00F9(0x0001)  (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00D2 PADDING_0108, bool,                                                                  bDebugMode);                                               // 0x00FA(0x0001)  (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00D3 PADDING_0108, bool,                                                                  bDisableThumbnailRender);                                  // 0x00FB(0x0001)  (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00D4 PADDING_0108, bool,                                                                  bShowPrefabInstanceTagInPrefabToolWindow);                 // 0x00FC(0x0001)  (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PrefabAsset.PrefabToolSettings");
		return ptr;
	}


};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
