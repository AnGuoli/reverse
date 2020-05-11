//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"
#import "WCTColumnCoding-Protocol.h"
#import "WCTTableCoding-Protocol.h"

@class NSArray, NSData, NSNumber, NSString;

@interface WCFinderComment : NSObject <WCTColumnCoding, PBCoding, WCTTableCoding>
{
    _Bool likeFlag;
    _Bool isCommentFail;
    _Bool isPosting;
    _Bool continueFlag;
    _Bool upContinue;
    _Bool _isExpand;
    _Bool _isRefCommentExpand;
    _Bool _showSubCommentList;
    unsigned int deleteFlag;
    unsigned int expandCommentCount;
    unsigned int blacklistFlag;
    int errorCode;
    NSString *username;
    NSString *nickname;
    NSString *content;
    unsigned long long commentID;
    unsigned long long replyCommentID;
    unsigned long long likeCount;
    NSString *headURL;
    NSArray *levelTwoComment;
    NSString *replyNickname;
    NSString *clientID;
    unsigned long long createTime;
    NSString *replyUsername;
    unsigned long long displayFlag;
    NSString *replyContent;
    NSString *objectID;
    unsigned long long retryCount;
    double firstPostTime;
    unsigned long long scene;
    NSString *errorMsg;
    unsigned long long _localCommentID;
    NSString *_displayidDiscarded;
    unsigned long long _displayid;
    NSData *_lastBuffer;
    NSString *_displayName;
    NSString *_replyDisplayName;
    unsigned long long _rootCommentID;
    unsigned long long _reportScene;
    NSNumber *_isFriendComment;
    NSNumber *_isFriendRefComment;
    NSString *_nonceID;
    WCFinderComment *_rootComment;
}

+ (id)finderCommentWithCommentInfo:(id)arg1;
+ (void)__wcdb_index_30:(struct WCTBinding *)arg1;
+ (void)__wcdb_index_29:(struct WCTBinding *)arg1;
+ (void)__wcdb_index_28:(struct WCTBinding *)arg1;
+ (void)__wcdb_table_constraint_27:(struct WCTBinding *)arg1;
+ (void)__wcdb_table_constraint_26:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)__wcdb_synthesize_25:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)reportScene;
+ (const struct WCTProperty *)__wcdb_synthesize_24:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)rootComment;
+ (const struct WCTProperty *)__wcdb_synthesize_23:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)rootCommentID;
+ (const struct WCTProperty *)__wcdb_synthesize_22:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)errorMsg;
+ (const struct WCTProperty *)__wcdb_synthesize_21:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)nonceID;
+ (const struct WCTProperty *)__wcdb_synthesize_20:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)errorCode;
+ (const struct WCTProperty *)__wcdb_synthesize_19:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)scene;
+ (const struct WCTProperty *)__wcdb_synthesize_18:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)objectID;
+ (const struct WCTProperty *)__wcdb_synthesize_17:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)displayFlag;
+ (const struct WCTProperty *)__wcdb_synthesize_16:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)replyContent;
+ (const struct WCTProperty *)__wcdb_synthesize_15:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)replyUsername;
+ (const struct WCTProperty *)__wcdb_synthesize_14:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)isPosting;
+ (const struct WCTProperty *)__wcdb_synthesize_13:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)isCommentFail;
+ (const struct WCTProperty *)__wcdb_synthesize_12:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)clientID;
+ (const struct WCTProperty *)__wcdb_synthesize_11:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)headURL;
+ (const struct WCTProperty *)__wcdb_synthesize_10:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)replyNickname;
+ (const struct WCTProperty *)__wcdb_synthesize_9:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)expandCommentCount;
+ (const struct WCTProperty *)__wcdb_synthesize_8:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)likeCount;
+ (const struct WCTProperty *)__wcdb_synthesize_7:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)createTime;
+ (const struct WCTProperty *)__wcdb_synthesize_6:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)deleteFlag;
+ (const struct WCTProperty *)__wcdb_synthesize_5:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)replyCommentID;
+ (const struct WCTProperty *)__wcdb_synthesize_4:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)localCommentID;
+ (const struct WCTProperty *)__wcdb_synthesize_3:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)commentID;
+ (const struct WCTProperty *)__wcdb_synthesize_2:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)content;
+ (const struct WCTProperty *)__wcdb_synthesize_1:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)nickname;
+ (const struct WCTProperty *)__wcdb_synthesize_0:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)username;
+ (id)__wcdbtyper;
+ (const SyntaxList_7f15fe8c *)allProperties;
+ (const struct WCTBinding *)objectRelationalMapping;
+ (void)initialize;
+ (void)PBArrayAdd_upContinue;
+ (void)PBArrayAdd_continueFlag;
+ (void)PBArrayAdd_errorMsg;
+ (void)PBArrayAdd_errorCode;
+ (void)PBArrayAdd_scene;
+ (void)PBArrayAdd_firstPostTime;
+ (void)PBArrayAdd_retryCount;
+ (void)PBArrayAdd_objectID;
+ (void)PBArrayAdd_replyContent;
+ (void)PBArrayAdd_blacklistFlag;
+ (void)PBArrayAdd_displayFlag;
+ (void)PBArrayAdd_replyUsername;
+ (void)PBArrayAdd_createTime;
+ (void)PBArrayAdd_clientID;
+ (void)PBArrayAdd_isPosting;
+ (void)PBArrayAdd_isCommentFail;
+ (void)PBArrayAdd_replyNickname;
+ (void)PBArrayAdd_levelTwoComment;
+ (void)PBArrayAdd_headURL;
+ (void)PBArrayAdd_expandCommentCount;
+ (void)PBArrayAdd_likeCount;
+ (void)PBArrayAdd_likeFlag;
+ (void)PBArrayAdd_deleteFlag;
+ (void)PBArrayAdd_replyCommentID;
+ (void)PBArrayAdd_commentID;
+ (void)PBArrayAdd_content;
+ (void)PBArrayAdd_nickname;
+ (void)PBArrayAdd_username;
+ (int)columnTypeForWCDB;
+ (id)unarchiveWithWCTValue:(struct NSObject *)arg1;
@property(retain, nonatomic) WCFinderComment *rootComment; // @synthesize rootComment=_rootComment;
@property(nonatomic) _Bool showSubCommentList; // @synthesize showSubCommentList=_showSubCommentList;
@property(copy, nonatomic) NSString *nonceID; // @synthesize nonceID=_nonceID;
@property(retain, nonatomic) NSNumber *isFriendRefComment; // @synthesize isFriendRefComment=_isFriendRefComment;
@property(retain, nonatomic) NSNumber *isFriendComment; // @synthesize isFriendComment=_isFriendComment;
@property(nonatomic) unsigned long long reportScene; // @synthesize reportScene=_reportScene;
@property(nonatomic) unsigned long long rootCommentID; // @synthesize rootCommentID=_rootCommentID;
@property(copy, nonatomic) NSString *replyDisplayName; // @synthesize replyDisplayName=_replyDisplayName;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(nonatomic) _Bool isRefCommentExpand; // @synthesize isRefCommentExpand=_isRefCommentExpand;
@property(nonatomic) _Bool isExpand; // @synthesize isExpand=_isExpand;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(nonatomic) unsigned long long displayid; // @synthesize displayid=_displayid;
@property(copy, nonatomic) NSString *displayidDiscarded; // @synthesize displayidDiscarded=_displayidDiscarded;
@property(nonatomic) unsigned long long localCommentID; // @synthesize localCommentID=_localCommentID;
@property(nonatomic) _Bool upContinue; // @synthesize upContinue;
@property(nonatomic) _Bool continueFlag; // @synthesize continueFlag;
@property(retain, nonatomic) NSString *errorMsg; // @synthesize errorMsg;
@property(nonatomic) int errorCode; // @synthesize errorCode;
@property(nonatomic) unsigned long long scene; // @synthesize scene;
@property(nonatomic) double firstPostTime; // @synthesize firstPostTime;
@property(nonatomic) unsigned long long retryCount; // @synthesize retryCount;
@property(copy, nonatomic) NSString *objectID; // @synthesize objectID;
@property(copy, nonatomic) NSString *replyContent; // @synthesize replyContent;
@property(nonatomic) unsigned int blacklistFlag; // @synthesize blacklistFlag;
@property(nonatomic) unsigned long long displayFlag; // @synthesize displayFlag;
@property(copy, nonatomic) NSString *replyUsername; // @synthesize replyUsername;
@property(nonatomic) unsigned long long createTime; // @synthesize createTime;
@property(copy, nonatomic) NSString *clientID; // @synthesize clientID;
@property(nonatomic) _Bool isPosting; // @synthesize isPosting;
@property(nonatomic) _Bool isCommentFail; // @synthesize isCommentFail;
@property(copy, nonatomic) NSString *replyNickname; // @synthesize replyNickname;
@property(copy, nonatomic) NSArray *levelTwoComment; // @synthesize levelTwoComment;
@property(copy, nonatomic) NSString *headURL; // @synthesize headURL;
@property(nonatomic) unsigned int expandCommentCount; // @synthesize expandCommentCount;
@property(nonatomic) unsigned long long likeCount; // @synthesize likeCount;
@property(nonatomic) _Bool likeFlag; // @synthesize likeFlag;
@property(nonatomic) unsigned int deleteFlag; // @synthesize deleteFlag;
@property(nonatomic) unsigned long long replyCommentID; // @synthesize replyCommentID;
@property(nonatomic) unsigned long long commentID; // @synthesize commentID;
@property(copy, nonatomic) NSString *content; // @synthesize content;
@property(copy, nonatomic) NSString *nickname; // @synthesize nickname;
@property(copy, nonatomic) NSString *username; // @synthesize username;
- (void).cxx_destruct;
- (_Bool)shouldStopRepostError;
- (_Bool)canRePost;
- (_Bool)canRetryPost;
- (id)commentIdentify;
@property(readonly, copy) NSString *description;
- (_Bool)isReplyAuthor;
- (_Bool)isAuthorLiked;
- (_Bool)isFinderPublish;
- (_Bool)isAuthorPublish;
- (_Bool)haveMoreSubComment;
- (id)genFinderCommentInfo;
- (_Bool)isLike;
- (id)getPBPropertyTable;
- (struct NSObject *)archivedWCTValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;
@property(readonly) Class superclass;

@end

