//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@interface UIView (WBTSizes)
- (id)wbsdk_viewForAnimation;
- (struct CGRect)wbsdk_expandedFrame:(struct CGRect)arg1 withHorizontalOffset:(double)arg2;
- (struct CGRect)wbsdk_expandedFrame:(struct CGRect)arg1 withVerticalOffset:(double)arg2;
- (struct CGRect)wbsdk_expandedFrame:(struct CGRect)arg1 withOffset:(double)arg2;
- (struct CGRect)wbsdk_convertFrameToWindow:(id)arg1;
- (id)wbsdk_imageFromViewWithLowResolutionInRect:(struct CGRect)arg1;
- (id)wbsdk_imageFromViewInRect:(struct CGRect)arg1;
- (id)wbsdk_imageFromViewWithLowResolution;
- (id)wbsdk_imageFromView;
- (id)wbsdk_viewController;
- (struct CGPoint)wbsdk_offsetFromView:(id)arg1;
- (void)wbsdk_removeAllSubviews;
- (id)wbsdk_ancestorOrSelfWithClass:(Class)arg1;
- (id)wbsdk_descendantOrSelfWithClass:(Class)arg1;
- (void)setWbsdkSize:(struct CGSize)arg1;
- (struct CGSize)wbsdkSize;
- (void)setWbsdkOrigin:(struct CGPoint)arg1;
- (struct CGPoint)wbsdkOrigin;
- (struct CGRect)wbsdkScreenFrame;
- (double)wbsdkScreenViewY;
- (double)wbsdkScreenViewX;
- (double)wbsdkTTScreenY;
- (double)wbsdkTTScreenX;
- (void)setWbsdkHeight:(double)arg1;
- (double)wbsdkHeight;
- (void)setWbsdkWidth:(double)arg1;
- (double)wbsdkWidth;
- (void)setWbsdkCenterY:(double)arg1;
- (double)wbsdkCenterY;
- (void)setWbsdkCenterX:(double)arg1;
- (double)wbsdkCenterX;
- (void)setWbsdkBottom:(double)arg1;
- (double)wbsdkBottom;
- (void)setWbsdkRight:(double)arg1;
- (double)wbsdkRight;
- (void)setWbsdkTop:(double)arg1;
- (double)wbsdkTop;
- (void)setWbsdkLeft:(double)arg1;
- (double)wbsdkLeft;
@end

