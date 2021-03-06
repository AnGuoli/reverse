//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableArray, NSString, NSTimer, WBAudioStreamEngine, WBMusicItem;

@interface WBAudioPlayerManager : NSObject
{
    long long playMode;
    NSString *musicObjectContextID;
    _Bool isRequestingMeta;
    unsigned long long backGroundTaskIdentifier;
    NSMutableArray *musicItems;
    WBMusicItem *currentMusicItem;
    WBAudioStreamEngine *engine;
    NSMutableArray *_cachedPlayMetaItem;
    NSString *musicObjectIdentifier;
    unsigned long long _lastPlayStatus;
    NSString *_listId;
    NSDictionary *_analysisParameters;
    long long _playTime;
    NSTimer *_playTimeTimer;
    NSTimer *_playProgressTimer;
}

+ (id)sharedAudioPlayerManager;
+ (unsigned long long)options;
+ (void)setOptions:(unsigned long long)arg1;
@property(retain, nonatomic) NSTimer *playProgressTimer; // @synthesize playProgressTimer=_playProgressTimer;
@property(retain, nonatomic) NSTimer *playTimeTimer; // @synthesize playTimeTimer=_playTimeTimer;
@property(nonatomic) long long playTime; // @synthesize playTime=_playTime;
@property(copy, nonatomic) NSDictionary *analysisParameters; // @synthesize analysisParameters=_analysisParameters;
@property(retain, nonatomic) NSString *listId; // @synthesize listId=_listId;
@property(nonatomic) unsigned long long lastPlayStatus; // @synthesize lastPlayStatus=_lastPlayStatus;
@property(copy, nonatomic) NSString *musicObjectContextID; // @synthesize musicObjectContextID;
@property(retain, nonatomic) NSString *musicObjectIdentifier; // @synthesize musicObjectIdentifier;
@property(retain, nonatomic) WBAudioStreamEngine *engine; // @synthesize engine;
@property(nonatomic) long long playMode; // @synthesize playMode;
@property(retain, nonatomic) WBMusicItem *currentMusicItem; // @synthesize currentMusicItem;
@property(retain, nonatomic) NSMutableArray *musicItems; // @synthesize musicItems;
- (void).cxx_destruct;
- (void)closeFloatWindow;
- (id)logParamsWithDictionay:(id)arg1;
- (id)playingMusicItem;
- (id)player;
- (_Bool)isPlayerItemIdle:(id)arg1;
- (_Bool)isPlayerItemWaiting:(id)arg1;
- (_Bool)isPlayerItemPaused:(id)arg1;
- (_Bool)isPlayerItemPlaying:(id)arg1;
- (void)playPreviousMusicItem;
- (void)endBackgroundTask;
- (void)beginBackgroundTask;
- (void)playNextMusicItem;
- (void)playTimeChanged;
- (void)handleMusicItemPlayStatusChanged:(id)arg1;
- (void)sendPlayTimeToServer:(id)arg1;
- (void)sendProgressRecord;
- (void)createProgressTimer;
@property(nonatomic) _Bool isRequestingMeta; // @synthesize isRequestingMeta;
- (void)stop;
- (void)checkoutVActionWithMusicControl:(id)arg1 musicItem:(id)arg2;
- (void)playMusicItemAtIndex:(unsigned long long)arg1 musicControl:(id)arg2;
- (void)playMusicItemAtIndex:(unsigned long long)arg1;
- (void)setPlayerItem:(id)arg1 identifier:(id)arg2 andContextID:(id)arg3 analysisParameters:(id)arg4 musicControl:(id)arg5;
- (void)sendFetchMusicMetaDataRequest:(id)arg1 sourceID:(id)arg2 musicControl:(id)arg3;
- (void)setPlayerItem:(id)arg1 identifier:(id)arg2 andContextID:(id)arg3 musicControl:(id)arg4;
- (void)dealloc;
- (id)init;

@end

