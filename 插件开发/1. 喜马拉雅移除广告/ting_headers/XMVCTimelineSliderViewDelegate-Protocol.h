//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class XMVCTimelineSliderView;

@protocol XMVCTimelineSliderViewDelegate <NSObject>
- (void)timelineSliderEndTrim:(XMVCTimelineSliderView *)arg1;
- (void)timelineSliderBeginTrim:(XMVCTimelineSliderView *)arg1;
- (void)timelineSliderStop:(XMVCTimelineSliderView *)arg1;
- (void)timelineSlider:(XMVCTimelineSliderView *)arg1 playAtCurrent:(long long)arg2;
- (void)timelineSlider:(XMVCTimelineSliderView *)arg1 didChangeInPoint:(long long)arg2 outPoint:(long long)arg3;
- (void)timelineSlider:(XMVCTimelineSliderView *)arg1 didChangeCurrent:(long long)arg2;
@end

