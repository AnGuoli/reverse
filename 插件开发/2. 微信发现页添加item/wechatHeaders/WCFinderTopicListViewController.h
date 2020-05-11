//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "MMScrollActionSheetDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewLayoutDelegate-Protocol.h"
#import "WCFinderSearchContactReusableViewDelegate-Protocol.h"
#import "WCFinderSearchFooterRefreshReusableDelegate-Protocol.h"
#import "WCFinderTopicListFeedCollectionViewCellDelegate-Protocol.h"
#import "WCFinderTopicListPureTextCollectionViewCellDelegate-Protocol.h"
#import "WCFinderTopicListSectionHeaderViewDelegate-Protocol.h"
#import "WCFinderTopicListViewModelDelegate-Protocol.h"

@class FinderLocation, NSString, UICollectionView, UIImageView, UILabel, UITapGestureRecognizer, WCFinderAnimationLoadingView, WCFinderSearchFooterRefreshReusableView, WCFinderSearchStreamLayout, WCFinderTopicListViewModel;

@interface WCFinderTopicListViewController : MMUIViewController <WCFinderTopicListViewModelDelegate, UICollectionViewLayoutDelegate, UICollectionViewDelegate, UICollectionViewDataSource, WCFinderTopicListFeedCollectionViewCellDelegate, WCFinderSearchContactReusableViewDelegate, WCFinderSearchFooterRefreshReusableDelegate, WCFinderTopicListPureTextCollectionViewCellDelegate, WCFinderTopicListSectionHeaderViewDelegate, MMScrollActionSheetDelegate>
{
    WCFinderTopicListViewModel *_viewModel;
    UICollectionView *_collectionView;
    WCFinderSearchStreamLayout *_streamLayout;
    WCFinderSearchFooterRefreshReusableView *_refreshFooterView;
    WCFinderAnimationLoadingView *_loadingView;
    UILabel *_stateTipsLabel;
    UITapGestureRecognizer *_stateRetryGesture;
    UIImageView *_retryImageView;
    unsigned long long _topicType;
    NSString *_topicTitle;
    FinderLocation *_topicLocation;
    NSString *_latitude;
    NSString *_longitude;
    NSString *_navigationBarTilte;
    NSString *_refObjectid;
    unsigned long long _footerRefreshState;
}

@property(nonatomic) unsigned long long footerRefreshState; // @synthesize footerRefreshState=_footerRefreshState;
@property(copy, nonatomic) NSString *refObjectid; // @synthesize refObjectid=_refObjectid;
@property(copy, nonatomic) NSString *navigationBarTilte; // @synthesize navigationBarTilte=_navigationBarTilte;
@property(copy, nonatomic) NSString *longitude; // @synthesize longitude=_longitude;
@property(copy, nonatomic) NSString *latitude; // @synthesize latitude=_latitude;
@property(retain, nonatomic) FinderLocation *topicLocation; // @synthesize topicLocation=_topicLocation;
@property(copy, nonatomic) NSString *topicTitle; // @synthesize topicTitle=_topicTitle;
@property(nonatomic) unsigned long long topicType; // @synthesize topicType=_topicType;
@property(retain, nonatomic) UIImageView *retryImageView; // @synthesize retryImageView=_retryImageView;
@property(retain, nonatomic) UITapGestureRecognizer *stateRetryGesture; // @synthesize stateRetryGesture=_stateRetryGesture;
@property(retain, nonatomic) UILabel *stateTipsLabel; // @synthesize stateTipsLabel=_stateTipsLabel;
@property(retain, nonatomic) WCFinderAnimationLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) WCFinderSearchFooterRefreshReusableView *refreshFooterView; // @synthesize refreshFooterView=_refreshFooterView;
@property(retain, nonatomic) WCFinderSearchStreamLayout *streamLayout; // @synthesize streamLayout=_streamLayout;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) WCFinderTopicListViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (id)generTopicShareItemWithTopicTitleWithType:(unsigned long long)arg1 topicTitle:(id)arg2 topicLocation:(id)arg3 topicCount:(unsigned long long)arg4;
- (_Bool)enableFeedShare;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (id)getItemArrayConfig;
- (void)onClickRightItem;
- (void)onHeaderViewTapAction;
- (void)scrollViewDidScroll:(id)arg1;
- (void)onFinderSearchResultReload:(id)arg1;
- (void)onFinderSearchResultNetxPageError;
- (void)onFinderSearchResultNoMore;
- (void)onFinderSearchResultError;
- (void)onFinderSearchResultAppendData:(id)arg1;
- (void)onFinderSearchResultChanged;
- (void)onFinderSearchResultEmpty;
- (void)onFinderSearchContactHeaderClickMore;
- (void)onClickSearchPureTextAvatar:(id)arg1;
- (void)onClickSearchFeedAvatar:(id)arg1;
- (void)didClickSearchFooterRefresh;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (double)streamLayoutDecorationViewTop;
- (double)streamLayoutDecorationViewHeight:(id)arg1 atSection:(unsigned long long)arg2;
- (_Bool)isNeedSetupDecorationView:(unsigned long long)arg1;
- (double)streamLayout:(id)arg1 heightForItemAtIndex:(id)arg2 itemWidth:(double)arg3;
- (double)streamLayoutFooterHeight:(id)arg1 atSection:(unsigned long long)arg2;
- (double)streamLayoutHerderHeight:(id)arg1 atSection:(unsigned long long)arg2;
- (struct UIEdgeInsets)edgeInsetdInStreamLayout:(id)arg1 atSection:(unsigned long long)arg2;
- (double)rowMarginInStreamLayout:(id)arg1 atSection:(unsigned long long)arg2;
- (double)columnMarginInStreamLayout:(id)arg1 atSection:(unsigned long long)arg2;
- (unsigned long long)columnCountInStreamLayout:(id)arg1 atSection:(unsigned long long)arg2;
- (unsigned long long)numberOfStreamLayoutSections;
- (void)stateRetryGestureAction:(id)arg1;
- (void)stopLoadingAnimation;
- (void)startLoadingAnimation;
- (void)setupLayoutAndCollectionView;
- (void)setupNavigationBarTitle;
- (id)navigationBarBackgroundColor;
- (void)onTimelineViewEnterBackground:(id)arg1;
- (void)onTimelineViewEnterForeground:(id)arg1;
- (void)removeObserverForForegroundNotification;
- (void)addObserverForForegroundNotification;
- (void)willDisappear;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithTopicType:(unsigned long long)arg1 topicTitle:(id)arg2 topicLocation:(id)arg3 latitude:(id)arg4 longitude:(id)arg5 refObjectid:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

