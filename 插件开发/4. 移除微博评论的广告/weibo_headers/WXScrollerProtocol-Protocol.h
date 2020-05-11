//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, UIGestureRecognizer, UITouch, WXComponent;
@protocol UIScrollViewDelegate;

@protocol WXScrollerProtocol <NSObject>
- (unsigned long long)scrollDirection;
- (void)removeScrollDelegate:(id <UIScrollViewDelegate>)arg1;
- (void)addScrollDelegate:(id <UIScrollViewDelegate>)arg1;
- (void)resetLoadmore;
- (void)setContentInset:(struct UIEdgeInsets)arg1;
- (struct UIEdgeInsets)contentInset;
- (void)setContentSize:(struct CGSize)arg1;
- (struct CGSize)contentSize;
- (void)setContentOffset:(struct CGPoint)arg1 animated:(_Bool)arg2;
- (void)setContentOffset:(struct CGPoint)arg1;
- (struct CGPoint)contentOffset;
- (void)loadMore;
- (_Bool)isNeedLoadMore;
- (void)scrollToComponent:(WXComponent *)arg1 withOffset:(double)arg2 animated:(_Bool)arg3;
- (void)removeScrollToListener:(WXComponent *)arg1;
- (void)addScrollToListener:(WXComponent *)arg1;
- (void)adjustSticky;
- (void)removeStickyComponent:(WXComponent *)arg1;
- (void)addStickyComponent:(WXComponent *)arg1;

@optional
- (void)adjustForRTL;
- (_Bool)requestGestureShouldStopPropagation:(UIGestureRecognizer *)arg1 shouldReceiveTouch:(UITouch *)arg2;
- (NSString *)refreshType;
@end

