//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "WBSegmentChannelItemDelegate-Protocol.h"

@class NSMutableArray, NSString, UIImageView, UILabel, UIScrollView;
@protocol WBSegmentChannelsListViewDelegate;

@interface WBSegmentChannelsListView : UIView <WBSegmentChannelItemDelegate>
{
    struct CGPoint _gestureStartingPoint;
    _Bool _didChanged;
    _Bool _isShowing;
    _Bool _isNavigationMode;
    NSMutableArray *_currentChannels;
    NSMutableArray *_unusedChannels;
    double _animationDuration;
    unsigned long long _listState;
    id <WBSegmentChannelsListViewDelegate> _delegate;
    long long _currentSelectionIndex;
    NSString *_unusedChannelLabelTitle;
    UIScrollView *_mainScrollView;
    UIView *_channelBottomBar;
    NSMutableArray *_currentListItems;
    NSMutableArray *_unusedListItems;
    UILabel *_unusedChannelLabel;
    UIImageView *_channelBottomBarBackgroundView;
}

+ (double)itemWidth;
+ (id)segmentChannelsListViewWithFrame:(struct CGRect)arg1;
@property(retain, nonatomic) UIImageView *channelBottomBarBackgroundView; // @synthesize channelBottomBarBackgroundView=_channelBottomBarBackgroundView;
@property(retain, nonatomic) UILabel *unusedChannelLabel; // @synthesize unusedChannelLabel=_unusedChannelLabel;
@property(retain, nonatomic) NSMutableArray *unusedListItems; // @synthesize unusedListItems=_unusedListItems;
@property(retain, nonatomic) NSMutableArray *currentListItems; // @synthesize currentListItems=_currentListItems;
@property(retain, nonatomic) UIView *channelBottomBar; // @synthesize channelBottomBar=_channelBottomBar;
@property(retain, nonatomic) UIScrollView *mainScrollView; // @synthesize mainScrollView=_mainScrollView;
@property(retain, nonatomic) NSString *unusedChannelLabelTitle; // @synthesize unusedChannelLabelTitle=_unusedChannelLabelTitle;
@property(nonatomic) _Bool isNavigationMode; // @synthesize isNavigationMode=_isNavigationMode;
@property(nonatomic) _Bool isShowing; // @synthesize isShowing=_isShowing;
@property(nonatomic) long long currentSelectionIndex; // @synthesize currentSelectionIndex=_currentSelectionIndex;
@property(nonatomic) _Bool didChanged; // @synthesize didChanged=_didChanged;
@property(nonatomic) __weak id <WBSegmentChannelsListViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long listState; // @synthesize listState=_listState;
@property(nonatomic) double animationDuration; // @synthesize animationDuration=_animationDuration;
@property(retain, nonatomic) NSMutableArray *unusedChannels; // @synthesize unusedChannels=_unusedChannels;
@property(retain, nonatomic) NSMutableArray *currentChannels; // @synthesize currentChannels=_currentChannels;
- (void).cxx_destruct;
- (_Bool)shouldMoveItemFromTopToBottom;
- (void)insertTopItem:(id)arg1 toDestinationItem:(id)arg2;
- (long long)moveItemFromBottomToTop:(id)arg1 withIndex:(id)arg2;
- (void)moveItemFromBottomToTop:(id)arg1;
- (void)moveItemFromTopToBottom:(id)arg1;
- (void)animationWithView:(id)arg1 frame:(struct CGRect)arg2;
- (void)animationForTopViewExcItem:(id)arg1;
- (void)resetPositionsAnimated:(_Bool)arg1;
- (void)WBSegmentChannelItemDidClickDelete:(id)arg1;
- (void)WBSegmentChannelItemDidClickItem:(id)arg1;
- (void)WBSegmentChannelItemDidLongPress:(id)arg1;
- (void)WBSegmentChannelItemGestureRecognizerStateDidEnded:(id)arg1 withGestureRcognizer:(id)arg2;
- (void)WBSegmentChannelItemGestureRecognizerStateDidChanged:(id)arg1 withGestureRcognizer:(id)arg2;
- (void)WBSegmentChannelItemGestureRecognizerStateDidBegan:(id)arg1 withGestureRcognizer:(id)arg2;
- (void)updateSelectIndex;
- (void)setSelectedIndex:(long long)arg1;
- (void)switchTopItemsState:(unsigned long long)arg1;
- (void)resetPositions;
- (void)reloadUIElements:(_Bool)arg1;
- (void)resetChannels;
- (void)setupCurrentChannels:(id)arg1 andUnusedChannels:(id)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

