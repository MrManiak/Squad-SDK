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

// BlueprintGeneratedClass BP_RadialMenuModel.BP_RadialMenuModel_C
// 0x0030 (0x0058 - 0x0028)
public class UBP_RadialMenuModel_C : UObject
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0028, false); // 0x0028(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UClass>                            _offCenterButton                                               = new ExternalOffset<UClass>(0x0030, true);                    // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<TArray<UClass>>                    _offOuterRing                                                  = new ExternalOffset<TArray<UClass>>(0x0038, false);           // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	private ExternalOffset<TArray<UClass>>                    _offSub_Models                                                 = new ExternalOffset<TArray<UClass>>(0x0048, false);           // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UClass                                             CenterButton                                                   => _offCenterButton.GetValue();
	public TArray<UClass>                                     OuterRing                                                      => _offOuterRing.GetValue();
	public TArray<UClass>                                     Sub_Models                                                     => _offSub_Models.GetValue();
	#endregion


}


}