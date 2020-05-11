//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UILabel.h>

@class NSArray, UIColor;

@interface THLabel : UILabel
{
    _Bool _automaticallyAdjustTextInsets;
    double _letterSpacing;
    double _lineSpacing;
    double _shadowBlur;
    double _innerShadowBlur;
    UIColor *_innerShadowColor;
    double _strokeSize;
    UIColor *_strokeColor;
    long long _strokePosition;
    NSArray *_gradientColors;
    unsigned long long _fadeTruncatingMode;
    struct CGSize _innerShadowOffset;
    struct CGPoint _gradientStartPoint;
    struct CGPoint _gradientEndPoint;
    struct UIEdgeInsets _textInsets;
}

@property(nonatomic) _Bool automaticallyAdjustTextInsets; // @synthesize automaticallyAdjustTextInsets=_automaticallyAdjustTextInsets;
@property(nonatomic) struct UIEdgeInsets textInsets; // @synthesize textInsets=_textInsets;
@property(nonatomic) unsigned long long fadeTruncatingMode; // @synthesize fadeTruncatingMode=_fadeTruncatingMode;
@property(nonatomic) struct CGPoint gradientEndPoint; // @synthesize gradientEndPoint=_gradientEndPoint;
@property(nonatomic) struct CGPoint gradientStartPoint; // @synthesize gradientStartPoint=_gradientStartPoint;
@property(copy, nonatomic) NSArray *gradientColors; // @synthesize gradientColors=_gradientColors;
@property(nonatomic) long long strokePosition; // @synthesize strokePosition=_strokePosition;
@property(retain, nonatomic) UIColor *strokeColor; // @synthesize strokeColor=_strokeColor;
@property(nonatomic) double strokeSize; // @synthesize strokeSize=_strokeSize;
@property(retain, nonatomic) UIColor *innerShadowColor; // @synthesize innerShadowColor=_innerShadowColor;
@property(nonatomic) struct CGSize innerShadowOffset; // @synthesize innerShadowOffset=_innerShadowOffset;
@property(nonatomic) double innerShadowBlur; // @synthesize innerShadowBlur=_innerShadowBlur;
@property(nonatomic) double shadowBlur; // @synthesize shadowBlur=_shadowBlur;
@property(nonatomic) double lineSpacing; // @synthesize lineSpacing=_lineSpacing;
@property(nonatomic) double letterSpacing; // @synthesize letterSpacing=_letterSpacing;
- (void).cxx_destruct;
- (struct CGImage *)linearGradientImageWithRect:(struct CGRect)arg1 fadeHead:(_Bool)arg2 fadeTail:(_Bool)arg3;
- (struct CGImage *)strokeImageWithRect:(struct CGRect)arg1 frameRef:(struct __CTFrame *)arg2 strokeSize:(double)arg3 strokeColor:(id)arg4;
- (struct CGImage *)inverseMaskFromAlphaMask:(struct CGImage *)arg1 withRect:(struct CGRect)arg2;
- (struct UIEdgeInsets)fittingTextInsets;
- (struct CGRect)textRectFromContentRect:(struct CGRect)arg1 framesetterRef:(struct __CTFramesetter *)arg2;
- (struct CGRect)contentRectFromSize:(struct CGSize)arg1 withInsets:(struct UIEdgeInsets)arg2;
- (unsigned char)CTTextAlignmentFromNSTextAlignment:(long long)arg1;
- (struct __CTFrame *)frameRefFromSize:(struct CGSize)arg1 textRectOutput:(struct CGRect *)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (double)strokeSizeDependentOnStrokePosition;
@property(retain, nonatomic) UIColor *gradientEndColor;
@property(retain, nonatomic) UIColor *gradientStartColor;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (_Bool)hasFadeTruncating;
- (_Bool)hasGradient;
- (_Bool)hasStroke;
- (_Bool)hasInnerShadow;
- (_Bool)hasShadow;
- (void)setDefaults;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

