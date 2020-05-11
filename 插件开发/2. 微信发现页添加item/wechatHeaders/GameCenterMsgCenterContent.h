//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GameCenterMsgSourceInfo, GameJumpInfo, NSMutableArray, NSString;

@interface GameCenterMsgCenterContent : NSObject
{
    unsigned int _createTime;
    unsigned int _type;
    unsigned int _msgReportType;
    unsigned int _localId;
    NSString *_headUrl;
    NSString *_username;
    NSString *_nickName;
    NSString *_headJumpUrl;
    NSString *_nickNameJumpUrl;
    NSString *_badgeIconUrl;
    NSString *_subtitle;
    NSMutableArray *_mergeUserList;
    NSString *_firstLineContent;
    NSString *_secondLineContent;
    NSString *_secondLineIconUrl;
    GameJumpInfo *_secondLineJumpInfo;
    NSString *_contentPicUrl;
    GameJumpInfo *_contentPicJumpInfo;
    GameCenterMsgSourceInfo *_sourceInfo;
    GameJumpInfo *_msgCardInfo;
    NSString *_svrMsgId;
    NSString *_noticeId;
    NSString *_appId;
    NSString *_reportExtData;
}

@property(retain, nonatomic) NSString *reportExtData; // @synthesize reportExtData=_reportExtData;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) NSString *noticeId; // @synthesize noticeId=_noticeId;
@property(retain, nonatomic) NSString *svrMsgId; // @synthesize svrMsgId=_svrMsgId;
@property(nonatomic) unsigned int localId; // @synthesize localId=_localId;
@property(nonatomic) unsigned int msgReportType; // @synthesize msgReportType=_msgReportType;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(retain, nonatomic) GameJumpInfo *msgCardInfo; // @synthesize msgCardInfo=_msgCardInfo;
@property(retain, nonatomic) GameCenterMsgSourceInfo *sourceInfo; // @synthesize sourceInfo=_sourceInfo;
@property(nonatomic) unsigned int createTime; // @synthesize createTime=_createTime;
@property(retain, nonatomic) GameJumpInfo *contentPicJumpInfo; // @synthesize contentPicJumpInfo=_contentPicJumpInfo;
@property(retain, nonatomic) NSString *contentPicUrl; // @synthesize contentPicUrl=_contentPicUrl;
@property(retain, nonatomic) GameJumpInfo *secondLineJumpInfo; // @synthesize secondLineJumpInfo=_secondLineJumpInfo;
@property(retain, nonatomic) NSString *secondLineIconUrl; // @synthesize secondLineIconUrl=_secondLineIconUrl;
@property(retain, nonatomic) NSString *secondLineContent; // @synthesize secondLineContent=_secondLineContent;
@property(retain, nonatomic) NSString *firstLineContent; // @synthesize firstLineContent=_firstLineContent;
@property(retain, nonatomic) NSMutableArray *mergeUserList; // @synthesize mergeUserList=_mergeUserList;
@property(retain, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) NSString *badgeIconUrl; // @synthesize badgeIconUrl=_badgeIconUrl;
@property(retain, nonatomic) NSString *nickNameJumpUrl; // @synthesize nickNameJumpUrl=_nickNameJumpUrl;
@property(retain, nonatomic) NSString *headJumpUrl; // @synthesize headJumpUrl=_headJumpUrl;
@property(retain, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) NSString *headUrl; // @synthesize headUrl=_headUrl;
- (void).cxx_destruct;

@end

