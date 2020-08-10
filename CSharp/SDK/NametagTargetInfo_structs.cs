// Name: Sq, Version: b21

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace UFT
{
//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct NametagTargetInfo.NametagTargetInfo
// 0x0030
public class FNametagTargetInfo : ExternalClass
{
	#region Offsets
	private ExternalOffset<ASQSquadState>                      _offSquadState_6_EE5FB84B4271C6CC874AEF89B0677FD8              = new ExternalOffset<ASQSquadState>(0x0000, true);             // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<ASQPlayerState>                     _offPlayerState_12_00C100DD4906E5AE60F6F58F1F7C60DD            = new ExternalOffset<ASQPlayerState>(0x0008, true);            // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<FText>                              _offPlayerName_13_E8EE3D974847064B7B7F419D44CBF3EF             = new ExternalOffset<FText>(0x0010, false);                    // 0x0010(0x0018) (Edit, BlueprintVisible)
	private ExternalOffset<byte/*(bool)*/>                     _offIsSl_14_0DDC97324F8CCE47027CFC9E9CCBE1CB                   = new ExternalOffset<byte/*(bool)*/>(0x0028);                  // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	private ExternalOffset<byte/*(bool)*/>                     _offIsInSameSquad_15_17759E054D3155C288DE8E84C77BAA1F          = new ExternalOffset<byte/*(bool)*/>(0x0029);                  // 0x0029(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	private ExternalOffset<int>                                _offVehicleOccupants_18_C56F18E940FA28D35BED5EA6E47B7F5E       = new ExternalOffset<int>(0x002C);                             // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public ASQSquadState                                       SquadState_6_EE5FB84B4271C6CC874AEF89B0677FD8                  => _offSquadState_6_EE5FB84B4271C6CC874AEF89B0677FD8.GetValue();
	public ASQPlayerState                                      PlayerState_12_00C100DD4906E5AE60F6F58F1F7C60DD                => _offPlayerState_12_00C100DD4906E5AE60F6F58F1F7C60DD.GetValue();
	public FText                                               PlayerName_13_E8EE3D974847064B7B7F419D44CBF3EF                 => _offPlayerName_13_E8EE3D974847064B7B7F419D44CBF3EF.GetValue();
	public byte/*(bool)*/                                      IsSl_14_0DDC97324F8CCE47027CFC9E9CCBE1CB                       => _offIsSl_14_0DDC97324F8CCE47027CFC9E9CCBE1CB.GetValue();
	public byte/*(bool)*/                                      IsInSameSquad_15_17759E054D3155C288DE8E84C77BAA1F              => _offIsInSameSquad_15_17759E054D3155C288DE8E84C77BAA1F.GetValue();
	public int                                                 VehicleOccupants_18_C56F18E940FA28D35BED5EA6E47B7F5E           => _offVehicleOccupants_18_C56F18E940FA28D35BED5EA6E47B7F5E.GetValue();
	#endregion

	public FNametagTargetInfo(ASQSquadState c_SquadState_6_EE5FB84B4271C6CC874AEF89B0677FD8, ASQPlayerState c_PlayerState_12_00C100DD4906E5AE60F6F58F1F7C60DD, FText c_PlayerName_13_E8EE3D974847064B7B7F419D44CBF3EF, byte/*(bool)*/ c_IsSl_14_0DDC97324F8CCE47027CFC9E9CCBE1CB, byte/*(bool)*/ c_IsInSameSquad_15_17759E054D3155C288DE8E84C77BAA1F, int c_VehicleOccupants_18_C56F18E940FA28D35BED5EA6E47B7F5E) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offSquadState_6_EE5FB84B4271C6CC874AEF89B0677FD8.SetValue(c_SquadState_6_EE5FB84B4271C6CC874AEF89B0677FD8);
		_offPlayerState_12_00C100DD4906E5AE60F6F58F1F7C60DD.SetValue(c_PlayerState_12_00C100DD4906E5AE60F6F58F1F7C60DD);
		_offPlayerName_13_E8EE3D974847064B7B7F419D44CBF3EF.SetValue(c_PlayerName_13_E8EE3D974847064B7B7F419D44CBF3EF);
		_offIsSl_14_0DDC97324F8CCE47027CFC9E9CCBE1CB.SetValue(c_IsSl_14_0DDC97324F8CCE47027CFC9E9CCBE1CB);
		_offIsInSameSquad_15_17759E054D3155C288DE8E84C77BAA1F.SetValue(c_IsInSameSquad_15_17759E054D3155C288DE8E84C77BAA1F);
		_offVehicleOccupants_18_C56F18E940FA28D35BED5EA6E47B7F5E.SetValue(c_VehicleOccupants_18_C56F18E940FA28D35BED5EA6E47B7F5E);
	}
}

}