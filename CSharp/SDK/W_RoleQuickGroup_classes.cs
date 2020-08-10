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

// WidgetBlueprintGeneratedClass W_RoleQuickGroup.W_RoleQuickGroup_C
// 0x0020 (0x02E0 - 0x02C0)
public class UW_RoleQuickGroup_C : UW_RoleGroup_C
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x02C0, false); // 0x02C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UImage>                            _offImage_Group                                                = new ExternalOffset<UImage>(0x02C8, true);                    // 0x02C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UWrapBox>                          _offWrapBox_Roles                                              = new ExternalOffset<UWrapBox>(0x02D0, true);                  // 0x02D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTexture2D>                        _offGroup_Icon                                                 = new ExternalOffset<UTexture2D>(0x02D8, true);                // 0x02D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UImage                                             Image_Group                                                    => _offImage_Group.GetValue();
	public UWrapBox                                           WrapBox_Roles                                                  => _offWrapBox_Roles.GetValue();
	public UTexture2D                                         Group_Icon                                                     => _offGroup_Icon.GetValue();
	#endregion


}


}