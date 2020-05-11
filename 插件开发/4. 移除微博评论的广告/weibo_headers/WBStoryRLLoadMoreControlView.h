//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class UIScrollView, UIView;
@protocol WBStoryRLLoadMoreAnimation;

@interface WBStoryRLLoadMoreControlView : UIControl
{
    _Bool _noFullScreenShowLoadMore;
    long long _loadMoreState;
    long long _activityIndicatorViewStyle;
    UIScrollView *_observerView;
    long long _loadMoreAnimationType;
    UIView<WBStoryRLLoadMoreAnimation> *_loadMoreView;
}

@property(retain, nonatomic) UIView<WBStoryRLLoadMoreAnimation> *loadMoreView; // @synthesize loadMoreView=_loadMoreView;
@property(nonatomic) long long loadMoreAnimationType; // @synthesize loadMoreAnimationType=_loadMoreAnimationType;
@property(nonatomic) __weak UIScrollView *observerView; // @synthesize observerView=_observerView;
@property(nonatomic) long long activityIndicatorViewStyle; // @synthesize activityIndicatorViewStyle=_activityIndicatorViewStyle;
@property(nonatomic) _Bool noFullScreenShowLoadMore; // @synthesize noFullScreenShowLoadMore=_noFullScreenShowLoadMore;
@property(nonatomic) long long loadMoreState; // @synthesize loadMoreState=_loadMoreState;
- (void).cxx_destruct;
- (double)getLoadMoreHeight;
- (double)getContentBottomInset;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)sendTouchUpInsideEventIfNeed;
- (void)setViewBy:(long long)arg1;
- (_Bool)contentIsFullBounds;
- (void)setHidden:(_Bool)arg1;
- (void)willMoveToSuperview:(id)arg1;
- (void)clicked:(id)arg1;
- (id)init;

@end

