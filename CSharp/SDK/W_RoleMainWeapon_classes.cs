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

// WidgetBlueprintGeneratedClass W_RoleMainWeapon.W_RoleMainWeapon_C
// 0x00B1 (0x0291 - 0x01E0)
public class UW_RoleMainWeapon_C : UUserWidget
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0230, false); // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UButton>                           _offButton_Main                                                = new ExternalOffset<UButton>(0x0238, true);                   // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offImage_MainWeapon                                           = new ExternalOffset<UImage>(0x0240, true);                    // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offName_Primary                                               = new ExternalOffset<UTextBlock>(0x0248, true);                // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTB_Amount_Primary                                          = new ExternalOffset<UTextBlock>(0x0250, true);                // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<USQRoleSettings>                   _offRole                                                       = new ExternalOffset<USQRoleSettings>(0x0258, true);           // 0x0258(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	private ExternalOffset<FScriptMulticastDelegate>          _offSubRole_Pressed                                            = new ExternalOffset<FScriptMulticastDelegate>(0x0260, false); // 0x0260(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	private ExternalOffset<FScriptMulticastDelegate>          _offSubRole_Hovered                                            = new ExternalOffset<FScriptMulticastDelegate>(0x0270, false); // 0x0270(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	private ExternalOffset<ASQTeamState>                      _offMy_TS                                                      = new ExternalOffset<ASQTeamState>(0x0280, true);              // 0x0280(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	private ExternalOffset<ASQPlayerState>                    _offMy_PS                                                      = new ExternalOffset<ASQPlayerState>(0x0288, true);            // 0x0288(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offLocked                                                     = new ExternalOffset<byte/*(bool)*/>(0x0290);                  // 0x0290(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UButton                                            Button_Main                                                    => _offButton_Main.GetValue();
	public UImage                                             Image_MainWeapon                                               => _offImage_MainWeapon.GetValue();
	public UTextBlock                                         Name_Primary                                                   => _offName_Primary.GetValue();
	public UTextBlock                                         TB_Amount_Primary                                              => _offTB_Amount_Primary.GetValue();
	public USQRoleSettings                                    Role                                                           => _offRole.GetValue();
	public FScriptMulticastDelegate                           SubRole_Pressed                                                => _offSubRole_Pressed.GetValue();
	public FScriptMulticastDelegate                           SubRole_Hovered                                                => _offSubRole_Hovered.GetValue();
	public ASQTeamState                                       My_TS                                                          => _offMy_TS.GetValue();
	public ASQPlayerState                                     My_PS                                                          => _offMy_PS.GetValue();
	public byte/*(bool)*/                                     Locked                                                         => _offLocked.GetValue();
	#endregion


}


}