//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAGradientLayer, CALayer, CAShapeLayer;

@interface XMVCGuidePinView : UIView
{
    _Bool _reverse;
    CAShapeLayer *_dotLayer;
    CAShapeLayer *_haloLayer;
    CAGradientLayer *_lineLayer;
    CALayer *_hadLayer;
}

+ (struct CGSize)size;
@property(retain, nonatomic) CALayer *hadLayer; // @synthesize hadLayer=_hadLayer;
@property(retain, nonatomic) CAGradientLayer *lineLayer; // @synthesize lineLayer=_lineLayer;
@property(retain, nonatomic) CAShapeLayer *haloLayer; // @synthesize haloLayer=_haloLayer;
@property(retain, nonatomic) CAShapeLayer *dotLayer; // @synthesize dotLayer=_dotLayer;
@property(nonatomic) _Bool reverse; // @synthesize reverse=_reverse;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)remakeLayout;
- (void)layoutSubviews;
- (void)customInit;
- (double)diameter;
- (_Bool)isV;
- (id)initWithFrame:(struct CGRect)arg1;

@end

