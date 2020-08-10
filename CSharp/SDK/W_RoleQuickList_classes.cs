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

// WidgetBlueprintGeneratedClass W_RoleQuickList.W_RoleQuickList_C
// 0x0057 (0x0320 - 0x02C9)
public class UW_RoleQuickList_C : UW_RoleList_C
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x02D0, false); // 0x02D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UBorder>                           _offBorder_Locked                                              = new ExternalOffset<UBorder>(0x02D8, true);                   // 0x02D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UW_RoleQuickGroup_C>               _offFireSupport                                                = new ExternalOffset<UW_RoleQuickGroup_C>(0x02E0, true);       // 0x02E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offImage_spacer1                                              = new ExternalOffset<UImage>(0x02E8, true);                    // 0x02E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offImage_spacer2                                              = new ExternalOffset<UImage>(0x02F0, true);                    // 0x02F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offImage_spacer3                                              = new ExternalOffset<UImage>(0x02F8, true);                    // 0x02F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UW_RoleQuickGroup_C>               _offSpecialist                                                 = new ExternalOffset<UW_RoleQuickGroup_C>(0x0300, true);       // 0x0300(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UW_RoleQuickGroup_C>               _offStandard                                                   = new ExternalOffset<UW_RoleQuickGroup_C>(0x0308, true);       // 0x0308(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UW_RoleQuickGroup_C>               _offSupportCommand                                             = new ExternalOffset<UW_RoleQuickGroup_C>(0x0310, true);       // 0x0310(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offUnavailable                                                = new ExternalOffset<UTextBlock>(0x0318, true);                // 0x0318(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UBorder                                            Border_Locked                                                  => _offBorder_Locked.GetValue();
	public UW_RoleQuickGroup_C                                FireSupport                                                    => _offFireSupport.GetValue();
	public UImage                                             Image_spacer1                                                  => _offImage_spacer1.GetValue();
	public UImage                                             Image_spacer2                                                  => _offImage_spacer2.GetValue();
	public UImage                                             Image_spacer3                                                  => _offImage_spacer3.GetValue();
	public UW_RoleQuickGroup_C                                Specialist                                                     => _offSpecialist.GetValue();
	public UW_RoleQuickGroup_C                                Standard                                                       => _offStandard.GetValue();
	public UW_RoleQuickGroup_C                                SupportCommand                                                 => _offSupportCommand.GetValue();
	public UTextBlock                                         Unavailable                                                    => _offUnavailable.GetValue();
	#endregion


}


}