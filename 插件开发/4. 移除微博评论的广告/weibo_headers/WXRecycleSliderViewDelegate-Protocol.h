//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "UIScrollViewDelegate-Protocol.h"

@class UIGestureRecognizer, UIScrollView, UITouch, WXRecycleSliderView;

@protocol WXRecycleSliderViewDelegate <UIScrollViewDelegate>
- (_Bool)requestGestureShouldStopPropagation:(UIGestureRecognizer *)arg1 shouldReceiveTouch:(UITouch *)arg2;
- (void)scrollViewDidEndDragging:(UIScrollView *)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(UIScrollView *)arg1;
- (void)recycleSliderView:(WXRecycleSliderView *)arg1 didScrollToItemAtIndex:(long long)arg2;
- (void)recycleSliderView:(WXRecycleSliderView *)arg1 didScroll:(UIScrollView *)arg2;
@end

