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

// Class ClothingSystemRuntime.ClothingAssetCustomData
// 0x0000 (0x0028 - 0x0028)
public class UClothingAssetCustomData : UObject
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class ClothingSystemRuntime.ClothingAsset
// 0x0130 (0x0178 - 0x0048)
public class UClothingAsset : UClothingAssetBase
{
	#region Offsets
	private ExternalOffset<UPhysicsAsset>                     _offPhysicsAsset                                               = new ExternalOffset<UPhysicsAsset>(0x0048, true);             // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FClothConfig>                      _offClothConfig                                                = new ExternalOffset<FClothConfig>(0x0050, false);             // 0x0050(0x00D4) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FClothLODData>>             _offLODData                                                    = new ExternalOffset<TArray<FClothLODData>>(0x0128, false);    // 0x0128(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<int>>                       _offLodMap                                                     = new ExternalOffset<TArray<int>>(0x0138, false);              // 0x0138(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FName>>                     _offUsedBoneNames                                              = new ExternalOffset<TArray<FName>>(0x0148, false);            // 0x0148(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<int>>                       _offUsedBoneIndices                                            = new ExternalOffset<TArray<int>>(0x0158, false);              // 0x0158(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	private ExternalOffset<int>                               _offReferenceBoneIndex                                         = new ExternalOffset<int>(0x0168);                             // 0x0168(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UClothingAssetCustomData>          _offcustomData                                                 = new ExternalOffset<UClothingAssetCustomData>(0x0170, true);  // 0x0170(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public UPhysicsAsset                                      PhysicsAsset                                                   => _offPhysicsAsset.GetValue();
	public FClothConfig                                       ClothConfig                                                    => _offClothConfig.GetValue();
	public TArray<FClothLODData>                              LODData                                                        => _offLODData.GetValue();
	public TArray<int>                                        LodMap                                                         => _offLodMap.GetValue();
	public TArray<FName>                                      UsedBoneNames                                                  => _offUsedBoneNames.GetValue();
	public TArray<int>                                        UsedBoneIndices                                                => _offUsedBoneIndices.GetValue();
	public int                                                ReferenceBoneIndex                                             => _offReferenceBoneIndex.GetValue();
	public UClothingAssetCustomData                           customData                                                     => _offcustomData.GetValue();
	#endregion


}

// Class ClothingSystemRuntime.ClothingSimulationFactoryNv
// 0x0000 (0x0028 - 0x0028)
public class UClothingSimulationFactoryNv : UClothingSimulationFactory
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class ClothingSystemRuntime.ClothingSimulationInteractorNv
// 0x0008 (0x0030 - 0x0028)
public class UClothingSimulationInteractorNv : UClothingSimulationInteractor
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}


}