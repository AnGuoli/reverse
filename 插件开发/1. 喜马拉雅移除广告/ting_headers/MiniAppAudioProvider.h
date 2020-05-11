//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "XMMAAudioPlayerProvider-Protocol.h"
#import "XMMiniAppLifeCycleDispatcherDelegate-Protocol.h"

@class NSMutableDictionary, NSPointerArray, NSString, XMMARealizableAbility;

@interface MiniAppAudioProvider : NSObject <XMMAAudioPlayerProvider, XMMiniAppLifeCycleDispatcherDelegate>
{
    _Bool _isMainAppPlayerSuspend;
    XMMARealizableAbility *ability;
    NSPointerArray *abilities;
    NSMutableDictionary *_miniAppPlayRecord;
}

+ (void)load;
@property(retain, nonatomic) NSMutableDictionary *miniAppPlayRecord; // @synthesize miniAppPlayRecord=_miniAppPlayRecord;
@property(nonatomic) _Bool isMainAppPlayerSuspend; // @synthesize isMainAppPlayerSuspend=_isMainAppPlayerSuspend;
@property(retain, nonatomic) NSPointerArray *abilities; // @synthesize abilities;
@property(nonatomic) __weak XMMARealizableAbility *ability; // @synthesize ability;
- (void).cxx_destruct;
- (void)enumBgAudioPlayers:(CDUnknownBlockType)arg1;
- (void)switchOnNotis:(_Bool)arg1;
- (void)playerDidPlaylistEndNotification:(id)arg1;
- (void)playerDidFailNotification:(id)arg1;
- (void)playerEndBufferNotification:(id)arg1;
- (void)playerStartBufferNotification:(id)arg1;
- (void)playerCurrentTrackEndNotification:(id)arg1;
- (void)playerStoppedNotification:(id)arg1;
- (void)playerPausedNotification:(id)arg1;
- (void)playerPlayingProgressNotification:(id)arg1;
- (void)playerDidPlayingNotification:(id)arg1;
- (void)playerWillPlayingNotification:(id)arg1;
- (void)mainAppPlayerWillPlay:(id)arg1;
- (void)xmminiAppOnShow:(id)arg1;
- (void)playPrev;
- (void)playNext;
- (void)playerDelegateEnabled:(_Bool)arg1;
- (void)setTrackList:(id)arg1 playIndex:(unsigned long long)arg2;
- (void)playWithTrack:(id)arg1 trackList:(id)arg2;
- (void)playWithTrackId:(id)arg1;
- (_Bool)seekToTime:(double)arg1;
- (void)changePlaySpeed:(double)arg1;
- (double)getDuration;
- (void)resetPlaySpeed;
- (void)resume;
- (void)pause;
- (void)stop;
- (void)play;
- (void)enablePlayerDelegate:(_Bool)arg1;
- (id)currentTrack;
- (_Bool)isPlaying;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

