//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBPageCardCommonImageTextView.h"

@class UILabel;

@interface WBPageCardDoubleLineWithTimeView : WBPageCardCommonImageTextView
{
    UILabel *_timeLabel;
}

+ (double)heightOfDataObject:(id)arg1;
+ (id)getterLock;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
- (void).cxx_destruct;
- (void)resetSubViewRects;
- (void)layoutSubviews;
- (void)setPageCard:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

