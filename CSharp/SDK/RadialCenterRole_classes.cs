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

// WidgetBlueprintGeneratedClass RadialCenterRole.RadialCenterRole_C
// 0x00C0 (0x04E0 - 0x0420)
public class URadialCenterRole_C : USQRadialCenterRoleButton
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0420, false); // 0x0420(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UBP_Role_Inventory_C>              _offBP_Role_Inventory_5                                        = new ExternalOffset<UBP_Role_Inventory_C>(0x0428, true);      // 0x0428(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offImage_2                                                    = new ExternalOffset<UImage>(0x0430, true);                    // 0x0430(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offLowerLayerImage                                            = new ExternalOffset<UImage>(0x0438, true);                    // 0x0438(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offLowestCircleImage                                          = new ExternalOffset<UImage>(0x0440, true);                    // 0x0440(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<URadialCenterText_C>               _offRadialCenterText                                           = new ExternalOffset<URadialCenterText_C>(0x0448, true);       // 0x0448(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offRoleAmmoCostText                                           = new ExternalOffset<UTextBlock>(0x0450, true);                // 0x0450(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offRoleImage                                                  = new ExternalOffset<UImage>(0x0458, true);                    // 0x0458(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offRoleNameText                                               = new ExternalOffset<UTextBlock>(0x0460, true);                // 0x0460(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UOverlay>                          _offRoleWidgetOverlay                                          = new ExternalOffset<UOverlay>(0x0468, true);                  // 0x0468(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offUnavailableImage                                           = new ExternalOffset<UImage>(0x0470, true);                    // 0x0470(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offUnavailableTextImage                                       = new ExternalOffset<UImage>(0x0478, true);                    // 0x0478(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offUpperLayerImage                                            = new ExternalOffset<UImage>(0x0480, true);                    // 0x0480(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<FText>                             _offMissingBindingText                                         = new ExternalOffset<FText>(0x0488, false);                    // 0x0488(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	private ExternalOffset<UBaseRadialMenu_C>                 _offOwnerRadialMenu                                            = new ExternalOffset<UBaseRadialMenu_C>(0x04A0, true);         // 0x04A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<USQRadialButton>                   _offLastHoverWidget                                            = new ExternalOffset<USQRadialButton>(0x04A8, true);           // 0x04A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FLinearColor>                      _offUnavailableColor                                           = new ExternalOffset<FLinearColor>(0x04B0, false);             // 0x04B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FLinearColor>                      _offAvailableColor                                             = new ExternalOffset<FLinearColor>(0x04C0, false);             // 0x04C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offCachedAmmoCost                                             = new ExternalOffset<float>(0x04D0);                           // 0x04D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<USQRoleSettings>                   _offCachedAmmoCostRole                                         = new ExternalOffset<USQRoleSettings>(0x04D8, true);           // 0x04D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UBP_Role_Inventory_C                               BP_Role_Inventory_5                                            => _offBP_Role_Inventory_5.GetValue();
	public UImage                                             Image_2                                                        => _offImage_2.GetValue();
	public UImage                                             LowerLayerImage                                                => _offLowerLayerImage.GetValue();
	public UImage                                             LowestCircleImage                                              => _offLowestCircleImage.GetValue();
	public URadialCenterText_C                                RadialCenterText                                               => _offRadialCenterText.GetValue();
	public UTextBlock                                         RoleAmmoCostText                                               => _offRoleAmmoCostText.GetValue();
	public UImage                                             RoleImage                                                      => _offRoleImage.GetValue();
	public UTextBlock                                         RoleNameText                                                   => _offRoleNameText.GetValue();
	public UOverlay                                           RoleWidgetOverlay                                              => _offRoleWidgetOverlay.GetValue();
	public UImage                                             UnavailableImage                                               => _offUnavailableImage.GetValue();
	public UImage                                             UnavailableTextImage                                           => _offUnavailableTextImage.GetValue();
	public UImage                                             UpperLayerImage                                                => _offUpperLayerImage.GetValue();
	public FText                                              MissingBindingText                                             => _offMissingBindingText.GetValue();
	public UBaseRadialMenu_C                                  OwnerRadialMenu                                                => _offOwnerRadialMenu.GetValue();
	public USQRadialButton                                    LastHoverWidget                                                => _offLastHoverWidget.GetValue();
	public FLinearColor                                       UnavailableColor                                               => _offUnavailableColor.GetValue();
	public FLinearColor                                       AvailableColor                                                 => _offAvailableColor.GetValue();
	public float                                              CachedAmmoCost                                                 => _offCachedAmmoCost.GetValue();
	public USQRoleSettings                                    CachedAmmoCostRole                                             => _offCachedAmmoCostRole.GetValue();
	#endregion


}


}