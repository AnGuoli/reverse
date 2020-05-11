//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IJKSDLAudioUnitController : NSObject
{
    struct OpaqueAudioComponentInstance *_auUnit;
    _Bool _isPaused;
    _Bool _needFlush;
    float _auVolume;
    struct SDL_AudioSpec _spec;
}

@property(readonly, nonatomic) struct SDL_AudioSpec spec; // @synthesize spec=_spec;
- (double)get_latency_seconds;
- (void)setPlaybackRate:(float)arg1;
- (void)setPlaybackVolume:(float)arg1;
- (void)close;
- (void)flush;
- (void)pause;
- (void)play;
- (void)dealloc;
- (id)initWithAudioSpec:(const struct SDL_AudioSpec *)arg1;

@end

