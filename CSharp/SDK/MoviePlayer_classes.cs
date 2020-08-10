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

// Class MoviePlayer.MoviePlayerSettings
// 0x0018 (0x0040 - 0x0028)
public class UMoviePlayerSettings : UObject
{
	#region Offsets
	private ExternalOffset<byte/*(bool)*/>                    _offbWaitForMoviesToComplete                                   = new ExternalOffset<byte/*(bool)*/>(0x0028);                  // 0x0028(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<byte/*(bool)*/>                    _offbMoviesAreSkippable                                        = new ExternalOffset<byte/*(bool)*/>(0x0029);                  // 0x0029(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	private ExternalOffset<TArray<FString>>                   _offStartupMovies                                              = new ExternalOffset<TArray<FString>>(0x0030, false);          // 0x0030(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public byte/*(bool)*/                                     bWaitForMoviesToComplete                                       => _offbWaitForMoviesToComplete.GetValue();
	public byte/*(bool)*/                                     bMoviesAreSkippable                                            => _offbMoviesAreSkippable.GetValue();
	public TArray<FString>                                    StartupMovies                                                  => _offStartupMovies.GetValue();
	#endregion


}


}