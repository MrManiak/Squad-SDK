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

// BlueprintGeneratedClass Tracks_Abrams_Left.Tracks_Abrams_Left_C
// 0x00B8 (FullSize[0x0340] - InheritedSize[0x0288])
// LastOffsetWithSize(0x0288)
#define PADDING_049C - 0x0000 // Minimum to subtract -> (0018)
class ATracks_Abrams_Left_C : public ASQLastingEffect
{
public:
	union
	{
		DEFINE_MEMBER_NNN(0x0018 PADDING_049C, struct FPointerToUberGraphFrame,                                       UberGraphFrame);                                           // 0x02A0(0x0008)  (ZeroConstructor, Transient, DuplicateTransient)
		DEFINE_MEMBER_NNN(0x0020 PADDING_049C, class UParticleSystemComponent*,                                       BackDebris);                                               // 0x02A8(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0028 PADDING_049C, class UParticleSystemComponent*,                                       FrontDebris);                                              // 0x02B0(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0030 PADDING_049C, class UParticleSystemComponent*,                                       PanelFx);                                                  // 0x02B8(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0038 PADDING_049C, class URadialForceComponent*,                                          RadialForce1);                                             // 0x02C0(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0040 PADDING_049C, class UStaticMeshComponent*,                                           StaticMesh3);                                              // 0x02C8(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0048 PADDING_049C, class UStaticMeshComponent*,                                           StaticMesh2);                                              // 0x02D0(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0050 PADDING_049C, class UStaticMeshComponent*,                                           StaticMesh1);                                              // 0x02D8(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0058 PADDING_049C, class UStaticMeshComponent*,                                           StaticMesh);                                               // 0x02E0(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0060 PADDING_049C, class URadialForceComponent*,                                          RadialForce);                                              // 0x02E8(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0068 PADDING_049C, class UStaticMeshComponent*,                                           Piece10);                                                  // 0x02F0(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0070 PADDING_049C, class UStaticMeshComponent*,                                           Piece9);                                                   // 0x02F8(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0078 PADDING_049C, class UStaticMeshComponent*,                                           Piece8);                                                   // 0x0300(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0080 PADDING_049C, class UStaticMeshComponent*,                                           Piece7);                                                   // 0x0308(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0088 PADDING_049C, class UStaticMeshComponent*,                                           Piece6);                                                   // 0x0310(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0090 PADDING_049C, class UStaticMeshComponent*,                                           Piece5);                                                   // 0x0318(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x0098 PADDING_049C, class UStaticMeshComponent*,                                           Piece4);                                                   // 0x0320(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00A0 PADDING_049C, class UStaticMeshComponent*,                                           Piece3);                                                   // 0x0328(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00A8 PADDING_049C, class UStaticMeshComponent*,                                           Piece2);                                                   // 0x0330(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
		DEFINE_MEMBER_NNN(0x00B0 PADDING_049C, class UStaticMeshComponent*,                                           Piece1);                                                   // 0x0338(0x0008)  (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	};

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Tracks_Abrams_Left.Tracks_Abrams_Left_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void ExecuteUbergraph_Tracks_Abrams_Left(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
