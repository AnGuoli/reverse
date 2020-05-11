//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBPageCardViewBase.h"

@class UILabel, WBHomeLoadMoreFooterView;

@interface WBFreshLoadingView : WBPageCardViewBase
{
    UILabel *_loadingLabel;
    WBHomeLoadMoreFooterView *_loadView;
}

+ (_Bool)allowCustomBubbleLayout;
+ (_Bool)allowBubble;
+ (struct UIEdgeInsets)edgeInsetsBubbleOutside;
+ (double)heightOfDataObject:(id)arg1;
@property(retain, nonatomic) WBHomeLoadMoreFooterView *loadView; // @synthesize loadView=_loadView;
@property(retain, nonatomic) UILabel *loadingLabel; // @synthesize loadingLabel=_loadingLabel;
- (void).cxx_destruct;
- (void)loadViewPressed;
- (void)stopAnimation;
- (void)startAnimation;
- (_Bool)highlightCellBackgroundWhenPressed;
- (void)layoutSubviews;
- (void)setPageCard:(id)arg1;
- (void)reloadUIElements;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

