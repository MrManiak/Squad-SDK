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

// WidgetBlueprintGeneratedClass W_GridHeader.W_GridHeader_C
// 0x00B8 (0x0298 - 0x01E0)
public class UW_GridHeader_C : UUserWidget
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0230, false); // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UGridPanel>                        _offGridPanel_Main                                             = new ExternalOffset<UGridPanel>(0x0238, true);                // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<TEnumAsByte<E_HeaderDirection>>    _offDraw_Direction                                             = new ExternalOffset<TEnumAsByte<E_HeaderDirection>>(0x0240, false); // 0x0240(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	private ExternalOffset<TEnumAsByte<E_HeaderDirection>>    _offBuild_Direction                                            = new ExternalOffset<TEnumAsByte<E_HeaderDirection>>(0x0241, false); // 0x0241(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	private ExternalOffset<TArray<UClass>>                    _offButtons                                                    = new ExternalOffset<TArray<UClass>>(0x0248, false);           // 0x0248(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	private ExternalOffset<UTexture2D>                        _offHeader_Icon                                                = new ExternalOffset<UTexture2D>(0x0258, true);                // 0x0258(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FLinearColor>                      _offIcon_Color                                                 = new ExternalOffset<FLinearColor>(0x0260, false);             // 0x0260(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<TArray<UW_GridButton_C>>           _offMy_Buttons                                                 = new ExternalOffset<TArray<UW_GridButton_C>>(0x0270, false);  // 0x0270(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference)
	private ExternalOffset<byte/*(bool)*/>                    _offButtons_Visible                                            = new ExternalOffset<byte/*(bool)*/>(0x0280);                  // 0x0280(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<FVector2D>                         _offScreen_Position                                            = new ExternalOffset<FVector2D>(0x0284, false);                // 0x0284(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	private ExternalOffset<UW_GridMenu_C>                     _offGrid_Menu                                                  = new ExternalOffset<UW_GridMenu_C>(0x0290, true);             // 0x0290(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UGridPanel                                         GridPanel_Main                                                 => _offGridPanel_Main.GetValue();
	public TEnumAsByte<E_HeaderDirection>                     Draw_Direction                                                 => _offDraw_Direction.GetValue();
	public TEnumAsByte<E_HeaderDirection>                     Build_Direction                                                => _offBuild_Direction.GetValue();
	public TArray<UClass>                                     Buttons                                                        => _offButtons.GetValue();
	public UTexture2D                                         Header_Icon                                                    => _offHeader_Icon.GetValue();
	public FLinearColor                                       Icon_Color                                                     => _offIcon_Color.GetValue();
	public TArray<UW_GridButton_C>                            My_Buttons                                                     => _offMy_Buttons.GetValue();
	public byte/*(bool)*/                                     Buttons_Visible                                                => _offButtons_Visible.GetValue();
	public FVector2D                                          Screen_Position                                                => _offScreen_Position.GetValue();
	public UW_GridMenu_C                                      Grid_Menu                                                      => _offGrid_Menu.GetValue();
	#endregion


}


}