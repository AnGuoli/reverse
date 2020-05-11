//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class TYCyclePagerView, UICollectionViewCell, UICollectionViewLayoutAttributes;

@protocol TYCyclePagerViewDelegate <NSObject>

@optional
- (void)pagerViewDidEndScrollingAnimation:(TYCyclePagerView *)arg1;
- (void)pagerViewWillBeginScrollingAnimation:(TYCyclePagerView *)arg1;
- (void)pagerViewDidEndDecelerating:(TYCyclePagerView *)arg1;
- (void)pagerViewWillBeginDecelerating:(TYCyclePagerView *)arg1;
- (void)pagerViewDidEndDragging:(TYCyclePagerView *)arg1 willDecelerate:(_Bool)arg2;
- (void)pagerViewWillBeginDragging:(TYCyclePagerView *)arg1;
- (void)pagerViewDidScroll:(TYCyclePagerView *)arg1;
- (void)pagerView:(TYCyclePagerView *)arg1 applyTransformToAttributes:(UICollectionViewLayoutAttributes *)arg2;
- (void)pagerView:(TYCyclePagerView *)arg1 initializeTransformAttributes:(UICollectionViewLayoutAttributes *)arg2;
- (void)pagerView:(TYCyclePagerView *)arg1 didSelectedItemCell:(UICollectionViewCell *)arg2 atIndex:(long long)arg3;
- (void)pagerView:(TYCyclePagerView *)arg1 didScrollFromIndex:(long long)arg2 toIndex:(long long)arg3;
@end

