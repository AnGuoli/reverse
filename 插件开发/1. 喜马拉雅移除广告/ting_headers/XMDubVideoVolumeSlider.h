//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class NSString, UILabel, UIView;

@interface XMDubVideoVolumeSlider : UIControl
{
    _Bool _inTracking;
    NSString *_title;
    double _progress;
    UILabel *_titleLabel;
    UIView *_minView;
    UIView *_maxView;
    UIView *_thumbView;
}

@property(retain, nonatomic) UIView *thumbView; // @synthesize thumbView=_thumbView;
@property(retain, nonatomic) UIView *maxView; // @synthesize maxView=_maxView;
@property(retain, nonatomic) UIView *minView; // @synthesize minView=_minView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) _Bool inTracking; // @synthesize inTracking=_inTracking;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)onPan:(id)arg1;
- (void)updateProgress:(double)arg1;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (id)initWithFrame:(struct CGRect)arg1;

@end

