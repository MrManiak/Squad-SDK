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

// WidgetBlueprintGeneratedClass FriendListItem.FriendListItem_C
// 0x01B8 (0x0398 - 0x01E0)
public class UFriendListItem_C : UUserWidget
{
	#region Offsets
	private ExternalOffset<FPointerToUberGraphFrame>          _offUberGraphFrame                                             = new ExternalOffset<FPointerToUberGraphFrame>(0x0230, false); // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	private ExternalOffset<UButton>                           _offButton_Main                                                = new ExternalOffset<UButton>(0x0238, true);                   // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UMainMenu_Button_C>                _offButtonJoin                                                 = new ExternalOffset<UMainMenu_Button_C>(0x0240, true);        // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTB_Name                                                    = new ExternalOffset<UTextBlock>(0x0248, true);                // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTB_Session                                                 = new ExternalOffset<UTextBlock>(0x0250, true);                // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<UTextBlock>                        _offTB_Status                                                  = new ExternalOffset<UTextBlock>(0x0258, true);                // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	private ExternalOffset<FScriptMulticastDelegate>          _offRequestJoin                                                = new ExternalOffset<FScriptMulticastDelegate>(0x0260, false); // 0x0260(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	private ExternalOffset<FString>                           _offMarquee_String                                             = new ExternalOffset<FString>(0x0270, false);                  // 0x0270(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	private ExternalOffset<FSQBlueprintFriend>                _offFriend_Struct                                              = new ExternalOffset<FSQBlueprintFriend>(0x0280, false);       // 0x0280(0x0060) (Edit, BlueprintVisible, ExposeOnSpawn)
	private ExternalOffset<FBlueprintSessionResult>           _offFriends_Session                                            = new ExternalOffset<FBlueprintSessionResult>(0x02E0, false);  // 0x02E0(0x00B8) (Edit, BlueprintVisible, DisableEditOnInstance)
	#endregion

	#region Props
	public FPointerToUberGraphFrame                           UberGraphFrame                                                 => _offUberGraphFrame.GetValue();
	public UButton                                            Button_Main                                                    => _offButton_Main.GetValue();
	public UMainMenu_Button_C                                 ButtonJoin                                                     => _offButtonJoin.GetValue();
	public UTextBlock                                         TB_Name                                                        => _offTB_Name.GetValue();
	public UTextBlock                                         TB_Session                                                     => _offTB_Session.GetValue();
	public UTextBlock                                         TB_Status                                                      => _offTB_Status.GetValue();
	public FScriptMulticastDelegate                           RequestJoin                                                    => _offRequestJoin.GetValue();
	public FString                                            Marquee_String                                                 => _offMarquee_String.GetValue();
	public FSQBlueprintFriend                                 Friend_Struct                                                  => _offFriend_Struct.GetValue();
	public FBlueprintSessionResult                            Friends_Session                                                => _offFriends_Session.GetValue();
	#endregion


}


}