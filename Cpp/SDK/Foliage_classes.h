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

// Class Foliage.FoliageInstancedStaticMeshComponent
// 0x006C (FullSize[0x0638] - InheritedSize[0x05CC])
// LastOffsetWithSize(0x05CC)
#define PADDING_00C9 - 0x0000 // Minimum to subtract -> (004C)
class UFoliageInstancedStaticMeshComponent : public UHierarchicalInstancedStaticMeshComponent
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x004C PADDING_00C9, struct FScriptMulticastDelegate,                                       OnInstanceTakePointDamage);                                // 0x0618(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x005C PADDING_00C9, struct FScriptMulticastDelegate,                                       OnInstanceTakeRadialDamage);                               // 0x0628(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Foliage.FoliageInstancedStaticMeshComponent");
		return ptr;
	}


};

// Class Foliage.FoliageStatistics
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class UFoliageStatistics : public UBlueprintFunctionLibrary
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Foliage.FoliageStatistics");
		return ptr;
	}


	static int STATIC_FoliageOverlappingSphereCount(class UObject* WorldContextObject, class UStaticMesh* StaticMesh, const struct FVector& CenterPosition, float Radius);
	static int STATIC_FoliageOverlappingBoxCount(class UObject* WorldContextObject, class UStaticMesh* StaticMesh, const struct FBox& Box);
};

// Class Foliage.FoliageType
// 0x0315 (FullSize[0x033D] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_00CD - 0x0000 // Minimum to subtract -> (0000)
class UFoliageType : public UObject
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_00CD, struct FGuid,                                                          UpdateGuid);                                               // 0x0028(0x0010)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0010 PADDING_00CD, float,                                                                 Density);                                                  // 0x0038(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0014 PADDING_00CD, float,                                                                 DensityAdjustmentFactor);                                  // 0x003C(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0018 PADDING_00CD, float,                                                                 Radius);                                                   // 0x0040(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x001C PADDING_00CD, EFoliageScaling,                                                       Scaling);                                                  // 0x0044(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0020 PADDING_00CD, struct FFloatInterval,                                                 ScaleX);                                                   // 0x0048(0x0008)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0028 PADDING_00CD, struct FFloatInterval,                                                 ScaleY);                                                   // 0x0050(0x0008)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0030 PADDING_00CD, struct FFloatInterval,                                                 ScaleZ);                                                   // 0x0058(0x0008)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0038 PADDING_00CD, struct FFoliageVertexColorChannelMask,                                 VertexColorMaskByChannel[0x4]);                            // 0x0060(0x000C)  (Edit, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0068 PADDING_00CD, TEnumAsByte<EFoliageVertexColorMask>,                                  VertexColorMask);                                          // 0x0090(0x0001)  (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x006C PADDING_00CD, float,                                                                 VertexColorMaskThreshold);                                 // 0x0094(0x0004)  (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0070 PADDING_00CD, unsigned char,                                                         VertexColorMaskInvert);                                    // 0x0098(0x0001) BIT_FIELD (Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0074 PADDING_00CD, struct FFloatInterval,                                                 ZOffset);                                                  // 0x009C(0x0008)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x007C PADDING_00CD, unsigned char,                                                         AlignToNormal);                                            // 0x00A4(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0080 PADDING_00CD, float,                                                                 AlignMaxAngle);                                            // 0x00A8(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0084 PADDING_00CD, unsigned char,                                                         RandomYaw);                                                // 0x00AC(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0088 PADDING_00CD, float,                                                                 RandomPitchAngle);                                         // 0x00B0(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x008C PADDING_00CD, struct FFloatInterval,                                                 GroundSlopeAngle);                                         // 0x00B4(0x0008)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0094 PADDING_00CD, struct FFloatInterval,                                                 Height);                                                   // 0x00BC(0x0008)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00A0 PADDING_00CD, TArray<struct FName>,                                                  LandscapeLayers);                                          // 0x00C8(0x0010)  (Edit, ZeroConstructor, AdvancedDisplay, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00B0 PADDING_00CD, struct FName,                                                          LandscapeLayer);                                           // 0x00D8(0x0008)  (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00B8 PADDING_00CD, unsigned char,                                                         CollisionWithWorld);                                       // 0x00E0(0x0001) BIT_FIELD (Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00BC PADDING_00CD, struct FVector,                                                        CollisionScale);                                           // 0x00E4(0x000C)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00C8 PADDING_00CD, float,                                                                 MinimumLayerWeight);                                       // 0x00F0(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00CC PADDING_00CD, struct FBoxSphereBounds,                                               MeshBounds);                                               // 0x00F4(0x001C)  (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00E8 PADDING_00CD, struct FVector,                                                        LowBoundOriginRadius);                                     // 0x0110(0x000C)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00F4 PADDING_00CD, TEnumAsByte<EComponentMobility>,                                       Mobility);                                                 // 0x011C(0x0001)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x00F8 PADDING_00CD, struct FInt32Interval,                                                 CullDistance);                                             // 0x0120(0x0008)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0100 PADDING_00CD, unsigned char,                                                         bEnableStaticLighting);                                    // 0x0128(0x0001) BIT_FIELD (Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0100 PADDING_00CD, unsigned char,                                                         CastShadow);                                               // 0x0128(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0100 PADDING_00CD, unsigned char,                                                         bAffectDynamicIndirectLighting);                           // 0x0128(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0100 PADDING_00CD, unsigned char,                                                         bAffectDistanceFieldLighting);                             // 0x0128(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0100 PADDING_00CD, unsigned char,                                                         bCastDynamicShadow);                                       // 0x0128(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0100 PADDING_00CD, unsigned char,                                                         bCastStaticShadow);                                        // 0x0128(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0100 PADDING_00CD, unsigned char,                                                         bCastShadowAsTwoSided);                                    // 0x0128(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0100 PADDING_00CD, unsigned char,                                                         bReceivesDecals);                                          // 0x0128(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0101 PADDING_00CD, unsigned char,                                                         bOverrideLightMapRes);                                     // 0x0129(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0104 PADDING_00CD, int,                                                                   OverriddenLightMapRes);                                    // 0x012C(0x0004)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0108 PADDING_00CD, ELightmapType,                                                         LightmapType);                                             // 0x0130(0x0001)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x010C PADDING_00CD, unsigned char,                                                         bUseAsOccluder);                                           // 0x0134(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0110 PADDING_00CD, struct FBodyInstance,                                                  BodyInstance);                                             // 0x0138(0x0110)  (Edit, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0220 PADDING_00CD, TEnumAsByte<EHasCustomNavigableGeometry>,                              CustomNavigableGeometry);                                  // 0x0248(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0221 PADDING_00CD, struct FLightingChannels,                                              LightingChannels);                                         // 0x0249(0x0001)  (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0224 PADDING_00CD, unsigned char,                                                         bRenderCustomDepth);                                       // 0x024C(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0228 PADDING_00CD, int,                                                                   CustomDepthStencilValue);                                  // 0x0250(0x0004)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x022C PADDING_00CD, int,                                                                   TranslucencySortPriority);                                 // 0x0254(0x0004)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0230 PADDING_00CD, float,                                                                 CollisionRadius);                                          // 0x0258(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0234 PADDING_00CD, float,                                                                 ShadeRadius);                                              // 0x025C(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0238 PADDING_00CD, int,                                                                   NumSteps);                                                 // 0x0260(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x023C PADDING_00CD, float,                                                                 InitialSeedDensity);                                       // 0x0264(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0240 PADDING_00CD, float,                                                                 AverageSpreadDistance);                                    // 0x0268(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0244 PADDING_00CD, float,                                                                 SpreadVariance);                                           // 0x026C(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0248 PADDING_00CD, int,                                                                   SeedsPerStep);                                             // 0x0270(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x024C PADDING_00CD, int,                                                                   DistributionSeed);                                         // 0x0274(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0250 PADDING_00CD, float,                                                                 MaxInitialSeedOffset);                                     // 0x0278(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0254 PADDING_00CD, bool,                                                                  bCanGrowInShade);                                          // 0x027C(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0255 PADDING_00CD, bool,                                                                  bSpawnsInShade);                                           // 0x027D(0x0001)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0258 PADDING_00CD, float,                                                                 MaxInitialAge);                                            // 0x0280(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x025C PADDING_00CD, float,                                                                 MaxAge);                                                   // 0x0284(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0260 PADDING_00CD, float,                                                                 OverlapPriority);                                          // 0x0288(0x0004)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0264 PADDING_00CD, struct FFloatInterval,                                                 ProceduralScale);                                          // 0x028C(0x0008)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0270 PADDING_00CD, struct FRuntimeFloatCurve,                                             ScaleCurve);                                               // 0x0298(0x0088)  (Edit, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x02F8 PADDING_00CD, int,                                                                   ChangeCount);                                              // 0x0320(0x0004)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x02FC PADDING_00CD, unsigned char,                                                         ReapplyDensity);                                           // 0x0324(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x02FC PADDING_00CD, unsigned char,                                                         ReapplyRadius);                                            // 0x0324(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x02FC PADDING_00CD, unsigned char,                                                         ReapplyAlignToNormal);                                     // 0x0324(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x02FC PADDING_00CD, unsigned char,                                                         ReapplyRandomYaw);                                         // 0x0324(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x02FC PADDING_00CD, unsigned char,                                                         ReapplyScaling);                                           // 0x0324(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x02FC PADDING_00CD, unsigned char,                                                         ReapplyScaleX);                                            // 0x0324(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x02FC PADDING_00CD, unsigned char,                                                         ReapplyScaleY);                                            // 0x0324(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x02FC PADDING_00CD, unsigned char,                                                         ReapplyScaleZ);                                            // 0x0324(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x02FD PADDING_00CD, unsigned char,                                                         ReapplyRandomPitchAngle);                                  // 0x0325(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x02FD PADDING_00CD, unsigned char,                                                         ReapplyGroundSlope);                                       // 0x0325(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x02FD PADDING_00CD, unsigned char,                                                         ReapplyHeight);                                            // 0x0325(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x02FD PADDING_00CD, unsigned char,                                                         ReapplyLandscapeLayers);                                   // 0x0325(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x02FD PADDING_00CD, unsigned char,                                                         ReapplyZOffset);                                           // 0x0325(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x02FD PADDING_00CD, unsigned char,                                                         ReapplyCollisionWithWorld);                                // 0x0325(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x02FD PADDING_00CD, unsigned char,                                                         ReapplyVertexColorMask);                                   // 0x0325(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x02FD PADDING_00CD, unsigned char,                                                         bEnableDensityScaling);                                    // 0x0325(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0300 PADDING_00CD, TArray<class URuntimeVirtualTexture*>,                                 RuntimeVirtualTextures);                                   // 0x0328(0x0010)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0310 PADDING_00CD, int,                                                                   VirtualTextureCullMips);                                   // 0x0338(0x0004)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0314 PADDING_00CD, ERuntimeVirtualTextureMainPassType,                                    VirtualTextureRenderPassType);                             // 0x033C(0x0001)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Foliage.FoliageType");
		return ptr;
	}


};

// Class Foliage.FoliageType_Actor
// 0x000B (FullSize[0x0348] - InheritedSize[0x033D])
// LastOffsetWithSize(0x033D)
#define PADDING_00D0 - 0x0000 // Minimum to subtract -> (0003)
class UFoliageType_Actor : public UFoliageType
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0003 PADDING_00D0, class UClass*,                                                         ActorClass);                                               // 0x0340(0x0008)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Foliage.FoliageType_Actor");
		return ptr;
	}


};

// Class Foliage.FoliageType_InstancedStaticMesh
// 0x0023 (FullSize[0x0360] - InheritedSize[0x033D])
// LastOffsetWithSize(0x033D)
#define PADDING_00D2 - 0x0000 // Minimum to subtract -> (0003)
class UFoliageType_InstancedStaticMesh : public UFoliageType
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0003 PADDING_00D2, class UStaticMesh*,                                                    Mesh);                                                     // 0x0340(0x0008)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x000B PADDING_00D2, TArray<class UMaterialInterface*>,                                     OverrideMaterials);                                        // 0x0348(0x0010)  (Edit, ZeroConstructor, AdvancedDisplay, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x001B PADDING_00D2, class UClass*,                                                         ComponentClass);                                           // 0x0358(0x0008)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Foliage.FoliageType_InstancedStaticMesh");
		return ptr;
	}


};

// Class Foliage.InstancedFoliageActor
// 0x0010 (FullSize[0x0248] - InheritedSize[0x0238])
// LastOffsetWithSize(0x0238)
class AInstancedFoliageActor : public AActor
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Foliage.InstancedFoliageActor");
		return ptr;
	}


};

// Class Foliage.InteractiveFoliageActor
// 0x0062 (FullSize[0x02B4] - InheritedSize[0x0252])
// LastOffsetWithSize(0x0252)
#define PADDING_00D5 - 0x0000 // Minimum to subtract -> (0006)
class AInteractiveFoliageActor : public AStaticMeshActor
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0006 PADDING_00D5, class UCapsuleComponent*,                                              CapsuleComponent);                                         // 0x0258(0x0008)  (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x000E PADDING_00D5, struct FVector,                                                        TouchingActorEntryPosition);                               // 0x0260(0x000C)  (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x001A PADDING_00D5, struct FVector,                                                        FoliageVelocity);                                          // 0x026C(0x000C)  (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0026 PADDING_00D5, struct FVector,                                                        FoliageForce);                                             // 0x0278(0x000C)  (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0032 PADDING_00D5, struct FVector,                                                        FoliagePosition);                                          // 0x0284(0x000C)  (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x003E PADDING_00D5, float,                                                                 FoliageDamageImpulseScale);                                // 0x0290(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0042 PADDING_00D5, float,                                                                 FoliageTouchImpulseScale);                                 // 0x0294(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0046 PADDING_00D5, float,                                                                 FoliageStiffness);                                         // 0x0298(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x004A PADDING_00D5, float,                                                                 FoliageStiffnessQuadratic);                                // 0x029C(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x004E PADDING_00D5, float,                                                                 FoliageDamping);                                           // 0x02A0(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0052 PADDING_00D5, float,                                                                 MaxDamageImpulse);                                         // 0x02A4(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0056 PADDING_00D5, float,                                                                 MaxTouchImpulse);                                          // 0x02A8(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x005A PADDING_00D5, float,                                                                 MaxForce);                                                 // 0x02AC(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x005E PADDING_00D5, float,                                                                 Mass);                                                     // 0x02B0(0x0004)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Foliage.InteractiveFoliageActor");
		return ptr;
	}


	void CapsuleTouched(class UPrimitiveComponent* OverlappedComp, class AActor* Other, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& OverlapInfo);
};

// Class Foliage.InteractiveFoliageComponent
// 0x0008 (FullSize[0x04A0] - InheritedSize[0x0498])
// LastOffsetWithSize(0x0498)
class UInteractiveFoliageComponent : public UStaticMeshComponent
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Foliage.InteractiveFoliageComponent");
		return ptr;
	}


};

// Class Foliage.ProceduralFoliageBlockingVolume
// 0x0008 (FullSize[0x0288] - InheritedSize[0x0280])
// LastOffsetWithSize(0x0280)
#define PADDING_00D8 - 0x0000 // Minimum to subtract -> (0000)
class AProceduralFoliageBlockingVolume : public AVolume
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_00D8, class AProceduralFoliageVolume*,                                       ProceduralFoliageVolume);                                  // 0x0280(0x0008)  (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Foliage.ProceduralFoliageBlockingVolume");
		return ptr;
	}


};

// Class Foliage.ProceduralFoliageComponent
// 0x0038 (FullSize[0x0100] - InheritedSize[0x00C8])
// LastOffsetWithSize(0x00C8)
#define PADDING_00DE - 0x0000 // Minimum to subtract -> (0010)
class UProceduralFoliageComponent : public UActorComponent
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0010 PADDING_00DE, class UProceduralFoliageSpawner*,                                      FoliageSpawner);                                           // 0x00D8(0x0008)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0018 PADDING_00DE, float,                                                                 TileOverlap);                                              // 0x00E0(0x0004)  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0020 PADDING_00DE, class AVolume*,                                                        SpawningVolume);                                           // 0x00E8(0x0008)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0028 PADDING_00DE, struct FGuid,                                                          ProceduralGuid);                                           // 0x00F0(0x0010)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Foliage.ProceduralFoliageComponent");
		return ptr;
	}


};

// Class Foliage.ProceduralFoliageSpawner
// 0x0029 (FullSize[0x0051] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_00E1 - 0x0000 // Minimum to subtract -> (0000)
class UProceduralFoliageSpawner : public UObject
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_00E1, int,                                                                   RandomSeed);                                               // 0x0028(0x0004)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0004 PADDING_00E1, float,                                                                 TileSize);                                                 // 0x002C(0x0004)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0008 PADDING_00E1, int,                                                                   NumUniqueTiles);                                           // 0x0030(0x0004)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x000C PADDING_00E1, float,                                                                 MinimumQuadTreeSize);                                      // 0x0034(0x0004)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0018 PADDING_00E1, TArray<struct FFoliageTypeObject>,                                     FoliageTypes);                                             // 0x0040(0x0010)  (Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0028 PADDING_00E1, bool,                                                                  bNeedsSimulation);                                         // 0x0050(0x0001)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Foliage.ProceduralFoliageSpawner");
		return ptr;
	}


	void Simulate(int NumSteps);
};

// Class Foliage.ProceduralFoliageTile
// 0x00B8 (FullSize[0x00E0] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_00E2 - 0x0000 // Minimum to subtract -> (0000)
class UProceduralFoliageTile : public UObject
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_00E2, class UProceduralFoliageSpawner*,                                      FoliageSpawner);                                           // 0x0028(0x0008)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x00A8 PADDING_00E2, TArray<struct FProceduralFoliageInstance>,                             InstancesArray);                                           // 0x00D0(0x0010)  (ZeroConstructor, NativeAccessSpecifierPrivate)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Foliage.ProceduralFoliageTile");
		return ptr;
	}


};

// Class Foliage.ProceduralFoliageVolume
// 0x0008 (FullSize[0x0288] - InheritedSize[0x0280])
// LastOffsetWithSize(0x0280)
#define PADDING_00E4 - 0x0000 // Minimum to subtract -> (0000)
class AProceduralFoliageVolume : public AVolume
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_00E4, class UProceduralFoliageComponent*,                                    ProceduralComponent);                                      // 0x0280(0x0008)  (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Foliage.ProceduralFoliageVolume");
		return ptr;
	}


};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
