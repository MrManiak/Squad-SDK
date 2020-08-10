// Name: Sq, Version: b21

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace UFT
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_MarksmanAnimated.BP_MarksmanAnimated_C
// 0x0070 (0x02F0 - 0x0280)
public class ABP_MarksmanAnimated_C : ASkeletalMeshActor
{
	#region Offsets
	private ExternalOffset<UStaticMeshComponent>              _offStaticMesh2                                                = new ExternalOffset<UStaticMeshComponent>(0x02D0, true);      // 0x02D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UStaticMeshComponent>              _offStaticMesh1                                                = new ExternalOffset<UStaticMeshComponent>(0x02D8, true);      // 0x02D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UStaticMeshComponent>              _offStaticMesh                                                 = new ExternalOffset<UStaticMeshComponent>(0x02E0, true);      // 0x02E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<USkeletalMeshComponent>            _offSkeletalMesh                                               = new ExternalOffset<USkeletalMeshComponent>(0x02E8, true);    // 0x02E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public UStaticMeshComponent                               StaticMesh2                                                    => _offStaticMesh2.GetValue();
	public UStaticMeshComponent                               StaticMesh1                                                    => _offStaticMesh1.GetValue();
	public UStaticMeshComponent                               StaticMesh                                                     => _offStaticMesh.GetValue();
	public USkeletalMeshComponent                             SkeletalMesh                                                   => _offSkeletalMesh.GetValue();
	#endregion


}


}