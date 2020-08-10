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

// Enum EngineSettings.ESubLevelStripMode
public enum ESubLevelStripMode : byte
{
	ESubLevelStripMode__ExactClass = 0,
	ESubLevelStripMode__IsChildOf  = 1,
	ESubLevelStripMode__ESubLevelStripMode_MAX = 2
}

// Enum EngineSettings.EFourPlayerSplitScreenType
public enum EFourPlayerSplitScreenType : byte
{
	EFourPlayerSplitScreenType__Grid = 0,
	EFourPlayerSplitScreenType__Vertical = 1,
	EFourPlayerSplitScreenType__Horizontal = 2,
	EFourPlayerSplitScreenType__EFourPlayerSplitScreenType_MAX = 3
}

// Enum EngineSettings.EThreePlayerSplitScreenType
public enum EThreePlayerSplitScreenType : byte
{
	EThreePlayerSplitScreenType__FavorTop = 0,
	EThreePlayerSplitScreenType__FavorBottom = 1,
	EThreePlayerSplitScreenType__Vertical = 2,
	EThreePlayerSplitScreenType__Horizontal = 3,
	EThreePlayerSplitScreenType__EThreePlayerSplitScreenType_MAX = 4
}

// Enum EngineSettings.ETwoPlayerSplitScreenType
public enum ETwoPlayerSplitScreenType : byte
{
	ETwoPlayerSplitScreenType__Horizontal = 0,
	ETwoPlayerSplitScreenType__Vertical = 1,
	ETwoPlayerSplitScreenType__ETwoPlayerSplitScreenType_MAX = 2
}

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct EngineSettings.AutoCompleteCommand
// 0x0028
public class FAutoCompleteCommand : ExternalClass
{
	#region Offsets
	private ExternalOffset<FString>                            _offCommand                                                    = new ExternalOffset<FString>(0x0000, false);                  // 0x0000(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FString>                            _offDesc                                                       = new ExternalOffset<FString>(0x0010, false);                  // 0x0010(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FString                                             Command                                                        => _offCommand.GetValue();
	public FString                                             Desc                                                           => _offDesc.GetValue();
	#endregion

	public FAutoCompleteCommand(FString c_Command, FString c_Desc) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offCommand.SetValue(c_Command);
		_offDesc.SetValue(c_Desc);
	}
}
// ScriptStruct EngineSettings.GameModeName
// 0x0028
public class FGameModeName : ExternalClass
{
	#region Offsets
	private ExternalOffset<FString>                            _offName                                                       = new ExternalOffset<FString>(0x0000, false);                  // 0x0000(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<FSoftClassPath>                     _offGameMode                                                   = new ExternalOffset<FSoftClassPath>(0x0010, false);           // 0x0010(0x0018) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FString                                             Name                                                           => _offName.GetValue();
	public FSoftClassPath                                      GameMode                                                       => _offGameMode.GetValue();
	#endregion

	public FGameModeName(FString c_Name, FSoftClassPath c_GameMode) : base(Sdk.MainEms, UIntPtr.Zero)
	{
		_offName.SetValue(c_Name);
		_offGameMode.SetValue(c_GameMode);
	}
}

}