//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBPageCardViewBase.h"

@class WBPageCardSingleStatusView;

@interface WBPageCardDoubleStatusView : WBPageCardViewBase
{
    WBPageCardSingleStatusView *leftView;
    WBPageCardSingleStatusView *rightView;
    _Bool _isNewLiveCardStyle;
}

+ (_Bool)allowBubble;
+ (struct UIEdgeInsets)edgeInsetsBubbleOutside;
+ (double)heightOfDataObject:(id)arg1;
- (void).cxx_destruct;
- (double)getTheWidthOfStatus;
- (double)getTheEdgeOutsideLeftAndRight;
- (void)dealloc;
- (void)resetSubViewRects;
- (void)setPageCard:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

