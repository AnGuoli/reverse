//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSDate, NSMutableArray, NSMutableDictionary, NSString, SnsObject, SnsWeAppInfo, UserOpInfo, WCActionInfo, WCAppInfo, WCAppMsgShareInfo, WCDataItem, WCFinderShareToMomentsItem, WCFinderTopicShareItem, WCLocationInfo, WCMusicInfo, WCNoteInfo, WCStreamVideoInfo, WCVideoFlowInfo, WCWeAppInfo;

@interface WCUploadTask : NSObject <NSCoding>
{
    NSString *serverID;
    NSString *clientID;
    int type;
    _Bool isPrivate;
    NSMutableArray *sharedGroupIDs;
    _Bool isSyncToWeibo;
    _Bool isSyncToFacebook;
    _Bool isSyncToTwitter;
    _Bool isSyncToQZone;
    NSString *statisticsData;
    WCLocationInfo *locationInfo;
    SnsWeAppInfo *snsWeAppInfo;
    NSString *linkUrl;
    NSString *title;
    NSString *desc;
    NSString *contentDesc;
    int contentDescShowType;
    int contentDescScene;
    unsigned int contentAttributeBitSetFlag;
    WCAppInfo *appInfo;
    WCActionInfo *actionInfo;
    WCMusicInfo *musicInfo;
    WCStreamVideoInfo *streaVideoInfo;
    WCWeAppInfo *weappInfo;
    NSString *sourceUserName;
    NSString *sourceNickName;
    NSMutableArray *groupUserList;
    NSMutableArray *blackUserList;
    NSMutableArray *withUserList;
    NSMutableArray *mediaList;
    SnsObject *snsObj;
    WCDataItem *dataItem;
    NSDate *createTime;
    int uploadResult;
    int BGImgSetType;
    _Bool isUploadFailed;
    int postSource;
    NSString *twitterOAuthToken;
    NSString *twitterOAuthTokenSecret;
    _Bool isDeleted;
    UserOpInfo *opInfo;
    int sightFolded;
    int showFlag;
    WCNoteInfo *noteInfo;
    WCVideoFlowInfo *videoFlowInfo;
    WCAppMsgShareInfo *appMsgShareInfo;
    WCStreamVideoInfo *streamVideoInfo;
    NSString *shareOriginUrl;
    NSString *shareOpenUrl;
    NSString *jsAppId;
    NSMutableDictionary *statParasDic;
    NSString *statExtStr;
    NSString *canvasInfoXml;
    SnsWeAppInfo *_snsWeAppInfo;
    unsigned long long _tempUserCount;
    unsigned long long _contactTagCount;
    WCFinderShareToMomentsItem *_finderShareToMomentsItem;
    WCFinderTopicShareItem *_finderTopicShareItem;
}

+ (id)genUploadTaskForSight:(id)arg1 andThumbPath:(id)arg2 sightDraft:(id)arg3;
@property(retain, nonatomic) WCFinderTopicShareItem *finderTopicShareItem; // @synthesize finderTopicShareItem=_finderTopicShareItem;
@property(retain, nonatomic) WCFinderShareToMomentsItem *finderShareToMomentsItem; // @synthesize finderShareToMomentsItem=_finderShareToMomentsItem;
@property(nonatomic) unsigned long long contactTagCount; // @synthesize contactTagCount=_contactTagCount;
@property(nonatomic) unsigned long long tempUserCount; // @synthesize tempUserCount=_tempUserCount;
@property(retain, nonatomic) SnsWeAppInfo *snsWeAppInfo; // @synthesize snsWeAppInfo=_snsWeAppInfo;
@property(retain, nonatomic) WCAppMsgShareInfo *appMsgShareInfo; // @synthesize appMsgShareInfo;
@property(retain, nonatomic) WCVideoFlowInfo *videoFlowInfo; // @synthesize videoFlowInfo;
@property(retain, nonatomic) WCNoteInfo *noteInfo; // @synthesize noteInfo;
@property(nonatomic) int showFlag; // @synthesize showFlag;
@property(nonatomic) int sightFolded; // @synthesize sightFolded;
@property(retain, nonatomic) NSString *canvasInfoXml; // @synthesize canvasInfoXml;
@property(retain, nonatomic) NSString *statExtStr; // @synthesize statExtStr;
@property(retain, nonatomic) UserOpInfo *opInfo; // @synthesize opInfo;
@property(retain, nonatomic) NSMutableDictionary *statParasDic; // @synthesize statParasDic;
@property(retain, nonatomic) NSString *jsAppId; // @synthesize jsAppId;
@property(retain, nonatomic) NSString *shareOpenUrl; // @synthesize shareOpenUrl;
@property(retain, nonatomic) NSString *shareOriginUrl; // @synthesize shareOriginUrl;
@property(retain, nonatomic) NSMutableArray *groupUserList; // @synthesize groupUserList;
@property(nonatomic) _Bool isDeleted; // @synthesize isDeleted;
@property(retain, nonatomic) NSMutableArray *blackUserList; // @synthesize blackUserList;
@property(retain, nonatomic) WCLocationInfo *locationInfo; // @synthesize locationInfo;
@property(retain, nonatomic) WCStreamVideoInfo *streamVideoInfo; // @synthesize streamVideoInfo;
@property(retain, nonatomic) WCWeAppInfo *weappInfo; // @synthesize weappInfo;
@property(retain, nonatomic) WCMusicInfo *musicInfo; // @synthesize musicInfo;
@property(retain, nonatomic) WCActionInfo *actionInfo; // @synthesize actionInfo;
@property(retain, nonatomic) NSString *statisticsData; // @synthesize statisticsData;
@property(retain, nonatomic) NSString *twitterOAuthTokenSecret; // @synthesize twitterOAuthTokenSecret;
@property(retain, nonatomic) NSString *twitterOAuthToken; // @synthesize twitterOAuthToken;
@property(nonatomic) int postSource; // @synthesize postSource;
@property(retain, nonatomic) NSMutableArray *sharedGroupIDs; // @synthesize sharedGroupIDs;
@property(nonatomic) _Bool isUploadFailed; // @synthesize isUploadFailed;
@property(nonatomic) int BGImgSetType; // @synthesize BGImgSetType;
@property(nonatomic) unsigned int contentAttributeBitSetFlag; // @synthesize contentAttributeBitSetFlag;
@property(nonatomic) int contentDescScene; // @synthesize contentDescScene;
@property(nonatomic) int contentDescShowType; // @synthesize contentDescShowType;
@property(retain, nonatomic) NSString *contentDesc; // @synthesize contentDesc;
@property(retain, nonatomic) NSString *sourceNickName; // @synthesize sourceNickName;
@property(retain, nonatomic) NSString *sourceUserName; // @synthesize sourceUserName;
@property(retain, nonatomic) WCAppInfo *appInfo; // @synthesize appInfo;
@property(retain, nonatomic) NSString *linkUrl; // @synthesize linkUrl;
@property(retain, nonatomic) WCDataItem *dataItem; // @synthesize dataItem;
@property(nonatomic) int uploadResult; // @synthesize uploadResult;
@property(retain, nonatomic) NSDate *createTime; // @synthesize createTime;
@property(retain, nonatomic) SnsObject *snsObj; // @synthesize snsObj;
@property(retain, nonatomic) NSMutableArray *mediaList; // @synthesize mediaList;
@property(retain, nonatomic) NSMutableArray *withUserList; // @synthesize withUserList;
@property(retain, nonatomic) NSString *desc; // @synthesize desc;
@property(retain, nonatomic) NSString *title; // @synthesize title;
@property(nonatomic) _Bool isSyncToQZone; // @synthesize isSyncToQZone;
@property(nonatomic) _Bool isSyncToTwitter; // @synthesize isSyncToTwitter;
@property(nonatomic) _Bool isSyncToFacebook; // @synthesize isSyncToFacebook;
@property(nonatomic) _Bool isSyncToWeibo; // @synthesize isSyncToWeibo;
@property(nonatomic) _Bool isPrivate; // @synthesize isPrivate;
@property(nonatomic) int type; // @synthesize type;
@property(retain, nonatomic) NSString *clientID; // @synthesize clientID;
@property(retain, nonatomic) NSString *serverID; // @synthesize serverID;
- (void).cxx_destruct;
- (void)setOriginal:(_Bool)arg1;
- (void)setDeleted;
- (id)description;
- (void)setUploadFailedStatus:(_Bool)arg1;
- (_Bool)isLocationValide;
- (void)addThumbForPrevMedia:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

