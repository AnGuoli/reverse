//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBModelObject.h"

#import "NSCoding-Protocol.h"
#import "WBMediaExposureItemType-Protocol.h"
#import "WBMediaPlaybackItem-Protocol.h"
#import "WBPromotionProvider-Protocol.h"

@class NSArray, NSDictionary, NSMutableDictionary, NSString, NSURL, WBPromotion, WBVideoAlbumBannerItem, WBVideoPlayingStatisticModel, WBVideoStoryboard, WBVideoURLItemGroup;

@interface WBVideoItem : WBModelObject <WBPromotionProvider, WBMediaExposureItemType, WBMediaPlaybackItem, NSCoding>
{
    _Bool _enablePlay;
    _Bool _hasRecommendationFeed;
    _Bool _isAdDownloaded;
    _Bool _isFilterDuplicated;
    _Bool _appleAd;
    _Bool _keepCurrentMblog;
    _Bool _videoFeedShowCustomBackground;
    _Bool _isGifVideo;
    _Bool _isVplusVideo;
    _Bool _isVplusVideoPaid;
    _Bool _videoPlaybackUnmute;
    _Bool _isContribution;
    _Bool _loadedFromRemote;
    _Bool _subscribed;
    NSString *_storageType;
    NSString *_CDNInfo;
    NSString *_identifier;
    NSString *_videoUniqueID;
    NSString *_manifestMediaID;
    NSString *_scid;
    NSString *_h5Url;
    NSString *_orientation;
    double _duration;
    NSString *_name;
    long long _autoPlayType;
    long long _preloadType;
    long long _preloadSize;
    NSString *_hint;
    NSURL *_url4InchMP4HD;
    NSURL *_url5InchMP4HD;
    NSURL *_url5p5InchMP4HD;
    WBVideoURLItemGroup *_defaultURLGroup;
    NSString *_urlGroupType;
    NSString *_encodeMode;
    NSString *_playCountStr;
    NSString *_videoSource;
    NSDictionary *_hotTagDict;
    NSArray *_videoSourceUrlStruct;
    long long _liveSource;
    NSString *_liveSourceIconUrl;
    NSString *_realChatRoomUsersStr;
    NSString *_prevue_number;
    double _liveStartTime;
    NSString *_liveTipsIconUrl;
    unsigned long long _playCountNumber;
    double _liveReplayDuration;
    NSString *_videoFeedTitle;
    NSString *_videoPreviewTitle;
    NSString *_videoFeedBg_320;
    NSString *_videoFeedBg_375;
    NSString *_videoFeedBg_414;
    NSString *_gifOriginalImageUrl;
    NSString *_openScheme;
    NSArray *_instreamAds;
    NSArray *_completeActionItems;
    WBVideoStoryboard *_storyboard;
    long long _videoPublishTime;
    long long _playLoopType;
    NSString *_videoUid;
    NSString *_authorMid;
    NSString *_authorName;
    NSDictionary *_extraInfoDict;
    double _displayDuration;
    NSString *_videoTailInfo;
    long long _videoRank;
    NSString *_videoTitle;
    NSString *_adSource;
    long long _originBitrate;
    NSArray *_videoTags;
    NSString *_secondLevelChannelId;
    NSString *_firstLevelChannelId;
    NSDictionary *_actionLog;
    NSDictionary *_promotionDic;
    NSDictionary *_backPasterInfo;
    long long _authorVerifiedType;
    NSArray *_protocols;
    WBVideoAlbumBannerItem *_albumBanner;
    NSDictionary *_additionalPlaybackHTTPHeaderFields;
    NSString *_playlistId;
    NSString *_traceId;
    NSDictionary *_downloadStrategy;
    NSDictionary *_danmakuInfo;
    NSString *_noticeDanmaku;
    NSString *_scheme;
    long long _jumpTo;
    long long _realChatRoomUsers;
    long long _replayCount;
}

+ (_Bool)updateVideoItemURLType:(id)arg1 status:(id)arg2;
+ (void)removeVideoItemURLTypeUpdaterForKey:(id)arg1;
+ (void)registeVideoItemURLTypeUpdater:(id)arg1 forKey:(id)arg2;
+ (id)urlTypeUpdaterForKey:(id)arg1;
+ (id)VideoItemURLTypeUpdaterMap;
+ (void)removeVideoItemURLUpdaterForKey:(id)arg1;
+ (void)registeVideoItemURLUpdater:(id)arg1 forKey:(id)arg2;
+ (id)urlUpdaterForKey:(id)arg1;
+ (void)updateVideoItemURL:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
+ (id)VideoItemURLUpdaterMap;
+ (void)vp_showProgressHUDWithText:(id)arg1 image:(id)arg2;
+ (unsigned long long)vp_supportedTaskTypesForPosition:(long long)arg1;
+ (void)setCurrentVideoItemLuckyMoneyFlewedIdentifier:(id)arg1;
+ (id)currentVideoItemLuckyMoneyFlewedIdentifier;
+ (void)setCurrentVideoItemButtonsState:(unsigned long long)arg1 forIdentifier:(id)arg2;
+ (unsigned long long)currentVideoItemButtonsStateForIdentifier:(id)arg1;
+ (id)_VideoItemIdentifierMap;
+ (id)VideoURLItemKeyForResourceType:(long long)arg1;
+ (void)vp_cleanAllPlayerStates;
+ (id)vp_videpPlayingStatisticModelMap;
+ (id)preferedURLFetchArray;
+ (id)vp_videoStatisticModelForVideoItem:(id)arg1;
@property(nonatomic) long long replayCount; // @synthesize replayCount=_replayCount;
@property(nonatomic) long long realChatRoomUsers; // @synthesize realChatRoomUsers=_realChatRoomUsers;
@property(nonatomic) long long jumpTo; // @synthesize jumpTo=_jumpTo;
@property(retain, nonatomic) NSString *scheme; // @synthesize scheme=_scheme;
@property(retain, nonatomic) NSString *noticeDanmaku; // @synthesize noticeDanmaku=_noticeDanmaku;
@property(retain, nonatomic) NSDictionary *danmakuInfo; // @synthesize danmakuInfo=_danmakuInfo;
@property(retain, nonatomic) NSDictionary *downloadStrategy; // @synthesize downloadStrategy=_downloadStrategy;
@property(nonatomic) _Bool subscribed; // @synthesize subscribed=_subscribed;
@property(copy, nonatomic) NSString *traceId; // @synthesize traceId=_traceId;
@property(retain, nonatomic) NSString *playlistId; // @synthesize playlistId=_playlistId;
@property(copy, nonatomic) NSDictionary *additionalPlaybackHTTPHeaderFields; // @synthesize additionalPlaybackHTTPHeaderFields=_additionalPlaybackHTTPHeaderFields;
@property(readonly, nonatomic) _Bool loadedFromRemote; // @synthesize loadedFromRemote=_loadedFromRemote;
@property(retain, nonatomic) WBVideoAlbumBannerItem *albumBanner; // @synthesize albumBanner=_albumBanner;
@property(readonly, nonatomic) NSArray *protocols; // @synthesize protocols=_protocols;
@property(nonatomic) long long authorVerifiedType; // @synthesize authorVerifiedType=_authorVerifiedType;
@property(readonly, copy, nonatomic) NSDictionary *backPasterInfo; // @synthesize backPasterInfo=_backPasterInfo;
@property(retain, nonatomic) NSDictionary *promotionDic; // @synthesize promotionDic=_promotionDic;
@property(retain, nonatomic) NSDictionary *actionLog; // @synthesize actionLog=_actionLog;
@property(copy, nonatomic) NSString *firstLevelChannelId; // @synthesize firstLevelChannelId=_firstLevelChannelId;
@property(copy, nonatomic) NSString *secondLevelChannelId; // @synthesize secondLevelChannelId=_secondLevelChannelId;
@property(nonatomic) _Bool isContribution; // @synthesize isContribution=_isContribution;
@property(nonatomic) _Bool videoPlaybackUnmute; // @synthesize videoPlaybackUnmute=_videoPlaybackUnmute;
@property(retain, nonatomic) NSArray *videoTags; // @synthesize videoTags=_videoTags;
@property(nonatomic) long long originBitrate; // @synthesize originBitrate=_originBitrate;
@property(retain, nonatomic) NSString *adSource; // @synthesize adSource=_adSource;
@property(retain, nonatomic) NSString *videoTitle; // @synthesize videoTitle=_videoTitle;
@property(nonatomic) long long videoRank; // @synthesize videoRank=_videoRank;
@property(retain, nonatomic) NSString *videoTailInfo; // @synthesize videoTailInfo=_videoTailInfo;
@property(nonatomic) double displayDuration; // @synthesize displayDuration=_displayDuration;
@property(retain, nonatomic) NSDictionary *extraInfoDict; // @synthesize extraInfoDict=_extraInfoDict;
@property(copy, nonatomic) NSString *authorName; // @synthesize authorName=_authorName;
@property(copy, nonatomic) NSString *authorMid; // @synthesize authorMid=_authorMid;
@property(copy, nonatomic) NSString *videoUid; // @synthesize videoUid=_videoUid;
@property(nonatomic) _Bool isVplusVideoPaid; // @synthesize isVplusVideoPaid=_isVplusVideoPaid;
@property(nonatomic) _Bool isVplusVideo; // @synthesize isVplusVideo=_isVplusVideo;
@property(nonatomic) long long playLoopType; // @synthesize playLoopType=_playLoopType;
@property(nonatomic) long long videoPublishTime; // @synthesize videoPublishTime=_videoPublishTime;
@property(readonly, nonatomic) WBVideoStoryboard *storyboard; // @synthesize storyboard=_storyboard;
@property(copy, nonatomic) NSArray *completeActionItems; // @synthesize completeActionItems=_completeActionItems;
@property(readonly, nonatomic) NSArray *instreamAds; // @synthesize instreamAds=_instreamAds;
@property(copy, nonatomic) NSString *openScheme; // @synthesize openScheme=_openScheme;
@property(copy, nonatomic) NSString *gifOriginalImageUrl; // @synthesize gifOriginalImageUrl=_gifOriginalImageUrl;
@property(nonatomic) _Bool isGifVideo; // @synthesize isGifVideo=_isGifVideo;
@property(copy, nonatomic) NSString *videoFeedBg_414; // @synthesize videoFeedBg_414=_videoFeedBg_414;
@property(copy, nonatomic) NSString *videoFeedBg_375; // @synthesize videoFeedBg_375=_videoFeedBg_375;
@property(copy, nonatomic) NSString *videoFeedBg_320; // @synthesize videoFeedBg_320=_videoFeedBg_320;
@property(nonatomic) _Bool videoFeedShowCustomBackground; // @synthesize videoFeedShowCustomBackground=_videoFeedShowCustomBackground;
@property(copy, nonatomic) NSString *videoPreviewTitle; // @synthesize videoPreviewTitle=_videoPreviewTitle;
@property(copy, nonatomic) NSString *videoFeedTitle; // @synthesize videoFeedTitle=_videoFeedTitle;
@property(nonatomic) double liveReplayDuration; // @synthesize liveReplayDuration=_liveReplayDuration;
@property(nonatomic) _Bool keepCurrentMblog; // @synthesize keepCurrentMblog=_keepCurrentMblog;
@property(nonatomic) unsigned long long playCountNumber; // @synthesize playCountNumber=_playCountNumber;
@property(copy, nonatomic) NSString *liveTipsIconUrl; // @synthesize liveTipsIconUrl=_liveTipsIconUrl;
@property(nonatomic) double liveStartTime; // @synthesize liveStartTime=_liveStartTime;
@property(copy, nonatomic) NSString *prevue_number; // @synthesize prevue_number=_prevue_number;
@property(copy, nonatomic) NSString *realChatRoomUsersStr; // @synthesize realChatRoomUsersStr=_realChatRoomUsersStr;
@property(copy, nonatomic) NSString *liveSourceIconUrl; // @synthesize liveSourceIconUrl=_liveSourceIconUrl;
@property(nonatomic) long long liveSource; // @synthesize liveSource=_liveSource;
@property(retain, nonatomic) NSArray *videoSourceUrlStruct; // @synthesize videoSourceUrlStruct=_videoSourceUrlStruct;
@property(nonatomic) _Bool appleAd; // @synthesize appleAd=_appleAd;
@property(retain, nonatomic) NSDictionary *hotTagDict; // @synthesize hotTagDict=_hotTagDict;
@property(copy, nonatomic) NSString *videoSource; // @synthesize videoSource=_videoSource;
@property(copy, nonatomic) NSString *playCountStr; // @synthesize playCountStr=_playCountStr;
@property(nonatomic) _Bool isFilterDuplicated; // @synthesize isFilterDuplicated=_isFilterDuplicated;
@property(nonatomic) _Bool isAdDownloaded; // @synthesize isAdDownloaded=_isAdDownloaded;
@property(copy, nonatomic) NSString *encodeMode; // @synthesize encodeMode=_encodeMode;
@property(nonatomic) _Bool hasRecommendationFeed; // @synthesize hasRecommendationFeed=_hasRecommendationFeed;
@property(copy, nonatomic) NSString *urlGroupType; // @synthesize urlGroupType=_urlGroupType;
@property(retain, nonatomic) WBVideoURLItemGroup *defaultURLGroup; // @synthesize defaultURLGroup=_defaultURLGroup;
@property(readonly, copy, nonatomic) NSURL *url5p5InchMP4HD; // @synthesize url5p5InchMP4HD=_url5p5InchMP4HD;
@property(readonly, copy, nonatomic) NSURL *url5InchMP4HD; // @synthesize url5InchMP4HD=_url5InchMP4HD;
@property(readonly, copy, nonatomic) NSURL *url4InchMP4HD; // @synthesize url4InchMP4HD=_url4InchMP4HD;
@property(copy, nonatomic) NSString *hint; // @synthesize hint=_hint;
@property(nonatomic) long long preloadSize; // @synthesize preloadSize=_preloadSize;
@property(nonatomic) long long preloadType; // @synthesize preloadType=_preloadType;
@property(nonatomic) long long autoPlayType; // @synthesize autoPlayType=_autoPlayType;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(copy, nonatomic) NSString *orientation; // @synthesize orientation=_orientation;
@property(nonatomic) _Bool enablePlay; // @synthesize enablePlay=_enablePlay;
@property(copy, nonatomic) NSString *h5Url; // @synthesize h5Url=_h5Url;
@property(copy, nonatomic) NSString *scid; // @synthesize scid=_scid;
@property(copy, nonatomic) NSString *manifestMediaID; // @synthesize manifestMediaID=_manifestMediaID;
@property(copy, nonatomic) NSString *videoUniqueID; // @synthesize videoUniqueID=_videoUniqueID;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSString *CDNInfo; // @synthesize CDNInfo=_CDNInfo;
@property(copy, nonatomic) NSString *storageType; // @synthesize storageType=_storageType;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSURL *localURL;
@property(readonly, copy, nonatomic) NSURL *url720H265;
@property(readonly, copy, nonatomic) NSURL *url720H264;
@property(readonly, copy, nonatomic) NSURL *urlH265Mp4HD;
@property(readonly, copy, nonatomic) NSURL *urlH265Mp4;
@property(readonly, copy, nonatomic) NSURL *urlMp4HD;
@property(readonly, copy, nonatomic) NSURL *urlMp4;
@property(readonly, copy, nonatomic) NSURL *urlHD;
@property(readonly, copy, nonatomic) NSURL *url;
- (id)_mockInstreamAdForMediaInfo:(id)arg1;
- (id)_mockLeftGifButtonForMediaInfo:(id)arg1;
- (id)formatStrFromNumber:(long long)arg1;
- (id)replayCountStringForLive;
- (id)finalPlayCountString;
- (id)dictionaryWithValues;
- (void)updateItemLoadedFromRemote:(_Bool)arg1;
- (void)updateVideoProtocols:(id)arg1 withManifestID:(id)arg2;
- (void)updateVideoDanmakuInfoWithPlayerTime:(CDStruct_1b6d18a9)arg1;
- (void)updateVideoIteminstreamAds:(id)arg1;
- (_Bool)downloadEnable;
- (_Bool)mustLoop;
- (id)pasterBackRequestParam;
- (_Bool)needUpdateInstreamAds;
- (_Bool)shouldParsePromotionDict;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (_Bool)updateWithDictionary:(id)arg1;
- (_Bool)updateWithJSONDictionary:(id)arg1;
- (_Bool)_updateWithDictionary:(id)arg1;
@property(readonly, nonatomic) _Bool monitorsStatusPromotion;
@property(readonly, nonatomic) WBPromotion *promotion;
- (id)wbst_availableURL;
- (_Bool)wbst_hasValidURL;
- (id)wbst_urlArray;
- (void)prependRankBadgeToText:(id)arg1;
@property(readonly, nonatomic) NSDictionary *mediaExposureLog;
@property(readonly, nonatomic) NSString *mediaExposureIdentifier;
- (_Bool)equalToMediaPlaybackItem:(id)arg1;
- (_Bool)canPerformMediaAutoPlay;
@property(readonly, nonatomic) NSString *mediaAutoPlayContextID;
@property(readonly, nonatomic) NSString *mediaPlaybackIdentifier;
@property(copy, nonatomic) NSString *vp_authorId;
- (void)vp_downloadAndSaveGifImageWithExtraParameters:(id)arg1;
@property(nonatomic) unsigned long long vp_playToEndTimes;
@property(nonatomic) _Bool vp_gifImageSaved;
- (void)vp_updateLocalURL;
- (id)vp_actionItemsWithPosition:(long long)arg1;
- (void)updateCompletionActions:(id)arg1;
@property(readonly, nonatomic) NSArray *vp_callToActionItems;
- (void)setVideoURLItemGroup:(id)arg1 forKey:(id)arg2;
- (id)videoURLItemGroupForKey:(id)arg1;
@property(copy, nonatomic) NSString *vp_titleCustomIcon;
@property(copy, nonatomic) NSString *vp_fullScreenBackgroundImageUrl414;
@property(copy, nonatomic) NSString *vp_fullScreenBackgroundImageUrl375;
@property(copy, nonatomic) NSString *vp_fullScreenBackgroundImageUrl320;
@property(copy, nonatomic) NSString *vp_fullScreenBackgroundImageName;
@property(retain, nonatomic) NSMutableDictionary *vp_recommendationActionLog;
@property(nonatomic) _Bool vp_initialItemOfRecommendation;
@property(nonatomic) _Bool vp_updateMediaAntiLeechDisabled;
- (void)setURL:(id)arg1 forPlaybackResourceType:(long long)arg2;
- (id)URLForPlaybackResourceType:(long long)arg1;
- (void)setVideoURLItem:(id)arg1 forPlaybackResourceType:(long long)arg2;
- (id)videoURLItemForPlaybackResourceType:(long long)arg1;
@property(readonly, copy, nonatomic) NSString *vp_videoIdentifier;
- (_Bool)vp_playbackEqualToVideoItem:(id)arg1;
@property(readonly, nonatomic) _Bool vp_canAdoptFreeDataUsage;
@property(readonly, nonatomic) _Bool vp_cacheable;
@property(nonatomic) unsigned long long vp_likeState;
@property(nonatomic) _Bool vp_explicitlyClosedOrPausedByUser;
@property(readonly, nonatomic) CDStruct_1b6d18a9 vp_duration;
@property(readonly, nonatomic) _Bool vp_pausedTimeValid;
@property(readonly, nonatomic) CDStruct_1b6d18a9 vp_pausedTime;
- (void)vp_setPausedTimeWithPlayerItem:(id)arg1;
- (void)vp_setPausedTime:(CDStruct_1b6d18a9)arg1 duration:(CDStruct_1b6d18a9)arg2;
@property(readonly, nonatomic) WBVideoPlayingStatisticModel *vp_videoStatisiticModel;
- (id)businessButtonsLog;
- (_Bool)playbackUrlValid;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

