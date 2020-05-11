//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ForwardMessageLogicDelegate-Protocol.h"
#import "WCFinderContactExt-Protocol.h"
#import "WCFinderDataItemExt-Protocol.h"
#import "WCFinderModUserInfoExt-Protocol.h"
#import "WCFinderPostDataItemExt-Protocol.h"
#import "WCFinderProfileCoverUploadCdnMgrDelegate-Protocol.h"
#import "WCFinderUserPageFetchExt-Protocol.h"

@class ForwardMessageLogicController, NSData, NSMutableArray, NSString, WCFinderContact, WCFinderProfileCoverUploadCdnMgr, WCFinderStreamProfileExtInfo;
@protocol WCFinderStreamProfileViewModelDelegate;

@interface WCFinderStreamProfileViewModel : NSObject <WCFinderDataItemExt, WCFinderContactExt, WCFinderProfileCoverUploadCdnMgrDelegate, ForwardMessageLogicDelegate, WCFinderPostDataItemExt, WCFinderUserPageFetchExt, WCFinderModUserInfoExt>
{
    _Bool _isAuthorPerspective;
    _Bool _isOwneProfile;
    _Bool _isFinderIdentity;
    WCFinderStreamProfileExtInfo *_profileHeaderExtInfo;
    NSMutableArray *_dataItems;
    WCFinderContact *_contact;
    NSString *_username;
    id <WCFinderStreamProfileViewModelDelegate> _delegate;
    double _headerCacheHeight;
    NSData *_lastBuffer;
    NSString *_redirectFeedID;
    unsigned long long _reportScene;
    WCFinderProfileCoverUploadCdnMgr *_coverUploader;
    ForwardMessageLogicController *_forwardLogic;
    unsigned long long _maxID;
}

@property(nonatomic) _Bool isFinderIdentity; // @synthesize isFinderIdentity=_isFinderIdentity;
@property(nonatomic) unsigned long long maxID; // @synthesize maxID=_maxID;
@property(retain, nonatomic) ForwardMessageLogicController *forwardLogic; // @synthesize forwardLogic=_forwardLogic;
@property(retain, nonatomic) WCFinderProfileCoverUploadCdnMgr *coverUploader; // @synthesize coverUploader=_coverUploader;
@property(nonatomic) unsigned long long reportScene; // @synthesize reportScene=_reportScene;
@property(retain, nonatomic) NSString *redirectFeedID; // @synthesize redirectFeedID=_redirectFeedID;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(nonatomic) double headerCacheHeight; // @synthesize headerCacheHeight=_headerCacheHeight;
@property(nonatomic) __weak id <WCFinderStreamProfileViewModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isOwneProfile; // @synthesize isOwneProfile=_isOwneProfile;
@property(nonatomic) _Bool isAuthorPerspective; // @synthesize isAuthorPerspective=_isAuthorPerspective;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) WCFinderContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) NSMutableArray *dataItems; // @synthesize dataItems=_dataItems;
- (void).cxx_destruct;
- (void)reportClickActionInfo:(id)arg1;
- (void)onUserInfoChange;
- (void)onNextPageData:(id)arg1 continueFlag:(_Bool)arg2;
- (void)onLatestData:(id)arg1 contact:(id)arg2 continueFlag:(_Bool)arg3;
- (void)onFinderUserPageFetchFail:(int)arg1;
- (void)onFinderUserPageFetchSeccess:(id)arg1 contact:(id)arg2 continueFlag:(_Bool)arg3 isFirstPageRequest:(_Bool)arg4 lastBuffer:(id)arg5 extInfo:(id)arg6;
- (void)onFinderContactFollowStatusUpdateFailure:(id)arg1;
- (void)onFinderContactFollowStatusUpdate:(id)arg1 isFollowing:(_Bool)arg2;
- (void)onFinderContactUpdate:(id)arg1;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)OnForwardMessageSend:(id)arg1;
- (id)getCurrentViewController;
- (void)onFinderDataItemDelete:(id)arg1;
- (void)onFinderDataItemStartUpLoad:(id)arg1;
- (void)onFinderDataItemPostUpLoadFailWithTid:(id)arg1 errorType:(long long)arg2;
- (void)onFinderDataItemPostUpLoadSuccessful:(id)arg1 localTid:(id)arg2;
- (void)coverUploadFailure;
- (void)coverUploadSucess:(id)arg1;
@property(retain, nonatomic) WCFinderStreamProfileExtInfo *profileHeaderExtInfo; // @synthesize profileHeaderExtInfo=_profileHeaderExtInfo;
- (id)authIcon;
- (void)shareNameCardToFriend;
- (void)onChangeCoverImage:(id)arg1;
- (void)modifyUserInfoWithCountry:(id)arg1 province:(id)arg2 city:(id)arg3 notShowLocation:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)onFeedFollowStatusChanged:(_Bool)arg1;
- (void)deleteContentVMWithTid:(id)arg1;
- (void)deleteContentVM:(id)arg1;
- (void)appendDataItems:(id)arg1;
- (void)fetchLocalData;
- (void)fetchProfileExtInfo;
- (void)fetchLastestData;
- (void)requestNextPageData;
- (void)requestFirstPageData;
- (_Bool)hasGuatantor;
- (void)resetHeaderCacheHeight;
- (void)dealloc;
- (id)initWithContact:(id)arg1 viewer:(id)arg2;
- (id)initWithUsername:(id)arg1 viewer:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

