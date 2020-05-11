//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class UILabel, UIView;

@interface XMDubVoiceAlignmentSlider : UIControl
{
    _Bool _inTracking;
    UILabel *_despLabel;
    UIView *_colorLine;
    UIView *_bgLine;
    UIView *_thumbView;
    UIView *_centerView;
    double _progress;
}

@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(retain, nonatomic) UIView *centerView; // @synthesize centerView=_centerView;
@property(retain, nonatomic) UIView *thumbView; // @synthesize thumbView=_thumbView;
@property(retain, nonatomic) UIView *bgLine; // @synthesize bgLine=_bgLine;
@property(retain, nonatomic) UIView *colorLine; // @synthesize colorLine=_colorLine;
@property(retain, nonatomic) UILabel *despLabel; // @synthesize despLabel=_despLabel;
@property(nonatomic) _Bool inTracking; // @synthesize inTracking=_inTracking;
- (void).cxx_destruct;
- (void)onRight;
- (void)onLeft;
- (void)onPan:(id)arg1;
- (void)updateProgress:(double)arg1;
@property(nonatomic) long long alignMs;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (id)initWithFrame:(struct CGRect)arg1;

@end

