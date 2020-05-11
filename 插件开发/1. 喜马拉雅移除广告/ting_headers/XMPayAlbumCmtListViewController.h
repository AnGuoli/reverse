//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMSubLevelViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "XMAlbumCommentCellDelegate-Protocol.h"
#import "XMTableViewDelegateProtocol-Protocol.h"
#import "XMVXPageViewSubControllerProtocol-Protocol.h"

@class NSMutableArray, NSString, XMAlbumCommentInputCtrl, XMAlbumCommentSegmentModel, XMAlbumCommentUtility, XMAlbumItem, XMTableViewDataSource;

@interface XMPayAlbumCmtListViewController : XMSubLevelViewController <UITableViewDelegate, UITableViewDataSource, XMTableViewDelegateProtocol, XMAlbumCommentCellDelegate, XMVXPageViewSubControllerProtocol>
{
    _Bool _hasMore;
    _Bool _hasTail;
    _Bool _hasMoreCache;
    _Bool _isFirstComming;
    _Bool _showSegmentCell;
    _Bool _contentCommendCompleted;
    NSMutableArray *allComments;
    XMAlbumItem *albumItem;
    CDUnknownBlockType _scrollViewDidScroll;
    CDUnknownBlockType _updateCommentCountBlock;
    XMTableViewDataSource *_tableDataSource;
    long long _pageId;
    long long _pageSize;
    long long _totalCount;
    NSMutableArray *_cacheComments;
    XMAlbumCommentUtility *_commentUtility;
    XMAlbumCommentInputCtrl *_commentInputController;
    long long _albumCommentSegmentState;
    XMAlbumCommentSegmentModel *_segmentModel;
    NSString *_noDataMessage;
    long long _totalContentCount;
    long long _totalNoContentCount;
}

+ (id)notCommentPlaceholderString;
+ (id)commentPlaceholderString;
@property(nonatomic) long long totalNoContentCount; // @synthesize totalNoContentCount=_totalNoContentCount;
@property(nonatomic) long long totalContentCount; // @synthesize totalContentCount=_totalContentCount;
@property(retain, nonatomic) NSString *noDataMessage; // @synthesize noDataMessage=_noDataMessage;
@property(retain, nonatomic) XMAlbumCommentSegmentModel *segmentModel; // @synthesize segmentModel=_segmentModel;
@property(nonatomic) _Bool contentCommendCompleted; // @synthesize contentCommendCompleted=_contentCommendCompleted;
@property(nonatomic) _Bool showSegmentCell; // @synthesize showSegmentCell=_showSegmentCell;
@property(nonatomic) _Bool isFirstComming; // @synthesize isFirstComming=_isFirstComming;
@property(nonatomic) long long albumCommentSegmentState; // @synthesize albumCommentSegmentState=_albumCommentSegmentState;
@property(retain, nonatomic) XMAlbumCommentInputCtrl *commentInputController; // @synthesize commentInputController=_commentInputController;
@property(retain, nonatomic) XMAlbumCommentUtility *commentUtility; // @synthesize commentUtility=_commentUtility;
@property(nonatomic) _Bool hasMoreCache; // @synthesize hasMoreCache=_hasMoreCache;
@property(nonatomic) _Bool hasTail; // @synthesize hasTail=_hasTail;
@property(retain, nonatomic) NSMutableArray *cacheComments; // @synthesize cacheComments=_cacheComments;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(nonatomic) long long totalCount; // @synthesize totalCount=_totalCount;
@property(nonatomic) long long pageSize; // @synthesize pageSize=_pageSize;
@property(nonatomic) long long pageId; // @synthesize pageId=_pageId;
@property(retain, nonatomic) XMTableViewDataSource *tableDataSource; // @synthesize tableDataSource=_tableDataSource;
@property(copy, nonatomic) CDUnknownBlockType updateCommentCountBlock; // @synthesize updateCommentCountBlock=_updateCommentCountBlock;
@property(copy, nonatomic) CDUnknownBlockType scrollViewDidScroll; // @synthesize scrollViewDidScroll=_scrollViewDidScroll;
@property(retain, nonatomic) XMAlbumItem *albumItem; // @synthesize albumItem;
@property(retain, nonatomic) NSMutableArray *allComments; // @synthesize allComments;
- (void).cxx_destruct;
- (void)updateCommentCount;
- (void)scrollViewDidScroll:(id)arg1;
- (id)vxContentScrollView;
- (void)traitCollectionDidChange:(id)arg1;
- (void)onTrackBuyNeedBuyFirstBeforeComment:(id)arg1;
- (void)loginSuccessNotification;
- (void)buildTableDataSource:(_Bool)arg1;
- (void)reloadDataWithLightReload:(_Bool)arg1;
- (void)postBuyAlbumDataTrack;
- (void)tableViewDidSelectCellWithCellObject:(id)arg1 tableViewCell:(id)arg2;
- (void)createCommentLocally:(id)arg1;
- (void)createCommentDetailLocally:(id)arg1;
- (void)deleteCommentLocally:(id)arg1;
- (void)requestDelete:(id)arg1;
- (void)updateCommentInputView:(id)arg1;
- (void)showCommentInputView:(id)arg1;
- (void)pushToNewReport:(id)arg1;
- (void)showCommentActionSheet:(id)arg1;
- (void)commentCellDidTapCommentButton:(id)arg1;
- (void)commentCellDidTapMoreButton:(id)arg1;
- (void)pushToUserProfile:(unsigned long long)arg1 name:(id)arg2;
- (void)commentCellDidTapAvatarImageView:(id)arg1;
- (void)commentCellDidShowTalentInfo:(id)arg1;
- (void)commentCellDidTapTalentInfo:(id)arg1;
- (void)commentCellDidBeLongPressed:(id)arg1;
- (void)requestLike:(id)arg1;
- (void)commentCellDidTapPraiseButton:(id)arg1;
- (void)goToLink;
- (void)XMAlbumTailViewCellDidClickMakeCredits;
- (void)XMAlbumTailViewCellDidClick;
- (void)XMAlbumCommentSegmentCellDidClick:(long long)arg1;
- (void)requestContentComment:(_Bool)arg1;
- (void)requestMoreData:(_Bool)arg1 showLoadingHud:(_Bool)arg2;
- (void)triggerLoadMore;
- (void)triggerPullToRefresh;
- (_Bool)isLoadMoreViewNeeded;
- (void)refreshData;
- (void)firstLoadData;
- (void)customInitialize;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (id)initWithAlbum:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

