//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBPageCardViewBase.h"

@class NSMutableArray, WBContentImageView, WBTimelineLargeCardTextView;

@interface WBPageSquareDoubleLinkView : WBPageCardViewBase
{
    NSMutableArray *buttonArray;
    NSMutableArray *imageArrayV;
    WBContentImageView *_leftTagImageView;
    WBTimelineLargeCardTextView *_titleView;
}

+ (struct UIEdgeInsets)edgeInsetsTrendBubbleOffset:(id)arg1;
+ (id)_linesArrayWithText:(id)arg1 font:(id)arg2 textColor:(id)arg3 fontSize:(double)arg4;
+ (struct UIEdgeInsets)edgeInsetsViewOutside;
+ (double)heightOfDataObject:(id)arg1;
@property(retain, nonatomic) WBTimelineLargeCardTextView *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) WBContentImageView *leftTagImageView; // @synthesize leftTagImageView=_leftTagImageView;
- (void).cxx_destruct;
- (void)buttonClicked:(id)arg1;
- (void)layoutSubviews;
- (void)setPageCard:(id)arg1;
- (void)reloadUnreadStates;
- (id)createImageViewWithVertical:(_Bool)arg1;
- (void)reloadUIElements;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

