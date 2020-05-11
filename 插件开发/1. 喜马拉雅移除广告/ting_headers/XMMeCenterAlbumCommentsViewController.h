//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMBaseTabelVC.h"

#import "XMAlbumCommentCellDelegate-Protocol.h"
#import "XMMCPayAlbumCmtListSortViewDelegate-Protocol.h"
#import "XMMyCenterPayAlbumCommentListHeaderViewDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSString, XMMCPayAlbumCmtListSortView, XMMeCenterFreeAlbumModel, XMMyCenterPayAlbumCommentListHeaderView;

@interface XMMeCenterAlbumCommentsViewController : XMBaseTabelVC <XMAlbumCommentCellDelegate, XMMyCenterPayAlbumCommentListHeaderViewDelegate, XMMCPayAlbumCmtListSortViewDelegate>
{
    _Bool _hasMore;
    XMMeCenterFreeAlbumModel *_albumModel;
    unsigned long long _pageId;
    NSMutableArray *_commentLayouts;
    XMMyCenterPayAlbumCommentListHeaderView *_commentListHeaderView;
    XMMCPayAlbumCmtListSortView *_sortView;
    NSArray *_sortParamArr;
    NSString *_sortParam;
    NSString *_noDataMessage;
}

@property(retain, nonatomic) NSString *noDataMessage; // @synthesize noDataMessage=_noDataMessage;
@property(copy, nonatomic) NSString *sortParam; // @synthesize sortParam=_sortParam;
@property(retain, nonatomic) NSArray *sortParamArr; // @synthesize sortParamArr=_sortParamArr;
@property(retain, nonatomic) XMMCPayAlbumCmtListSortView *sortView; // @synthesize sortView=_sortView;
@property(retain, nonatomic) XMMyCenterPayAlbumCommentListHeaderView *commentListHeaderView; // @synthesize commentListHeaderView=_commentListHeaderView;
@property(retain, nonatomic) NSMutableArray *commentLayouts; // @synthesize commentLayouts=_commentLayouts;
@property(nonatomic) unsigned long long pageId; // @synthesize pageId=_pageId;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(retain, nonatomic) XMMeCenterFreeAlbumModel *albumModel; // @synthesize albumModel=_albumModel;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)arg1;
- (void)payAlbumCmtListSortView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 headerViewTitle:(id)arg3;
- (void)myCenterPayAlbumCommentListHeaderView:(id)arg1 filterBtnIsSelected:(_Bool)arg2;
- (void)myCenterPayAlbumCommentListHeaderView:(id)arg1 sortBtnIsSelected:(_Bool)arg2;
- (void)onReport:(id)arg1;
- (void)onMail:(id)arg1;
- (void)showCommentActionSheet:(id)arg1;
- (void)commentCellDidTapPraiseButton:(id)arg1;
- (void)commentCellDidTapAlbumCard:(id)arg1;
- (void)commentCellDidTapCommentButton:(id)arg1;
- (void)commentCellDidTapMoreButton:(id)arg1;
- (_Bool)shouldShowNoNetView;
- (_Bool)shouldShowEmptyView;
- (void)reloadUI;
- (void)requestAllMycommentsWithPageId:(unsigned long long)arg1;
- (void)loadMore;
- (void)pullToRefresh;
- (_Bool)isLoadMoreViewNeeded;
- (void)triggerPullToRefresh;
- (void)gotoCommentDetailViewController:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

