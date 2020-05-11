//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIImageView;

@interface YXLiveGradientAvatorView : UIView
{
    _Bool _isAniming;
    _Bool _animated;
    UIImageView *_bgBorderView;
    UIImageView *_avatorBgView;
    UIImageView *_avatorView;
    NSString *_currentUrl;
    double _animDuration;
}

@property(nonatomic) double animDuration; // @synthesize animDuration=_animDuration;
@property(nonatomic) _Bool animated; // @synthesize animated=_animated;
@property(copy, nonatomic) NSString *currentUrl; // @synthesize currentUrl=_currentUrl;
@property(nonatomic) _Bool isAniming; // @synthesize isAniming=_isAniming;
@property(retain, nonatomic) UIImageView *avatorView; // @synthesize avatorView=_avatorView;
@property(retain, nonatomic) UIImageView *avatorBgView; // @synthesize avatorBgView=_avatorBgView;
@property(retain, nonatomic) UIImageView *bgBorderView; // @synthesize bgBorderView=_bgBorderView;
- (void).cxx_destruct;
- (void)setAvatorsStyleWithType:(long long)arg1;
- (void)setAvatorWithUrl:(id)arg1;
- (void)masksToBoundView:(id)arg1;
- (_Bool)isCurrentImage;
- (void)startAnimation;
- (void)viewUpdateConstraints;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

