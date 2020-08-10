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

// BlueprintGeneratedClass SaveData_UI.SaveData_UI_C
// 0x003E (0x0066 - 0x0028)
public class USaveData_UI_C : USaveGame
{
	#region Offsets
	private ExternalOffset<byte/*(bool)*/>                    _offShow_Map_Roles                                             = new ExternalOffset<byte/*(bool)*/>(0x0028);                  // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<byte/*(bool)*/>                    _offSL_Icon_Always_On                                          = new ExternalOffset<byte/*(bool)*/>(0x0029);                  // 0x0029(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<byte/*(bool)*/>                    _offShow_Stance_Indicator                                      = new ExternalOffset<byte/*(bool)*/>(0x002A);                  // 0x002A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<byte/*(bool)*/>                    _offShow_FOB_Radius                                            = new ExternalOffset<byte/*(bool)*/>(0x002B);                  // 0x002B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<byte/*(bool)*/>                    _offShow_FOB_Supplies                                          = new ExternalOffset<byte/*(bool)*/>(0x002C);                  // 0x002C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<byte/*(bool)*/>                    _offShow_Team_Waypoints                                        = new ExternalOffset<byte/*(bool)*/>(0x002D);                  // 0x002D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<byte/*(bool)*/>                    _offShow_Grid                                                  = new ExternalOffset<byte/*(bool)*/>(0x002E);                  // 0x002E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<byte/*(bool)*/>                    _offShow_Spawns                                                = new ExternalOffset<byte/*(bool)*/>(0x002F);                  // 0x002F(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<byte/*(bool)*/>                    _offShow_Weapons_in_Deployment                                 = new ExternalOffset<byte/*(bool)*/>(0x0030);                  // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<byte/*(bool)*/>                    _offShow_FT_In_Name_Tag                                        = new ExternalOffset<byte/*(bool)*/>(0x0031);                  // 0x0031(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<float>                             _offMap_Marker_Scale                                           = new ExternalOffset<float>(0x0034);                           // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offLattice_Opacity                                            = new ExternalOffset<float>(0x0038);                           // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<float>                             _offGrid_Opacity                                               = new ExternalOffset<float>(0x003C);                           // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offSkipGiveUpOption                                           = new ExternalOffset<byte/*(bool)*/>(0x0040);                  // 0x0040(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<byte/*(bool)*/>                    _offShow_Fireteam_Letters                                      = new ExternalOffset<byte/*(bool)*/>(0x0041);                  // 0x0041(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<byte/*(bool)*/>                    _offShow_Deployment_Tutorial                                   = new ExternalOffset<byte/*(bool)*/>(0x0042);                  // 0x0042(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<byte/*(bool)*/>                    _offShow_Game_Mode_Animation                                   = new ExternalOffset<byte/*(bool)*/>(0x0043);                  // 0x0043(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<byte/*(bool)*/>                    _offShow_Whitelist_Mods                                        = new ExternalOffset<byte/*(bool)*/>(0x0044);                  // 0x0044(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<byte/*(bool)*/>                    _offShow_Modded_Servers                                        = new ExternalOffset<byte/*(bool)*/>(0x0045);                  // 0x0045(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<byte/*(bool)*/>                    _offShow_Vehicle_Keybinds                                      = new ExternalOffset<byte/*(bool)*/>(0x0046);                  // 0x0046(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<byte/*(bool)*/>                    _offShow_TC_Zones                                              = new ExternalOffset<byte/*(bool)*/>(0x0047);                  // 0x0047(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<byte/*(bool)*/>                    _offPlay_Capture_Sounds                                        = new ExternalOffset<byte/*(bool)*/>(0x0048);                  // 0x0048(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<TArray<FString>>                   _offFavouriteServers                                           = new ExternalOffset<TArray<FString>>(0x0050, false);          // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	private ExternalOffset<byte/*(bool)*/>                    _offShow_Favourites_Only                                       = new ExternalOffset<byte/*(bool)*/>(0x0060);                  // 0x0060(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<byte/*(bool)*/>                    _offShow_Full_Servers                                          = new ExternalOffset<byte/*(bool)*/>(0x0061);                  // 0x0061(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<TEnumAsByte<E_SortType>>           _offLastSortType                                               = new ExternalOffset<TEnumAsByte<E_SortType>>(0x0062, false);  // 0x0062(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	private ExternalOffset<byte/*(bool)*/>                    _offLastAscendingSortType                                      = new ExternalOffset<byte/*(bool)*/>(0x0063);                  // 0x0063(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<byte/*(bool)*/>                    _offDisableOnScreenChat                                        = new ExternalOffset<byte/*(bool)*/>(0x0064);                  // 0x0064(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	private ExternalOffset<byte/*(bool)*/>                    _offShow_Director_Lines                                        = new ExternalOffset<byte/*(bool)*/>(0x0065);                  // 0x0065(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	#endregion

	#region Props
	public byte/*(bool)*/                                     Show_Map_Roles                                                 => _offShow_Map_Roles.GetValue();
	public byte/*(bool)*/                                     SL_Icon_Always_On                                              => _offSL_Icon_Always_On.GetValue();
	public byte/*(bool)*/                                     Show_Stance_Indicator                                          => _offShow_Stance_Indicator.GetValue();
	public byte/*(bool)*/                                     Show_FOB_Radius                                                => _offShow_FOB_Radius.GetValue();
	public byte/*(bool)*/                                     Show_FOB_Supplies                                              => _offShow_FOB_Supplies.GetValue();
	public byte/*(bool)*/                                     Show_Team_Waypoints                                            => _offShow_Team_Waypoints.GetValue();
	public byte/*(bool)*/                                     Show_Grid                                                      => _offShow_Grid.GetValue();
	public byte/*(bool)*/                                     Show_Spawns                                                    => _offShow_Spawns.GetValue();
	public byte/*(bool)*/                                     Show_Weapons_in_Deployment                                     => _offShow_Weapons_in_Deployment.GetValue();
	public byte/*(bool)*/                                     Show_FT_In_Name_Tag                                            => _offShow_FT_In_Name_Tag.GetValue();
	public float                                              Map_Marker_Scale                                               => _offMap_Marker_Scale.GetValue();
	public float                                              Lattice_Opacity                                                => _offLattice_Opacity.GetValue();
	public float                                              Grid_Opacity                                                   => _offGrid_Opacity.GetValue();
	public byte/*(bool)*/                                     SkipGiveUpOption                                               => _offSkipGiveUpOption.GetValue();
	public byte/*(bool)*/                                     Show_Fireteam_Letters                                          => _offShow_Fireteam_Letters.GetValue();
	public byte/*(bool)*/                                     Show_Deployment_Tutorial                                       => _offShow_Deployment_Tutorial.GetValue();
	public byte/*(bool)*/                                     Show_Game_Mode_Animation                                       => _offShow_Game_Mode_Animation.GetValue();
	public byte/*(bool)*/                                     Show_Whitelist_Mods                                            => _offShow_Whitelist_Mods.GetValue();
	public byte/*(bool)*/                                     Show_Modded_Servers                                            => _offShow_Modded_Servers.GetValue();
	public byte/*(bool)*/                                     Show_Vehicle_Keybinds                                          => _offShow_Vehicle_Keybinds.GetValue();
	public byte/*(bool)*/                                     Show_TC_Zones                                                  => _offShow_TC_Zones.GetValue();
	public byte/*(bool)*/                                     Play_Capture_Sounds                                            => _offPlay_Capture_Sounds.GetValue();
	public TArray<FString>                                    FavouriteServers                                               => _offFavouriteServers.GetValue();
	public byte/*(bool)*/                                     Show_Favourites_Only                                           => _offShow_Favourites_Only.GetValue();
	public byte/*(bool)*/                                     Show_Full_Servers                                              => _offShow_Full_Servers.GetValue();
	public TEnumAsByte<E_SortType>                            LastSortType                                                   => _offLastSortType.GetValue();
	public byte/*(bool)*/                                     LastAscendingSortType                                          => _offLastAscendingSortType.GetValue();
	public byte/*(bool)*/                                     DisableOnScreenChat                                            => _offDisableOnScreenChat.GetValue();
	public byte/*(bool)*/                                     Show_Director_Lines                                            => _offShow_Director_Lines.GetValue();
	#endregion


}


}