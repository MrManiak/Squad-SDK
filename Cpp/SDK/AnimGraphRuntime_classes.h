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

// Class AnimGraphRuntime.AnimCustomInstance
// 0x00F0 (FullSize[0x0270] - InheritedSize[0x0180])
// LastOffsetWithSize(0x0180)
class UAnimCustomInstance : public UAnimInstance
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AnimGraphRuntime.AnimCustomInstance");
		return ptr;
	}


};

// Class AnimGraphRuntime.AnimNotify_PlayMontageNotify
// 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_09D0 - 0x0000 // Minimum to subtract -> (0010)
class UAnimNotify_PlayMontageNotify : public UAnimNotify
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0010 PADDING_09D0, struct FName,                                                          NotifyName);                                               // 0x0038(0x0008)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AnimGraphRuntime.AnimNotify_PlayMontageNotify");
		return ptr;
	}


};

// Class AnimGraphRuntime.AnimNotify_PlayMontageNotifyWindow
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_09D1 - 0x0000 // Minimum to subtract -> (0008)
class UAnimNotify_PlayMontageNotifyWindow : public UAnimNotifyState
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0008 PADDING_09D1, struct FName,                                                          NotifyName);                                               // 0x0030(0x0008)  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AnimGraphRuntime.AnimNotify_PlayMontageNotifyWindow");
		return ptr;
	}


};

// Class AnimGraphRuntime.AnimSequencerInstance
// 0x0000 (FullSize[0x0270] - InheritedSize[0x0270])
// LastOffsetWithSize(0x0180)
class UAnimSequencerInstance : public UAnimCustomInstance
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AnimGraphRuntime.AnimSequencerInstance");
		return ptr;
	}


};

// Class AnimGraphRuntime.KismetAnimationLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
class UKismetAnimationLibrary : public UBlueprintFunctionLibrary
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AnimGraphRuntime.KismetAnimationLibrary");
		return ptr;
	}


	static void STATIC_K2_TwoBoneIK(const struct FVector& RootPos, const struct FVector& JointPos, const struct FVector& EndPos, const struct FVector& JointTarget, const struct FVector& Effector, struct FVector* OutJointPos, struct FVector* OutEndPos, bool bAllowStretching, float StartStretchRatio, float MaxStretchScale);
	static void STATIC_K2_StartProfilingTimer();
	static struct FVector STATIC_K2_MakePerlinNoiseVectorAndRemap(float X, float Y, float Z, float RangeOutMinX, float RangeOutMaxX, float RangeOutMinY, float RangeOutMaxY, float RangeOutMinZ, float RangeOutMaxZ);
	static float STATIC_K2_MakePerlinNoiseAndRemap(float Value, float RangeOutMin, float RangeOutMax);
	static struct FTransform STATIC_K2_LookAt(const struct FTransform& CurrentTransform, const struct FVector& TargetPosition, const struct FVector& LookAtVector, bool bUseUpVector, const struct FVector& UpVector, float ClampConeInDegree);
	static float STATIC_K2_EndProfilingTimer(bool bLog, const struct FString& LogPrefix);
	static float STATIC_K2_DistanceBetweenTwoSocketsAndMapRange(class USkeletalMeshComponent* Component, const struct FName& SocketOrBoneNameA, TEnumAsByte<ERelativeTransformSpace> SocketSpaceA, const struct FName& SocketOrBoneNameB, TEnumAsByte<ERelativeTransformSpace> SocketSpaceB, bool bRemapRange, float InRangeMin, float InRangeMax, float OutRangeMin, float OutRangeMax);
	static struct FVector STATIC_K2_DirectionBetweenSockets(class USkeletalMeshComponent* Component, const struct FName& SocketOrBoneNameFrom, const struct FName& SocketOrBoneNameTo);
	static float STATIC_K2_CalculateVelocityFromSockets(float DeltaSeconds, class USkeletalMeshComponent* Component, const struct FName& SocketOrBoneName, const struct FName& ReferenceSocketOrBone, TEnumAsByte<ERelativeTransformSpace> SocketSpace, const struct FVector& OffsetInBoneSpace, struct FPositionHistory* History, int NumberOfSamples, float VelocityMin, float VelocityMax, EEasingFuncType EasingType, const struct FRuntimeFloatCurve& CustomCurve);
	static float STATIC_K2_CalculateVelocityFromPositionHistory(float DeltaSeconds, const struct FVector& Position, struct FPositionHistory* History, int NumberOfSamples, float VelocityMin, float VelocityMax);
};

// Class AnimGraphRuntime.PlayMontageCallbackProxy
// 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_09D4 - 0x0000 // Minimum to subtract -> (0000)
class UPlayMontageCallbackProxy : public UObject
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_09D4, struct FScriptMulticastDelegate,                                       OnCompleted);                                              // 0x0028(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0010 PADDING_09D4, struct FScriptMulticastDelegate,                                       OnBlendOut);                                               // 0x0038(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0020 PADDING_09D4, struct FScriptMulticastDelegate,                                       OnInterrupted);                                            // 0x0048(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0030 PADDING_09D4, struct FScriptMulticastDelegate,                                       OnNotifyBegin);                                            // 0x0058(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
		DEFINE_MEMBER_NNN(0x0040 PADDING_09D4, struct FScriptMulticastDelegate,                                       OnNotifyEnd);                                              // 0x0068(0x0010)  (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AnimGraphRuntime.PlayMontageCallbackProxy");
		return ptr;
	}


	void OnNotifyEndReceived(const struct FName& NotifyName, const struct FBranchingPointNotifyPayload& BranchingPointNotifyPayload);
	void OnNotifyBeginReceived(const struct FName& NotifyName, const struct FBranchingPointNotifyPayload& BranchingPointNotifyPayload);
	void OnMontageEnded(class UAnimMontage* Montage, bool bInterrupted);
	void OnMontageBlendingOut(class UAnimMontage* Montage, bool bInterrupted);
	static class UPlayMontageCallbackProxy* STATIC_CreateProxyObjectForPlayMontage(class USkeletalMeshComponent* InSkeletalMeshComponent, class UAnimMontage* MontageToPlay, float PlayRate, float StartingPosition, const struct FName& StartingSection);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
