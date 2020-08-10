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

// WidgetBlueprintGeneratedClass MainMenu_ExitButtons.MainMenu_ExitButtons_C
// 0x0088 (0x0268 - 0x01E0)
public class UMainMenu_ExitButtons_C : UUserWidget
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0230, false); // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UMainMenu_Button_C>                _offButtonEXIT                                                 = new ExternalOffset<UMainMenu_Button_C>(0x0238, true);        // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UBorder>                           _offHoverCheckArea                                             = new ExternalOffset<UBorder>(0x0240, true);                   // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offLine                                                       = new ExternalOffset<UImage>(0x0248, true);                    // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UMainMenu_Button_C>                _offMainMenu_Button_Development                                = new ExternalOffset<UMainMenu_Button_C>(0x0250, true);        // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offwas_hovered                                                = new ExternalOffset<byte/*(bool)*/>(0x0258);                  // 0x0258(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<UMainMenuScreen_C>                 _offREF_MainMenu                                               = new ExternalOffset<UMainMenuScreen_C>(0x0260, true);         // 0x0260(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UMainMenu_Button_C                                 ButtonEXIT                                                     => _offButtonEXIT.GetValue();
	public UBorder                                            HoverCheckArea                                                 => _offHoverCheckArea.GetValue();
	public UImage                                             Line                                                           => _offLine.GetValue();
	public UMainMenu_Button_C                                 MainMenu_Button_Development                                    => _offMainMenu_Button_Development.GetValue();
	public byte/*(bool)*/                                     was_hovered                                                    => _offwas_hovered.GetValue();
	public UMainMenuScreen_C                                  REF_MainMenu                                                   => _offREF_MainMenu.GetValue();
	#endregion


}


}