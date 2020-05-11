//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionView.h>

#import "WBScrollRefreshViewProtocol-Protocol.h"
#import "WBSegmentWrapperVCViewProtocol-Protocol.h"

@class NSString, UIView, WBScrollViewRefresh, WBTableViewEmptyView;

@interface WBPhotoRefreshCollection : UICollectionView <WBScrollRefreshViewProtocol, WBSegmentWrapperVCViewProtocol>
{
    _Bool showPRLMHeaderWhenManuallySetContentOffset;
    _Bool _blockAutoAdjustContentOffset;
    _Bool _shouldShowEmpty;
    WBScrollViewRefresh *refreshManager;
    double _baseContentInsetTop;
    WBTableViewEmptyView *_emptyView;
}

@property(nonatomic) _Bool shouldShowEmpty; // @synthesize shouldShowEmpty=_shouldShowEmpty;
@property(nonatomic) _Bool blockAutoAdjustContentOffset; // @synthesize blockAutoAdjustContentOffset=_blockAutoAdjustContentOffset;
@property(retain, nonatomic) WBTableViewEmptyView *emptyView; // @synthesize emptyView=_emptyView;
@property(nonatomic) double baseContentInsetTop; // @synthesize baseContentInsetTop=_baseContentInsetTop;
@property(nonatomic) __weak WBScrollViewRefresh *refreshManager; // @synthesize refreshManager;
@property(nonatomic) _Bool showPRLMHeaderWhenManuallySetContentOffset; // @synthesize showPRLMHeaderWhenManuallySetContentOffset;
- (void).cxx_destruct;
- (_Bool)isEmpty;
- (struct CGRect)wb_rectForRowAtIndexPath:(id)arg1;
- (struct CGRect)rectForSection:(long long)arg1;
- (void)setCombinedContentOffset:(struct CGPoint)arg1 animated:(_Bool)arg2;
- (void)setCombinedContentOffset:(struct CGPoint)arg1;
- (struct CGPoint)combinedContentOffset;
- (void)setCombinedContentInset:(struct UIEdgeInsets)arg1;
- (struct UIEdgeInsets)combinedContentInset;
- (void)setContentInset:(struct UIEdgeInsets)arg1;
- (void)configEmptyView;
- (void)reloadData;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 collectionViewLayout:(id)arg2;

// Remaining properties
@property(retain, nonatomic) UIView *backgroundView;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) long long numberOfSections;
@property(readonly) Class superclass;

@end

