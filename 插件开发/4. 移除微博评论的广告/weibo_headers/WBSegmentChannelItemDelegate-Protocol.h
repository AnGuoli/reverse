//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UILongPressGestureRecognizer, WBSegmentChannelItem;

@protocol WBSegmentChannelItemDelegate <NSObject>

@optional
- (void)WBSegmentChannelItem:(WBSegmentChannelItem *)arg1 didChangeState:(unsigned long long)arg2;
- (void)WBSegmentChannelItemDidClickDelete:(WBSegmentChannelItem *)arg1;
- (void)WBSegmentChannelItemDidClickItem:(WBSegmentChannelItem *)arg1;
- (void)WBSegmentChannelItemDidLongPress:(WBSegmentChannelItem *)arg1;
- (void)WBSegmentChannelItemGestureRecognizerStateDidEnded:(WBSegmentChannelItem *)arg1 withGestureRcognizer:(UILongPressGestureRecognizer *)arg2;
- (void)WBSegmentChannelItemGestureRecognizerStateDidChanged:(WBSegmentChannelItem *)arg1 withGestureRcognizer:(UILongPressGestureRecognizer *)arg2;
- (void)WBSegmentChannelItemGestureRecognizerStateDidBegan:(WBSegmentChannelItem *)arg1 withGestureRcognizer:(UILongPressGestureRecognizer *)arg2;
@end

