//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface XMNpBehavior : NSObject
{
    NSString *_srcModule;
}

@property(retain, nonatomic) NSString *srcModule; // @synthesize srcModule=_srcModule;
- (void).cxx_destruct;
- (void)_postCommonTrack:(id)arg1 serviceId:(id)arg2;
- (void)postShowMoreRelatedAlbumTrack:(id)arg1;
- (void)postTagTrack:(id)arg1 tag:(id)arg2;
- (void)postTimesSpeedTrack:(id)arg1;
- (void)postPauseTrack:(id)arg1;
- (void)postPlayTrack:(id)arg1;
- (void)postFastReverseTrack:(id)arg1;
- (void)postFastForwardTrack:(id)arg1;
- (void)postSelectSharePlatform:(id)arg1 album:(id)arg2 type:(id)arg3 hasGift:(_Bool)arg4;
- (void)postSelectSharePlatform:(id)arg1 type:(id)arg2;
- (void)postShareToastTrack:(id)arg1;
- (void)postClockTrack:(id)arg1;
- (void)postOpenHistoryPageTrack:(id)arg1;
- (void)postOpenCommentPageTrack:(id)arg1 onlyshow:(_Bool)arg2;
- (void)postTimeCloseTrack:(id)arg1;
- (void)postMoreButtonTrack:(id)arg1;
- (void)postPlayListTrack:(id)arg1;
- (void)postBulletTrack:(id)arg1 isOpen:(_Bool)arg2;
- (void)postStartDownloadTrack:(id)arg1;
- (void)postRelayTrack:(id)arg1;
- (void)postLikeTrack:(id)arg1 like:(_Bool)arg2;
- (void)postFreeTraffic;
- (void)postOpenAlbumDataTrack:(id)arg1 albumItem:(id)arg2;
- (void)postBuyAlbumDataTrack:(id)arg1;
- (void)postShowVIPAlertTopDataTrack:(id)arg1;
- (void)postShowSoundAlertTopDataTrack:(id)arg1;
- (void)postShowPlayingViewDataTrack:(id)arg1 album:(id)arg2;
- (void)postClickNextTrackBtn;
- (void)postClickPreTrackBtn;
- (void)dealloc;

@end

