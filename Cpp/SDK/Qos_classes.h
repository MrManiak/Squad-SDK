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

// Class Qos.QosBeaconClient
// 0x003F (FullSize[0x02C8] - InheritedSize[0x0289])
// LastOffsetWithSize(0x0289)
class AQosBeaconClient : public AOnlineBeaconClient
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Qos.QosBeaconClient");
		return ptr;
	}


	void ServerQosRequest(const struct FString& InSessionId);
	void ClientQosResponse(EQosResponseType response);
};

// Class Qos.QosBeaconHost
// 0x0000 (FullSize[0x0270] - InheritedSize[0x0270])
// LastOffsetWithSize(0x0270)
class AQosBeaconHost : public AOnlineBeaconHostObject
{
public:
	//union
	//{
	//};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Qos.QosBeaconHost");
		return ptr;
	}


};

// Class Qos.QosEvaluator
// 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_037F - 0x0000 // Minimum to subtract -> (0020)
class UQosEvaluator : public UObject
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0020 PADDING_037F, bool,                                                                  bInProgress);                                              // 0x0048(0x0001)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0021 PADDING_037F, bool,                                                                  bCancelOperation);                                         // 0x0049(0x0001)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0028 PADDING_037F, TArray<struct FDatacenterQosInstance>,                                 Datacenters);                                              // 0x0050(0x0010)  (ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Qos.QosEvaluator");
		return ptr;
	}


};

// Class Qos.QosRegionManager
// 0x0078 (FullSize[0x00A0] - InheritedSize[0x0028])
// LastOffsetWithSize(0x0028)
#define PADDING_0380 - 0x0000 // Minimum to subtract -> (0000)
class UQosRegionManager : public UObject
{
public:
	union
	{
		DEFINE_MEMBER_000(0x0000 PADDING_0380, int,                                                                   NumTestsPerRegion);                                        // 0x0028(0x0004)  (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0004 PADDING_0380, float,                                                                 PingTimeout);                                              // 0x002C(0x0004)  (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0008 PADDING_0380, TArray<struct FQosRegionInfo>,                                         RegionDefinitions);                                        // 0x0030(0x0010)  (ZeroConstructor, Config, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0018 PADDING_0380, TArray<struct FQosDatacenterInfo>,                                     DatacenterDefinitions);                                    // 0x0040(0x0010)  (ZeroConstructor, Config, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0028 PADDING_0380, struct FDateTime,                                                      LastCheckTimestamp);                                       // 0x0050(0x0008)  (ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0030 PADDING_0380, class UQosEvaluator*,                                                  Evaluator);                                                // 0x0058(0x0008)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0038 PADDING_0380, EQosCompletionResult,                                                  QosEvalResult);                                            // 0x0060(0x0001)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0040 PADDING_0380, TArray<struct FRegionQosInstance>,                                     RegionOptions);                                            // 0x0068(0x0010)  (ZeroConstructor, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0050 PADDING_0380, struct FString,                                                        ForceRegionId);                                            // 0x0078(0x0010)  (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0060 PADDING_0380, bool,                                                                  bRegionForcedViaCommandline);                              // 0x0088(0x0001)  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
		DEFINE_MEMBER_NNN(0x0068 PADDING_0380, struct FString,                                                        SelectedRegionId);                                         // 0x0090(0x0010)  (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Qos.QosRegionManager");
		return ptr;
	}


};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
