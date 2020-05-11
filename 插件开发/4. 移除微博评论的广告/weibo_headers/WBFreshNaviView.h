//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBPageCardViewBase.h"

#import "WBFreshNaviBarViewDelegate-Protocol.h"

@class NSString, WBFreshNaviBarView;

@interface WBFreshNaviView : WBPageCardViewBase <WBFreshNaviBarViewDelegate>
{
    WBFreshNaviBarView *_segmentChannelBar;
}

+ (_Bool)allowCustomBubbleLayout;
+ (_Bool)allowBubble;
+ (struct UIEdgeInsets)edgeInsetsBubbleOutside;
+ (double)heightOfDataObject:(id)arg1;
@property(retain, nonatomic) WBFreshNaviBarView *segmentChannelBar; // @synthesize segmentChannelBar=_segmentChannelBar;
- (void).cxx_destruct;
- (void)channelsBarDidSelectChannel:(id)arg1 toIndex:(long long)arg2;
- (_Bool)highlightCellBackgroundWhenPressed;
- (void)layoutSubviews;
- (void)setPageCard:(id)arg1;
- (void)reloadUIElements;
- (Class)segmentBarClass;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

