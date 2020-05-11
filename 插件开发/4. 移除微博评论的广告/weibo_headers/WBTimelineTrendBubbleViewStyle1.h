//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBPageCardBubbleView.h"

@class NSString;

@interface WBTimelineTrendBubbleViewStyle1 : WBPageCardBubbleView
{
    NSString *backgroundImage;
    NSString *backgroundImageHighlight;
}

+ (long long)bubbleViewRowHeightOfTrendViewModel:(id)arg1 constraintWidth:(double)arg2 tableView:(id)arg3 isListPage:(_Bool)arg4;
+ (double)rowHeightOfDataObject:(id)arg1 constraintWidth:(double)arg2 tableView:(id)arg3 isListPage:(_Bool)arg4;
+ (struct UIEdgeInsets)edgeInsetsBubbleSpaceWithData:(id)arg1;
@property(retain, nonatomic) NSString *backgroundImageHighlight; // @synthesize backgroundImageHighlight;
@property(retain, nonatomic) NSString *backgroundImage; // @synthesize backgroundImage;
- (void).cxx_destruct;
- (void)currentSkinDidChangeNotification:(id)arg1;
- (long long)bubbleViewRowHeightOfDataObject:(id)arg1 constraintWidth:(double)arg2 tableView:(id)arg3 isListPage:(_Bool)arg4;
- (void)resetPageCard:(id)arg1;
- (void)setTrendCardViewModel:(id)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)refreshSubViewsWithPageCard:(id)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

