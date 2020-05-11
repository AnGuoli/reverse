//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class CDZAttributedString, CDZButton, NSMutableArray, NSString, UIButton, UICollectionView, UILabel, UIView;
@protocol XMBBSJoinedCommunityCellDelegate;

@interface XMBBSJoinedCommunityCell : UITableViewCell <UICollectionViewDelegate, UICollectionViewDataSource>
{
    _Bool _hasEverLoadJoinedData;
    _Bool _canOpenCommunity;
    _Bool _isRequestingData;
    _Bool _showMoreButton;
    _Bool _hasMore;
    id <XMBBSJoinedCommunityCellDelegate> _delegate;
    NSString *_title;
    NSMutableArray *_dataArray;
    long long _joinedTotalCount;
    UIView *_headerView;
    UILabel *_titleLabel;
    CDZButton *_moreButton;
    UILabel *_emptyLabel;
    UIButton *_emptyButton;
    UICollectionView *_collectionView;
    CDZAttributedString *_sectionHeaderString;
    long long _pageId;
}

+ (double)tableView:(id)arg1 heightForCellObject:(id)arg2;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(nonatomic) long long pageId; // @synthesize pageId=_pageId;
@property(retain, nonatomic) CDZAttributedString *sectionHeaderString; // @synthesize sectionHeaderString=_sectionHeaderString;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) UIButton *emptyButton; // @synthesize emptyButton=_emptyButton;
@property(retain, nonatomic) UILabel *emptyLabel; // @synthesize emptyLabel=_emptyLabel;
@property(retain, nonatomic) CDZButton *moreButton; // @synthesize moreButton=_moreButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) _Bool showMoreButton; // @synthesize showMoreButton=_showMoreButton;
@property(readonly, nonatomic) _Bool isRequestingData; // @synthesize isRequestingData=_isRequestingData;
@property(readonly, nonatomic) long long joinedTotalCount; // @synthesize joinedTotalCount=_joinedTotalCount;
@property(readonly, nonatomic) _Bool canOpenCommunity; // @synthesize canOpenCommunity=_canOpenCommunity;
@property(readonly, nonatomic) _Bool hasEverLoadJoinedData; // @synthesize hasEverLoadJoinedData=_hasEverLoadJoinedData;
@property(readonly, nonatomic) NSMutableArray *dataArray; // @synthesize dataArray=_dataArray;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) __weak id <XMBBSJoinedCommunityCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)shouldShowEmptyView;
- (void)reloadData;
- (void)didLoadMoreData:(_Bool)arg1;
- (void)requestMoreData:(_Bool)arg1 showLoadingHud:(_Bool)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)clickEmptyButton:(id)arg1;
- (void)layoutSubviews;
- (void)setJoinedTotalCount:(long long)arg1;
- (void)clickMoreButton:(id)arg1;
- (void)didExitCommuintyNotification:(id)arg1;
- (void)didJoinCommuintyNotification:(id)arg1;
- (void)didCreateCommuintyNotification:(id)arg1;
- (void)logoutSuccessNotification:(id)arg1;
- (void)loginSuccessNotification:(id)arg1;
- (void)communityInfoDidChange:(id)arg1;
- (void)didEnterCommunity:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)dealloc;
- (void)didInitialize;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

