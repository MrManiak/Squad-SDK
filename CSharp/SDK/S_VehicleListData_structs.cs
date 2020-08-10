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

// UserDefinedStruct S_VehicleListData.S_VehicleListData
// 0x0030
public class FS_VehicleListData : ExternalClass
{
	#region Offsets
	private ExternalOffset<FText>                              _offVehicleName_7_50A988A644B170C333F7F68372362DAD             = new ExternalOffset<FText>(0x0000, false);                    // 0x0000(0x0018) (Edit, BlueprintVisible)
	private ExternalOffset<int>                                _offTicketCost_9_6F4BD734407E64A37422898AE2AF03CB              = new ExternalOffset<int>(0x0018);                             // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<UTexture2D>                         _offIcon_14_4F891E4A421FCC0A712639A25C4D9C77                   = new ExternalOffset<UTexture2D>(0x0020, true);                // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<ASQVehicleSpawner>                  _offSQVehicleSpawnerRef_17_1D537F2145B227FBB9821A8268759E18    = new ExternalOffset<ASQVehicleSpawner>(0x0028, true);         // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	#endregion

	#region Props
	public FText                                               VehicleName_7_50A988A644B170C333F7F68372362DAD                 => _offVehicleName_7_50A988A644B170C333F7F68372362DAD.GetValue();
	public int                                                 TicketCost_9_6F4BD734407E64A37422898AE2AF03CB                  => _offTicketCost_9_6F4BD734407E64A37422898AE2AF03CB.GetValue();
	public UTexture2D                                          Icon_14_4F891E4A421FCC0A712639A25C4D9C77                       => _offIcon_14_4F891E4A421FCC0A712639A25C4D9C77.GetValue();
	public ASQVehicleSpawner                                   SQVehicleSpawnerRef_17_1D537F2145B227FBB9821A8268759E18        => _offSQVehicleSpawnerRef_17_1D537F2145B227FBB9821A8268759E18.GetValue();
	#endregion

	public FS_VehicleListData(FText c_VehicleName_7_50A988A644B170C333F7F68372362DAD, int c_TicketCost_9_6F4BD734407E64A37422898AE2AF03CB, UTexture2D c_Icon_14_4F891E4A421FCC0A712639A25C4D9C77, ASQVehicleSpawner c_SQVehicleSpawnerRef_17_1D537F2145B227FBB9821A8268759E18) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offVehicleName_7_50A988A644B170C333F7F68372362DAD.SetValue(c_VehicleName_7_50A988A644B170C333F7F68372362DAD);
		_offTicketCost_9_6F4BD734407E64A37422898AE2AF03CB.SetValue(c_TicketCost_9_6F4BD734407E64A37422898AE2AF03CB);
		_offIcon_14_4F891E4A421FCC0A712639A25C4D9C77.SetValue(c_Icon_14_4F891E4A421FCC0A712639A25C4D9C77);
		_offSQVehicleSpawnerRef_17_1D537F2145B227FBB9821A8268759E18.SetValue(c_SQVehicleSpawnerRef_17_1D537F2145B227FBB9821A8268759E18);
	}
}

}