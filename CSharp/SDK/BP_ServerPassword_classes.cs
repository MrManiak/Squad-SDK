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

// WidgetBlueprintGeneratedClass BP_ServerPassword.BP_ServerPassword_C
// 0x0168 (0x0348 - 0x01E0)
public class UBP_ServerPassword_C : UUserWidget
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0230, false); // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UMainMenu_Button_C>                _offAcceptButton                                               = new ExternalOffset<UMainMenu_Button_C>(0x0238, true);        // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UMainMenu_Button_C>                _offDenyButton                                                 = new ExternalOffset<UMainMenu_Button_C>(0x0240, true);        // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UEditableText>                     _offEditableText_1                                             = new ExternalOffset<UEditableText>(0x0248, true);             // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offLine                                                       = new ExternalOffset<UImage>(0x0250, true);                    // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UImage>                            _offTopLine                                                    = new ExternalOffset<UImage>(0x0258, true);                    // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<FBlueprintSessionResult>           _offSession                                                    = new ExternalOffset<FBlueprintSessionResult>(0x0260, false);  // 0x0260(0x00B8) (Edit, BlueprintVisible, ExposeOnSpawn)
	private ExternalOffset<FScriptMulticastDelegate>          _offPassword_Entered                                           = new ExternalOffset<FScriptMulticastDelegate>(0x0318, false); // 0x0318(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	private ExternalOffset<FString>                           _offServerURL                                                  = new ExternalOffset<FString>(0x0328, false);                  // 0x0328(0x0010) (Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	private ExternalOffset<FScriptMulticastDelegate>          _offPassword_Cancelled                                         = new ExternalOffset<FScriptMulticastDelegate>(0x0338, false); // 0x0338(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UMainMenu_Button_C                                 AcceptButton                                                   => _offAcceptButton.GetValue();
	public UMainMenu_Button_C                                 DenyButton                                                     => _offDenyButton.GetValue();
	public UEditableText                                      EditableText_1                                                 => _offEditableText_1.GetValue();
	public UImage                                             Line                                                           => _offLine.GetValue();
	public UImage                                             TopLine                                                        => _offTopLine.GetValue();
	public FBlueprintSessionResult                            Session                                                        => _offSession.GetValue();
	public FScriptMulticastDelegate                           Password_Entered                                               => _offPassword_Entered.GetValue();
	public FString                                            ServerURL                                                      => _offServerURL.GetValue();
	public FScriptMulticastDelegate                           Password_Cancelled                                             => _offPassword_Cancelled.GetValue();
	#endregion


}


}