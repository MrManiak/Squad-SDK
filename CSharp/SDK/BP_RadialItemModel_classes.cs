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

// BlueprintGeneratedClass BP_RadialItemModel.BP_RadialItemModel_C
// 0x0068 (0x0090 - 0x0028)
public class UBP_RadialItemModel_C : UObject
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0028, false); // 0x0028(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<FText>                             _offName                                                       = new ExternalOffset<FText>(0x0030, false);                    // 0x0030(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	private ExternalOffset<UTexture2D>                        _offIcon                                                       = new ExternalOffset<UTexture2D>(0x0048, true);                // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FText>                             _offdetails                                                    = new ExternalOffset<FText>(0x0050, false);                    // 0x0050(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	private ExternalOffset<byte/*(bool)*/>                    _offShowsToolTip                                               = new ExternalOffset<byte/*(bool)*/>(0x0068);                  // 0x0068(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	private ExternalOffset<FName>                             _offToolTipKey0                                                = new ExternalOffset<FName>(0x006C, false);                    // 0x006C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FName>                             _offToolTipKey1                                                = new ExternalOffset<FName>(0x0074, false);                    // 0x0074(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FName>                             _offToolTipKey2                                                = new ExternalOffset<FName>(0x007C, false);                    // 0x007C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<ESQRadialWidgetSizeEnum>           _offWidgetSize                                                 = new ExternalOffset<ESQRadialWidgetSizeEnum>(0x0084, false);  // 0x0084(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offUnavailableInVehicle                                       = new ExternalOffset<byte/*(bool)*/>(0x0085);                  // 0x0085(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<UClass>                            _offWidgetCreatorMethod                                        = new ExternalOffset<UClass>(0x0088, true);                    // 0x0088(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public FText                                              Name                                                           => _offName.GetValue();
	public UTexture2D                                         Icon                                                           => _offIcon.GetValue();
	public FText                                              details                                                        => _offdetails.GetValue();
	public byte/*(bool)*/                                     ShowsToolTip                                                   => _offShowsToolTip.GetValue();
	public FName                                              ToolTipKey0                                                    => _offToolTipKey0.GetValue();
	public FName                                              ToolTipKey1                                                    => _offToolTipKey1.GetValue();
	public FName                                              ToolTipKey2                                                    => _offToolTipKey2.GetValue();
	public ESQRadialWidgetSizeEnum                            WidgetSize                                                     => _offWidgetSize.GetValue();
	public byte/*(bool)*/                                     UnavailableInVehicle                                           => _offUnavailableInVehicle.GetValue();
	public UClass                                             WidgetCreatorMethod                                            => _offWidgetCreatorMethod.GetValue();
	#endregion


}


}