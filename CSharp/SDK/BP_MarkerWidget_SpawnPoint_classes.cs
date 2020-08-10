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

// WidgetBlueprintGeneratedClass BP_MarkerWidget_SpawnPoint.BP_MarkerWidget_SpawnPoint_C
// 0x0031 (0x0281 - 0x0250)
public class UBP_MarkerWidget_SpawnPoint_C : USQMapIconWidget
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0250, false); // 0x0250(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UWidgetAnimation>                  _offSelected_Anim                                              = new ExternalOffset<UWidgetAnimation>(0x0258, true);          // 0x0258(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offSpawnBack_IMG                                              = new ExternalOffset<UImage>(0x0260, true);                    // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offSpawnFront_IMG                                             = new ExternalOffset<UImage>(0x0268, true);                    // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTexture2D>                        _offImage_Selected                                             = new ExternalOffset<UTexture2D>(0x0270, true);                // 0x0270(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UTexture2D>                        _offImage_Deselected                                           = new ExternalOffset<UTexture2D>(0x0278, true);                // 0x0278(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offbIsSelected                                                = new ExternalOffset<byte/*(bool)*/>(0x0280);                  // 0x0280(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UWidgetAnimation                                   Selected_Anim                                                  => _offSelected_Anim.GetValue();
	public UImage                                             SpawnBack_IMG                                                  => _offSpawnBack_IMG.GetValue();
	public UImage                                             SpawnFront_IMG                                                 => _offSpawnFront_IMG.GetValue();
	public UTexture2D                                         Image_Selected                                                 => _offImage_Selected.GetValue();
	public UTexture2D                                         Image_Deselected                                               => _offImage_Deselected.GetValue();
	public byte/*(bool)*/                                     bIsSelected                                                    => _offbIsSelected.GetValue();
	#endregion


}


}