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

// WidgetBlueprintGeneratedClass W_BackpackItem.W_BackpackItem_C
// 0x00D0 (0x02B0 - 0x01E0)
public class UW_BackpackItem_C : UUserWidget
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0230, false); // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UImage>                            _offBottom                                                     = new ExternalOffset<UImage>(0x0238, true);                    // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UButton>                           _offButton_1                                                   = new ExternalOffset<UButton>(0x0240, true);                   // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offIcon                                                       = new ExternalOffset<UImage>(0x0248, true);                    // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offLeft                                                       = new ExternalOffset<UImage>(0x0250, true);                    // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offRight                                                      = new ExternalOffset<UImage>(0x0258, true);                    // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTB_Amount                                                  = new ExternalOffset<UTextBlock>(0x0260, true);                // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offTop                                                        = new ExternalOffset<UImage>(0x0268, true);                    // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<ASQEquipableItem>                  _offItem                                                       = new ExternalOffset<ASQEquipableItem>(0x0270, true);          // 0x0270(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offShow_Top                                                   = new ExternalOffset<byte/*(bool)*/>(0x0278);                  // 0x0278(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	private ExternalOffset<int>                               _offColumn_ID                                                  = new ExternalOffset<int>(0x027C);                             // 0x027C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offShow_Bottom                                                = new ExternalOffset<byte/*(bool)*/>(0x0280);                  // 0x0280(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	private ExternalOffset<FScriptMulticastDelegate>          _offHovered                                                    = new ExternalOffset<FScriptMulticastDelegate>(0x0288, false); // 0x0288(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	private ExternalOffset<FSQInventoryData>                  _offData                                                       = new ExternalOffset<FSQInventoryData>(0x0298, false);         // 0x0298(0x0018) (Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UImage                                             Bottom                                                         => _offBottom.GetValue();
	public UButton                                            Button_1                                                       => _offButton_1.GetValue();
	public UImage                                             Icon                                                           => _offIcon.GetValue();
	public UImage                                             Left                                                           => _offLeft.GetValue();
	public UImage                                             Right                                                          => _offRight.GetValue();
	public UTextBlock                                         TB_Amount                                                      => _offTB_Amount.GetValue();
	public UImage                                             Top                                                            => _offTop.GetValue();
	public ASQEquipableItem                                   Item                                                           => _offItem.GetValue();
	public byte/*(bool)*/                                     Show_Top                                                       => _offShow_Top.GetValue();
	public int                                                Column_ID                                                      => _offColumn_ID.GetValue();
	public byte/*(bool)*/                                     Show_Bottom                                                    => _offShow_Bottom.GetValue();
	public FScriptMulticastDelegate                           Hovered                                                        => _offHovered.GetValue();
	public FSQInventoryData                                   Data                                                           => _offData.GetValue();
	#endregion


}


}