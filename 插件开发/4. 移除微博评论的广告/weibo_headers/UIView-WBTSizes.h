//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@interface UIView (WBTSizes)
- (id)wbt_viewForAnimation;
- (struct CGRect)wbt_expandedFrame:(struct CGRect)arg1 withHorizontalOffset:(double)arg2;
- (struct CGRect)wbt_expandedFrame:(struct CGRect)arg1 withVerticalOffset:(double)arg2;
- (struct CGRect)wbt_expandedFrame:(struct CGRect)arg1 withOffset:(double)arg2;
- (struct CGRect)wbt_convertFrameToWindow:(id)arg1;
- (id)wbt_imageFromViewWithLowResolutionInRect:(struct CGRect)arg1;
- (id)wbt_imageFromBlurViewWithLowResolution;
- (id)wbt_imageFromBlurView;
- (id)wbt_imageFromViewInRect:(struct CGRect)arg1;
- (id)wbt_imageFromViewWithLowResolution;
- (id)wbt_imageFromView;
- (id)wbt_imageFromViewImmediately;
- (id)wbt_viewController;
- (struct CGPoint)wbt_offsetFromView:(id)arg1;
- (void)wbt_removeAllSubviews;
- (id)wbt_ancestorOrSelfWithClass:(Class)arg1;
- (id)wbt_descendantOrSelfWithClass:(Class)arg1;
@property(nonatomic) struct CGSize wbtSize;
@property(nonatomic) struct CGPoint wbtOrigin;
@property(readonly, nonatomic) struct CGRect wbtScreenFrame;
@property(readonly, nonatomic) double wbtScreenViewY;
@property(readonly, nonatomic) double wbtScreenViewX;
@property(readonly, nonatomic) double wbtTTScreenY;
@property(readonly, nonatomic) double wbtTTScreenX;
@property(nonatomic) double wbtHeight;
@property(nonatomic) double wbtWidth;
@property(nonatomic) double wbtCenterY;
@property(nonatomic) double wbtCenterX;
@property(nonatomic) double wbtBottom;
@property(nonatomic) double wbtRight;
@property(nonatomic) double wbtTop;
@property(nonatomic) double wbtLeft;
@end

