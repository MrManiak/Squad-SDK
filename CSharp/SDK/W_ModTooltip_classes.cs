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

// WidgetBlueprintGeneratedClass W_ModTooltip.W_ModTooltip_C
// 0x00D8 (0x02B8 - 0x01E0)
public class UW_ModTooltip_C : UUserWidget
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0230, false); // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<USizeBox>                          _offHoverTest                                                  = new ExternalOffset<USizeBox>(0x0238, true);                  // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offLine                                                       = new ExternalOffset<UImage>(0x0240, true);                    // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTB_ServerName                                              = new ExternalOffset<UTextBlock>(0x0248, true);                // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTB_Whitelist                                               = new ExternalOffset<UTextBlock>(0x0250, true);                // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UW_ModTooltipItem_C>               _offW_ModTooltipItem                                           = new ExternalOffset<UW_ModTooltipItem_C>(0x0258, true);       // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UW_ModTooltipItem_C>               _offW_ModTooltipItem_C_5                                       = new ExternalOffset<UW_ModTooltipItem_C>(0x0260, true);       // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UW_ModTooltipItem_C>               _offW_ModTooltipItem_C_6                                       = new ExternalOffset<UW_ModTooltipItem_C>(0x0268, true);       // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UW_ModTooltipItem_C>               _offW_ModTooltipItem_C_7                                       = new ExternalOffset<UW_ModTooltipItem_C>(0x0270, true);       // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UW_ModTooltipItem_C>               _offW_ModTooltipItem_C_8                                       = new ExternalOffset<UW_ModTooltipItem_C>(0x0278, true);       // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UW_ModTooltipItem_C>               _offW_ModTooltipItem_C_16                                      = new ExternalOffset<UW_ModTooltipItem_C>(0x0280, true);       // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UWrapBox>                          _offWrapBox_1                                                  = new ExternalOffset<UWrapBox>(0x0288, true);                  // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offwas_hovered                                                = new ExternalOffset<byte/*(bool)*/>(0x0290);                  // 0x0290(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<FScriptMulticastDelegate>          _offRemoved                                                    = new ExternalOffset<FScriptMulticastDelegate>(0x0298, false); // 0x0298(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	private ExternalOffset<float>                             _offMouse_Offset_Y                                             = new ExternalOffset<float>(0x02A8);                           // 0x02A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	private ExternalOffset<USQServerListItemWidget>           _offServerListItem                                             = new ExternalOffset<USQServerListItemWidget>(0x02B0, true);   // 0x02B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public USizeBox                                           HoverTest                                                      => _offHoverTest.GetValue();
	public UImage                                             Line                                                           => _offLine.GetValue();
	public UTextBlock                                         TB_ServerName                                                  => _offTB_ServerName.GetValue();
	public UTextBlock                                         TB_Whitelist                                                   => _offTB_Whitelist.GetValue();
	public UW_ModTooltipItem_C                                W_ModTooltipItem                                               => _offW_ModTooltipItem.GetValue();
	public UW_ModTooltipItem_C                                W_ModTooltipItem_C_5                                           => _offW_ModTooltipItem_C_5.GetValue();
	public UW_ModTooltipItem_C                                W_ModTooltipItem_C_6                                           => _offW_ModTooltipItem_C_6.GetValue();
	public UW_ModTooltipItem_C                                W_ModTooltipItem_C_7                                           => _offW_ModTooltipItem_C_7.GetValue();
	public UW_ModTooltipItem_C                                W_ModTooltipItem_C_8                                           => _offW_ModTooltipItem_C_8.GetValue();
	public UW_ModTooltipItem_C                                W_ModTooltipItem_C_16                                          => _offW_ModTooltipItem_C_16.GetValue();
	public UWrapBox                                           WrapBox_1                                                      => _offWrapBox_1.GetValue();
	public byte/*(bool)*/                                     was_hovered                                                    => _offwas_hovered.GetValue();
	public FScriptMulticastDelegate                           Removed                                                        => _offRemoved.GetValue();
	public float                                              Mouse_Offset_Y                                                 => _offMouse_Offset_Y.GetValue();
	public USQServerListItemWidget                            ServerListItem                                                 => _offServerListItem.GetValue();
	#endregion


}


}