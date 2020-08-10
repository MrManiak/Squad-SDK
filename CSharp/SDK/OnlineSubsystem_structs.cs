// Name: Sq, Version: b21

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace UFT
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum OnlineSubsystem.EInAppPurchaseState
public enum EInAppPurchaseState : byte
{
	EInAppPurchaseState__Unknown   = 0,
	EInAppPurchaseState__Success   = 1,
	EInAppPurchaseState__Failed    = 2,
	EInAppPurchaseState__Cancelled = 3,
	EInAppPurchaseState__Invalid   = 4,
	EInAppPurchaseState__NotAllowed = 5,
	EInAppPurchaseState__Restored  = 6,
	EInAppPurchaseState__AlreadyOwned = 7,
	EInAppPurchaseState__EInAppPurchaseState_MAX = 8
}

// Enum OnlineSubsystem.EMPMatchOutcome
public enum EMPMatchOutcome : byte
{
	EMPMatchOutcome__None          = 0,
	EMPMatchOutcome__Quit          = 1,
	EMPMatchOutcome__Won           = 2,
	EMPMatchOutcome__Lost          = 3,
	EMPMatchOutcome__Tied          = 4,
	EMPMatchOutcome__TimeExpired   = 5,
	EMPMatchOutcome__First         = 6,
	EMPMatchOutcome__Second        = 7,
	EMPMatchOutcome__Third         = 8,
	EMPMatchOutcome__Fourth        = 9,
	EMPMatchOutcome__EMPMatchOutcome_MAX = 10
}

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct OnlineSubsystem.InAppPurchaseProductRequest
// 0x0018
public class FInAppPurchaseProductRequest : ExternalClass
{
	#region Offsets
	private ExternalOffset<FString>                            _offProductIdentifier                                          = new ExternalOffset<FString>(0x0000, false);                  // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                     _offbIsConsumable                                              = new ExternalOffset<byte/*(bool)*/>(0x0010);                  // 0x0010(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FString                                             ProductIdentifier                                              => _offProductIdentifier.GetValue();
	public byte/*(bool)*/                                      bIsConsumable                                                  => _offbIsConsumable.GetValue();
	#endregion

	public FInAppPurchaseProductRequest(FString c_ProductIdentifier, byte/*(bool)*/ c_bIsConsumable) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offProductIdentifier.SetValue(c_ProductIdentifier);
		_offbIsConsumable.SetValue(c_bIsConsumable);
	}
}
// ScriptStruct OnlineSubsystem.NamedInterfaceDef
// 0x0018
public class FNamedInterfaceDef : ExternalClass
{
	#region Offsets
	private ExternalOffset<FName>                              _offInterfaceName                                              = new ExternalOffset<FName>(0x0000, false);                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FString>                            _offInterfaceClassName                                         = new ExternalOffset<FString>(0x0008, false);                  // 0x0008(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FName                                               InterfaceName                                                  => _offInterfaceName.GetValue();
	public FString                                             InterfaceClassName                                             => _offInterfaceClassName.GetValue();
	#endregion

	public FNamedInterfaceDef(FName c_InterfaceName, FString c_InterfaceClassName) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offInterfaceName.SetValue(c_InterfaceName);
		_offInterfaceClassName.SetValue(c_InterfaceClassName);
	}
}
// ScriptStruct OnlineSubsystem.NamedInterface
// 0x0010
public class FNamedInterface : ExternalClass
{
	#region Offsets
	private ExternalOffset<FName>                              _offInterfaceName                                              = new ExternalOffset<FName>(0x0000, false);                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<UObject>                            _offInterfaceObject                                            = new ExternalOffset<UObject>(0x0008, true);                   // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FName                                               InterfaceName                                                  => _offInterfaceName.GetValue();
	public UObject                                             InterfaceObject                                                => _offInterfaceObject.GetValue();
	#endregion

	public FNamedInterface(FName c_InterfaceName, UObject c_InterfaceObject) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offInterfaceName.SetValue(c_InterfaceName);
		_offInterfaceObject.SetValue(c_InterfaceObject);
	}
}
// ScriptStruct OnlineSubsystem.InAppPurchaseRestoreInfo
// 0x0030
public class FInAppPurchaseRestoreInfo : ExternalClass
{
	#region Offsets
	private ExternalOffset<FString>                            _offIdentifier                                                 = new ExternalOffset<FString>(0x0000, false);                  // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FString>                            _offReceiptData                                                = new ExternalOffset<FString>(0x0010, false);                  // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FString>                            _offTransactionIdentifier                                      = new ExternalOffset<FString>(0x0020, false);                  // 0x0020(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FString                                             Identifier                                                     => _offIdentifier.GetValue();
	public FString                                             ReceiptData                                                    => _offReceiptData.GetValue();
	public FString                                             TransactionIdentifier                                          => _offTransactionIdentifier.GetValue();
	#endregion

	public FInAppPurchaseRestoreInfo(FString c_Identifier, FString c_ReceiptData, FString c_TransactionIdentifier) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offIdentifier.SetValue(c_Identifier);
		_offReceiptData.SetValue(c_ReceiptData);
		_offTransactionIdentifier.SetValue(c_TransactionIdentifier);
	}
}
// ScriptStruct OnlineSubsystem.InAppPurchaseProductInfo
// 0x00A8
public class FInAppPurchaseProductInfo : ExternalClass
{
	#region Offsets
	private ExternalOffset<FString>                            _offIdentifier                                                 = new ExternalOffset<FString>(0x0000, false);                  // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FString>                            _offTransactionIdentifier                                      = new ExternalOffset<FString>(0x0010, false);                  // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FString>                            _offDisplayName                                                = new ExternalOffset<FString>(0x0020, false);                  // 0x0020(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FString>                            _offDisplayDescription                                         = new ExternalOffset<FString>(0x0030, false);                  // 0x0030(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FString>                            _offDisplayPrice                                               = new ExternalOffset<FString>(0x0040, false);                  // 0x0040(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<float>                              _offRawPrice                                                   = new ExternalOffset<float>(0x0050);                           // 0x0050(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FString>                            _offCurrencyCode                                               = new ExternalOffset<FString>(0x0058, false);                  // 0x0058(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FString>                            _offCurrencySymbol                                             = new ExternalOffset<FString>(0x0068, false);                  // 0x0068(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FString>                            _offDecimalSeparator                                           = new ExternalOffset<FString>(0x0078, false);                  // 0x0078(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FString>                            _offGroupingSeparator                                          = new ExternalOffset<FString>(0x0088, false);                  // 0x0088(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FString>                            _offReceiptData                                                = new ExternalOffset<FString>(0x0098, false);                  // 0x0098(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FString                                             Identifier                                                     => _offIdentifier.GetValue();
	public FString                                             TransactionIdentifier                                          => _offTransactionIdentifier.GetValue();
	public FString                                             DisplayName                                                    => _offDisplayName.GetValue();
	public FString                                             DisplayDescription                                             => _offDisplayDescription.GetValue();
	public FString                                             DisplayPrice                                                   => _offDisplayPrice.GetValue();
	public float                                               RawPrice                                                       => _offRawPrice.GetValue();
	public FString                                             CurrencyCode                                                   => _offCurrencyCode.GetValue();
	public FString                                             CurrencySymbol                                                 => _offCurrencySymbol.GetValue();
	public FString                                             DecimalSeparator                                               => _offDecimalSeparator.GetValue();
	public FString                                             GroupingSeparator                                              => _offGroupingSeparator.GetValue();
	public FString                                             ReceiptData                                                    => _offReceiptData.GetValue();
	#endregion

	public FInAppPurchaseProductInfo(FString c_Identifier, FString c_TransactionIdentifier, FString c_DisplayName, FString c_DisplayDescription, FString c_DisplayPrice, float c_RawPrice, FString c_CurrencyCode, FString c_CurrencySymbol, FString c_DecimalSeparator, FString c_GroupingSeparator, FString c_ReceiptData) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offIdentifier.SetValue(c_Identifier);
		_offTransactionIdentifier.SetValue(c_TransactionIdentifier);
		_offDisplayName.SetValue(c_DisplayName);
		_offDisplayDescription.SetValue(c_DisplayDescription);
		_offDisplayPrice.SetValue(c_DisplayPrice);
		_offRawPrice.SetValue(c_RawPrice);
		_offCurrencyCode.SetValue(c_CurrencyCode);
		_offCurrencySymbol.SetValue(c_CurrencySymbol);
		_offDecimalSeparator.SetValue(c_DecimalSeparator);
		_offGroupingSeparator.SetValue(c_GroupingSeparator);
		_offReceiptData.SetValue(c_ReceiptData);
	}
}

}