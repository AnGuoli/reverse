//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RCTView.h"

@class NSString, SVGAView, UIColor, UILabel;

@interface RNGiftSendCountView : RCTView
{
    _Bool _animating;
    double _fontSize;
    NSString *_fontFamily;
    NSString *_text;
    UIColor *_color;
    UIColor *_shadowColor;
    double _duration;
    NSString *_effectSvga;
    UILabel *_countTextLabel;
    SVGAView *_effectView;
}

@property(retain, nonatomic) SVGAView *effectView; // @synthesize effectView=_effectView;
@property(retain, nonatomic) UILabel *countTextLabel; // @synthesize countTextLabel=_countTextLabel;
@property(nonatomic) _Bool animating; // @synthesize animating=_animating;
@property(copy, nonatomic) NSString *effectSvga; // @synthesize effectSvga=_effectSvga;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(retain, nonatomic) UIColor *shadowColor; // @synthesize shadowColor=_shadowColor;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(copy, nonatomic) NSString *fontFamily; // @synthesize fontFamily=_fontFamily;
@property(nonatomic) double fontSize; // @synthesize fontSize=_fontSize;
- (void).cxx_destruct;
- (void)cancelAnimation;
- (void)startAnimation;
- (_Bool)checkArgs;
- (void)syncUIFrames;
- (void)reactSetFrame:(struct CGRect)arg1;

@end

