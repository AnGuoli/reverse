//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class NSString, UIImageView, UILabel, UIView, WBContentImageView;

@interface WBAniamtionFollowAuthorButton : UIButton
{
    _Bool _isAnimating;
    NSString *_iconUrlStr;
    WBContentImageView *_iconView;
    UIView *_textBackgroundView;
    UILabel *_textLabel;
    UIImageView *_followIconView;
}

@property(nonatomic) _Bool isAnimating; // @synthesize isAnimating=_isAnimating;
@property(retain, nonatomic) UIImageView *followIconView; // @synthesize followIconView=_followIconView;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) UIView *textBackgroundView; // @synthesize textBackgroundView=_textBackgroundView;
@property(retain, nonatomic) WBContentImageView *iconView; // @synthesize iconView=_iconView;
@property(copy, nonatomic) NSString *iconUrlStr; // @synthesize iconUrlStr=_iconUrlStr;
- (void).cxx_destruct;
- (void)animationFollowButtonSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (void)showAnimationFollowButton:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

