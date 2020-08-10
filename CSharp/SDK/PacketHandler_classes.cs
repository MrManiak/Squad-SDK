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

// Class PacketHandler.HandlerComponentFactory
// 0x0000 (0x0028 - 0x0028)
public class UHandlerComponentFactory : UObject
{
	#region Offsets
	#endregion

	#region Props
	#endregion


}

// Class PacketHandler.NetAnalyticsAggregatorConfig
// 0x0010 (0x0038 - 0x0028)
public class UNetAnalyticsAggregatorConfig : UObject
{
	#region Offsets
	private ExternalOffset<TArray<FNetAnalyticsDataConfig>>   _offNetAnalyticsData                                           = new ExternalOffset<TArray<FNetAnalyticsDataConfig>>(0x0028, false); // 0x0028(0x0010) (ZeroConstructor, Config, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public TArray<FNetAnalyticsDataConfig>                    NetAnalyticsData                                               => _offNetAnalyticsData.GetValue();
	#endregion


}

// Class PacketHandler.PacketHandlerProfileConfig
// 0x0010 (0x0038 - 0x0028)
public class UPacketHandlerProfileConfig : UObject
{
	#region Offsets
	private ExternalOffset<TArray<FString>>                   _offComponents                                                 = new ExternalOffset<TArray<FString>>(0x0028, false);          // 0x0028(0x0010) (ZeroConstructor, Config, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public TArray<FString>                                    Components                                                     => _offComponents.GetValue();
	#endregion


}


}