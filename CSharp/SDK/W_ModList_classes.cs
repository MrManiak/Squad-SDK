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

// WidgetBlueprintGeneratedClass W_ModList.W_ModList_C
// 0x00C0 (0x02A0 - 0x01E0)
public class UW_ModList_C : UUserWidget
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0230, false); // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UBorder>                           _offHoverCheckArea                                             = new ExternalOffset<UBorder>(0x0238, true);                   // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UBorder>                           _offMainBorder                                                 = new ExternalOffset<UBorder>(0x0240, true);                   // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTB_Whitelist                                               = new ExternalOffset<UTextBlock>(0x0248, true);                // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UW_ModTooltipItem_C>               _offW_ModTooltipItem                                           = new ExternalOffset<UW_ModTooltipItem_C>(0x0250, true);       // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UW_ModTooltipItem_C>               _offW_ModTooltipItem_C_5                                       = new ExternalOffset<UW_ModTooltipItem_C>(0x0258, true);       // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UW_ModTooltipItem_C>               _offW_ModTooltipItem_C_6                                       = new ExternalOffset<UW_ModTooltipItem_C>(0x0260, true);       // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UW_ModTooltipItem_C>               _offW_ModTooltipItem_C_7                                       = new ExternalOffset<UW_ModTooltipItem_C>(0x0268, true);       // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UW_ModTooltipItem_C>               _offW_ModTooltipItem_C_8                                       = new ExternalOffset<UW_ModTooltipItem_C>(0x0270, true);       // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UW_ModTooltipItem_C>               _offW_ModTooltipItem_C_9                                       = new ExternalOffset<UW_ModTooltipItem_C>(0x0278, true);       // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UW_ModTooltipItem_C>               _offW_ModTooltipItem_C_10                                      = new ExternalOffset<UW_ModTooltipItem_C>(0x0280, true);       // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UW_ModTooltipItem_C>               _offW_ModTooltipItem_C_11                                      = new ExternalOffset<UW_ModTooltipItem_C>(0x0288, true);       // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UWrapBox>                          _offWrapBox_1                                                  = new ExternalOffset<UWrapBox>(0x0290, true);                  // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USQServerListItemWidget>           _offServerListItem                                             = new ExternalOffset<USQServerListItemWidget>(0x0298, true);   // 0x0298(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UBorder                                            HoverCheckArea                                                 => _offHoverCheckArea.GetValue();
	public UBorder                                            MainBorder                                                     => _offMainBorder.GetValue();
	public UTextBlock                                         TB_Whitelist                                                   => _offTB_Whitelist.GetValue();
	public UW_ModTooltipItem_C                                W_ModTooltipItem                                               => _offW_ModTooltipItem.GetValue();
	public UW_ModTooltipItem_C                                W_ModTooltipItem_C_5                                           => _offW_ModTooltipItem_C_5.GetValue();
	public UW_ModTooltipItem_C                                W_ModTooltipItem_C_6                                           => _offW_ModTooltipItem_C_6.GetValue();
	public UW_ModTooltipItem_C                                W_ModTooltipItem_C_7                                           => _offW_ModTooltipItem_C_7.GetValue();
	public UW_ModTooltipItem_C                                W_ModTooltipItem_C_8                                           => _offW_ModTooltipItem_C_8.GetValue();
	public UW_ModTooltipItem_C                                W_ModTooltipItem_C_9                                           => _offW_ModTooltipItem_C_9.GetValue();
	public UW_ModTooltipItem_C                                W_ModTooltipItem_C_10                                          => _offW_ModTooltipItem_C_10.GetValue();
	public UW_ModTooltipItem_C                                W_ModTooltipItem_C_11                                          => _offW_ModTooltipItem_C_11.GetValue();
	public UWrapBox                                           WrapBox_1                                                      => _offWrapBox_1.GetValue();
	public USQServerListItemWidget                            ServerListItem                                                 => _offServerListItem.GetValue();
	#endregion


}


}