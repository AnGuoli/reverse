//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SwipeViewDataSource-Protocol.h"
#import "SwipeViewDelegate-Protocol.h"
#import "WBSTNewCardViewDelegate-Protocol.h"
#import "WBSegmentChannelsBarViewDelegate-Protocol.h"

@class NSMutableArray, NSString, WBSTCardListStore, WBSegmentChannelsBarView, WBSegmentSwipeView;
@protocol WBSTCardNewPageViewDelegate;

@interface WBSTCardNewPageView : UIView <WBSegmentChannelsBarViewDelegate, SwipeViewDataSource, SwipeViewDelegate, WBSTNewCardViewDelegate>
{
    _Bool _swipeViewDragging;
    id <WBSTCardNewPageViewDelegate> _delegate;
    WBSegmentSwipeView *_bottomSwpipView;
    WBSegmentChannelsBarView *_topIndicatorView;
    WBSTCardListStore *_store;
    NSString *_currentLabelKey;
    long long _currentIndex;
    NSMutableArray *_cardViewsArr;
    NSString *_cursorSegmentId;
}

@property(copy, nonatomic) NSString *cursorSegmentId; // @synthesize cursorSegmentId=_cursorSegmentId;
@property(copy, nonatomic) NSMutableArray *cardViewsArr; // @synthesize cardViewsArr=_cardViewsArr;
@property(nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(retain, nonatomic) NSString *currentLabelKey; // @synthesize currentLabelKey=_currentLabelKey;
@property(retain, nonatomic) WBSTCardListStore *store; // @synthesize store=_store;
@property(nonatomic) _Bool swipeViewDragging; // @synthesize swipeViewDragging=_swipeViewDragging;
@property(retain, nonatomic) WBSegmentChannelsBarView *topIndicatorView; // @synthesize topIndicatorView=_topIndicatorView;
@property(retain, nonatomic) WBSegmentSwipeView *bottomSwpipView; // @synthesize bottomSwpipView=_bottomSwpipView;
@property(nonatomic) __weak id <WBSTCardNewPageViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)cardViewLoadList:(id)arg1 pageNum:(long long)arg2;
- (void)channelsBarDidSelectChannel:(id)arg1 toIndex:(long long)arg2;
- (struct CGSize)swipeViewItemSize:(id)arg1;
- (void)swipeViewCurrentItemIndexDidChange:(id)arg1;
- (void)swipeViewDidEndDecelerating:(id)arg1;
- (void)swipeViewDidEndScrollingAnimation:(id)arg1;
- (void)swipeViewDidScroll:(id)arg1;
- (void)swipeViewWillBeginDragging:(id)arg1;
- (id)swipeView:(id)arg1 viewForItemAtIndex:(long long)arg2 reusingView:(id)arg3;
- (long long)numberOfItemsInSwipeView:(id)arg1;
- (void)setCurrentCard;
- (void)udpateBottomViewData;
- (void)updateTopViewData;
- (void)updateSubView;
- (void)updateWithStore:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

