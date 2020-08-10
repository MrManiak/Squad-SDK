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

// Class GeometryCacheTracks.MovieSceneGeometryCacheSection
// 0x004D (0x0118 - 0x00CB)
public class UMovieSceneGeometryCacheSection : UMovieSceneSection
{
	#region Offsets
	private ExternalOffset<FMovieSceneGeometryCacheParams>    _offParams                                                     = new ExternalOffset<FMovieSceneGeometryCacheParams>(0x00E0, false); // 0x00E0(0x0038) (Edit, NativeAccessSpecifierPublic)
	#endregion

	#region Props
	public FMovieSceneGeometryCacheParams                     Params                                                         => _offParams.GetValue();
	#endregion


}

// Class GeometryCacheTracks.MovieSceneGeometryCacheTrack
// 0x0010 (0x0068 - 0x0058)
public class UMovieSceneGeometryCacheTrack : UMovieSceneNameableTrack
{
	#region Offsets
	private ExternalOffset<TArray<UMovieSceneSection>>        _offAnimationSections                                          = new ExternalOffset<TArray<UMovieSceneSection>>(0x0058, false); // 0x0058(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	#endregion

	#region Props
	public TArray<UMovieSceneSection>                         AnimationSections                                              => _offAnimationSections.GetValue();
	#endregion


}


}