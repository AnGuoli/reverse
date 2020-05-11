//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class CAGradientLayer, CAShapeLayer, UILabel;

@interface WBVideoMyVideoTipView : UIControl
{
    double _arrowPointOffsetX;
    CAShapeLayer *_gradientMaskLayer;
    CAGradientLayer *_gradientLayer;
    UILabel *_tipsLabel;
}

@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) CAShapeLayer *gradientMaskLayer; // @synthesize gradientMaskLayer=_gradientMaskLayer;
@property(nonatomic) double arrowPointOffsetX; // @synthesize arrowPointOffsetX=_arrowPointOffsetX;
- (void).cxx_destruct;
- (void)hiddenTextBubbleTips;
- (void)delayHidden;
- (void)showTextBubbleTips;
- (void)layoutSubviews;
- (void)updateMaskLayer;
- (id)initWithFrame:(struct CGRect)arg1;

@end

