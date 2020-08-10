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

// Class ClothingSystemRuntimeInterface.ClothingAssetBase
// 0x0020 (0x0048 - 0x0028)
public class UClothingAssetBase : UObject
{
	#region Offsets
	private ExternalOffset<FString>                           _offImportedFilePath                                           = new ExternalOffset<FString>(0x0028, false);                  // 0x0028(0x0010) (Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FGuid>                             _offAssetGuid                                                  = new ExternalOffset<FGuid>(0x0038, false);                    // 0x0038(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	#endregion

	#region Props
	public FString                                            ImportedFilePath                                               => _offImportedFilePath.GetValue();
	public FGuid                                              AssetGuid                                                      => _offAssetGuid.GetValue();
	#endregion


}

// Class ClothingSystemRuntimeInterface.ClothingSimulationFactory
// 0x0000 (0x0028 - 0x0028)
public class UClothingSimulationFactory : UObject
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class ClothingSystemRuntimeInterface.ClothingSimulationInteractor
// 0x0000 (0x0028 - 0x0028)
public class UClothingSimulationInteractor : UObject
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}


}