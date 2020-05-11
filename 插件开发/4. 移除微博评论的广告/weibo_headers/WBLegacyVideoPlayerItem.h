//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVFoundation/AVPlayerItem.h>

#import "WBVideoPlayerItem-Protocol.h"

@class NSArray, NSError, NSString, NSURL, WBVideoExperimentContextSnapshot, WBVideoItem, WBVideoPlayerItemPlaybackLog, WBVideoSceneQualityConfig;
@protocol WBFAVAsset, WBFAVMediaSelection, WBVideoCastingDevice, WBVideoPlaybackResource;

@interface WBLegacyVideoPlayerItem : AVPlayerItem <WBVideoPlayerItem>
{
    struct {
        unsigned int loadingResource:1;
        unsigned int pendingStopResourceLoadingWhenStatusChange:1;
    } _flags;
    _Bool _autoSelectedResource;
    WBVideoSceneQualityConfig *_automaticMediaSelectionSceneConfig;
    WBVideoExperimentContextSnapshot *_experimentContextSnapshot;
    id <WBVideoPlaybackResource> _playbackResource;
    NSArray *_availablePlaybackResources;
    WBVideoItem *_videoItem;
    NSURL *_originalURL;
    NSURL *_playbackURL;
    double _readyTimestamp;
    double _creationTimestamp;
    WBVideoPlayerItemPlaybackLog *_playbackLog;
    unsigned long long _contentAccessScopes;
}

+ (id)createPlayerWithPlayerItem:(id)arg1;
+ (void)queryLocalCacheStatusWithURL:(id)arg1 playbackIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (id)playerItemWithVideoItem:(id)arg1 options:(CDStruct_692c7470)arg2;
@property(nonatomic) unsigned long long contentAccessScopes; // @synthesize contentAccessScopes=_contentAccessScopes;
@property(nonatomic) _Bool autoSelectedResource; // @synthesize autoSelectedResource=_autoSelectedResource;
@property(retain, nonatomic) WBVideoPlayerItemPlaybackLog *playbackLog; // @synthesize playbackLog=_playbackLog;
@property(nonatomic) double creationTimestamp; // @synthesize creationTimestamp=_creationTimestamp;
@property(nonatomic) double readyTimestamp; // @synthesize readyTimestamp=_readyTimestamp;
@property(retain, nonatomic) NSURL *playbackURL; // @synthesize playbackURL=_playbackURL;
@property(retain, nonatomic) NSURL *originalURL; // @synthesize originalURL=_originalURL;
@property(retain, nonatomic) WBVideoItem *videoItem; // @synthesize videoItem=_videoItem;
@property(retain, nonatomic) NSArray *availablePlaybackResources; // @synthesize availablePlaybackResources=_availablePlaybackResources;
@property(retain, nonatomic) id <WBVideoPlaybackResource> playbackResource; // @synthesize playbackResource=_playbackResource;
@property(readonly, nonatomic) WBVideoExperimentContextSnapshot *experimentContextSnapshot; // @synthesize experimentContextSnapshot=_experimentContextSnapshot;
@property(retain, nonatomic) WBVideoSceneQualityConfig *automaticMediaSelectionSceneConfig; // @synthesize automaticMediaSelectionSceneConfig=_automaticMediaSelectionSceneConfig;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool playbackAboutComplete;
@property(readonly, nonatomic) long long playbackBitrate;
@property(readonly, nonatomic) NSString *playbackIdentifier;
- (void)didPerformUserSeek;
- (void)willPerformUserSeek;
- (void)didFinishPlaybackLogEvent;
- (void)willFinishPlaybackLogEvent;
- (void)resourceCacheSegmentDidReceiveDataNotification:(id)arg1;
- (void)resourceLoaderDidGetErrorNotification:(id)arg1;
- (void)resourceLoaderDidReceiveResponseNotification:(id)arg1;
- (void)resourceLoaderWillRedirectToRequestNotification:(id)arg1;
- (void)resourceLoaderWillSendRequestNotification:(id)arg1;
- (void)resourceLoaderDidHitCacheNotification:(id)arg1;
- (_Bool)isConrespondingResourceCacheSegment:(id)arg1;
- (_Bool)isConrespondingResourceLoader:(id)arg1;
@property(readonly, nonatomic) id <WBVideoCastingDevice> castingDevice;
- (id)currentPlaybackLogEvent;
- (void)setupResourceLoaderNotifications;
- (id)debugContextData:(id)arg1;
- (void)statusUpdateDidCallbackToObserver;
- (void)statusUpdateWillCallbackToObserver;
- (void)didChangeValueForKey:(id)arg1;
- (void)stopResourceLoadingIgnoresStatus:(_Bool)arg1;
- (void)stopResourceLoading;
- (void)startResourceLoading;
- (CDStruct_1b6d18a9)currentTime;
- (void)dealloc;

// Remaining properties
@property(readonly, nonatomic) id <WBFAVAsset> asset;
@property(nonatomic) long long automaticMediaSelectionMaximumResolution;
@property(nonatomic) long long automaticMediaSelectionPreferedResolution;
@property(readonly, nonatomic) _Bool cacheModuleActive;
@property(readonly, nonatomic) id <WBFAVMediaSelection> currentMediaSelection;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) CDStruct_1b6d18a9 duration;
@property(readonly, nonatomic) NSError *error;
@property(readonly) unsigned long long hash;
@property(readonly) CDStruct_1b6d18a9 loadedTimeDuration;
@property(readonly, nonatomic) NSArray *loadedTimeRanges;
@property(readonly, nonatomic, getter=isPlaybackLikelyToKeepUp) _Bool playbackLikelyToKeepUp;
@property(nonatomic) double playbackMaximumBufferDuration;
@property(readonly, nonatomic) struct CGSize presentationSize;
@property(readonly, nonatomic) double startupTime;
@property(readonly, nonatomic) long long status;
@property(readonly) Class superclass;

@end

