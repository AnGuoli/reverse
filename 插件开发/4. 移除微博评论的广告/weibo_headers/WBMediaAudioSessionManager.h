//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSPointerArray;
@protocol WBMediaAudioSessionOperator;

@interface WBMediaAudioSessionManager : NSObject
{
    NSPointerArray *_sessions;
    struct {
        unsigned int hasSecondaryAudioShouldBeSilencedHint:1;
    } _flags;
    _Bool _interruptedBySystem;
    _Bool _secondaryAudioPlaying;
    id <WBMediaAudioSessionOperator> _sessionOperator;
}

+ (id)sharedManager;
@property(retain, nonatomic) id <WBMediaAudioSessionOperator> sessionOperator; // @synthesize sessionOperator=_sessionOperator;
@property(nonatomic) _Bool secondaryAudioPlaying; // @synthesize secondaryAudioPlaying=_secondaryAudioPlaying;
@property(nonatomic) _Bool interruptedBySystem; // @synthesize interruptedBySystem=_interruptedBySystem;
- (void).cxx_destruct;
- (void)operatorUpdateAudioPlaybackActivationState;
- (void)operatorEndAudioPlayback;
- (void)operatorBeginAudioPlayback;
- (void)_compactSessions;
- (void)audioSessionInterruptionNotfication:(id)arg1;
- (void)_endInterruptionForTopMostSession;
- (void)_beginInterruptionForTopMostSessionWithType:(long long)arg1;
- (void)_setAudioSessionActive:(_Bool)arg1;
- (void)resumeAudioSessionIfNeeded:(id)arg1;
- (void)endAudioSession:(id)arg1;
- (id)beginAudioSession;
- (id)init;
- (void)dealloc;

@end

