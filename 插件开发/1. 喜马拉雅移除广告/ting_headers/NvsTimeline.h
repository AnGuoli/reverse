//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NvsObject.h"

@interface NvsTimeline : NvsObject
{
}

- (id)getPlaybackRateControl;
- (void)setPlaybackRateControl:(id)arg1;
- (void)removeTimelineEndingLogo;
- (_Bool)setTimelineEndingLogo:(id)arg1 displayWidth:(unsigned int)arg2 displayHeight:(unsigned int)arg3 centerX:(int)arg4 centerY:(int)arg5;
- (_Bool)setWatermarkOpacity:(float)arg1;
- (void)deleteWatermark;
- (_Bool)addWatermark:(id)arg1 displayWidth:(int)arg2 displayHeight:(int)arg3 opacity:(float)arg4 position:(int)arg5 marginX:(int)arg6 marginY:(int)arg7;
- (void)getThemeMusicVolumeGain:(float *)arg1 rightVolumeGain:(float *)arg2;
- (void)setThemeMusicVolumeGain:(float)arg1 rightVolumeGain:(float)arg2;
- (void)setThemeTrailerCaptionText:(id)arg1;
- (void)setThemeTitleCaptionText:(id)arg1;
- (void)removeCurrentTheme;
- (_Bool)applyTheme:(id)arg1;
- (id)getCurrentThemeId;
- (id)removeTimelineVideoFx:(id)arg1;
- (id)addCustomTimelineVideoFx:(long long)arg1 duration:(long long)arg2 customVideoFxRender:(id)arg3;
- (id)addPackagedTimelineVideoFx:(long long)arg1 duration:(long long)arg2 videoFxPackageId:(id)arg3;
- (id)addBuiltinTimelineVideoFx:(long long)arg1 duration:(long long)arg2 videoFxName:(id)arg3;
- (id)getTimelineVideoFxByTimelinePosition:(long long)arg1;
- (id)getNextTimelineVideoFx:(id)arg1;
- (id)getPrevTimelineVideoFx:(id)arg1;
- (id)getLastTimelineVideoFx;
- (id)getFirstTimelineVideoFx;
- (id)removeAnimatedSticker:(id)arg1;
- (id)addCustomPanoramicAnimatedSticker:(long long)arg1 duration:(long long)arg2 animatedStickerPackageId:(id)arg3 customImagePath:(id)arg4;
- (id)addCustomAnimatedSticker:(long long)arg1 duration:(long long)arg2 animatedStickerPackageId:(id)arg3 customImagePath:(id)arg4;
- (id)addPanoramicAnimatedSticker:(long long)arg1 duration:(long long)arg2 animatedStickerPackageId:(id)arg3;
- (id)addAnimatedSticker:(long long)arg1 duration:(long long)arg2 animatedStickerPackageId:(id)arg3;
- (id)getAnimatedStickersByTimelinePosition:(long long)arg1;
- (id)getNextAnimatedSticker:(id)arg1;
- (id)getPrevAnimatedSticker:(id)arg1;
- (id)getLastAnimatedSticker;
- (id)getFirstAnimatedSticker;
- (id)removeCompoundCaption:(id)arg1;
- (id)addCompoundCaption:(long long)arg1 duration:(long long)arg2 compoundCaptionPackageId:(id)arg3;
- (id)getCompoundCaptionsByTimelinePosition:(long long)arg1;
- (id)getNextCompoundCaption:(id)arg1;
- (id)getPrevCompoundCaption:(id)arg1;
- (id)getLastCompoundCaption;
- (id)getFirstCompoundCaption;
- (id)removeCaption:(id)arg1;
- (id)addPanoramicCaption:(id)arg1 inPoint:(long long)arg2 duration:(long long)arg3 captionStylePackageId:(id)arg4;
- (id)addCaption:(id)arg1 inPoint:(long long)arg2 duration:(long long)arg3 captionStylePackageId:(id)arg4;
- (id)getCaptionsByTimelinePosition:(long long)arg1;
- (id)getNextCaption:(id)arg1;
- (id)getPrevCaption:(id)arg1;
- (id)getLastCaption;
- (id)getFirstCaption;
- (void)setCaptionBoundingRectInActualMode:(_Bool)arg1;
- (_Bool)changeVideoSize:(int)arg1 videoHeight:(int)arg2;
- (id)getAudioTrackByIndex:(unsigned int)arg1;
- (id)getVideoTrackByIndex:(unsigned int)arg1;
- (unsigned int)audioTrackCount;
- (unsigned int)videoTrackCount;
- (_Bool)removeAudioTrack:(unsigned int)arg1;
- (_Bool)removeVideoTrack:(unsigned int)arg1;
- (id)appendAudioTrack;
- (id)appendVideoTrack;
@property(nonatomic) long long audioFadeOutDuration;
@property(readonly) long long duration;
@property(readonly) CDStruct_af73b18c videoFps;
@property(readonly) CDStruct_7db97aa2 audioRes;
@property(readonly) CDStruct_59ad98fe videoRes;
- (id)newEmptyCaption;

@end

