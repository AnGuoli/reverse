//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAGradientLayer, UIButton, UILabel, UITableView, WBContentImageView, WBIndicatorView;

@interface WBSTCardListNavBar : UIView
{
    UIButton *_favoriteButton;
    UIButton *_rightButton;
    UILabel *_titleLabel;
    WBIndicatorView *_indicatorView;
    unsigned long long _style;
    UITableView *_observerScrollView;
    UIButton *_closeButton;
    WBContentImageView *_backgroundImageView;
    CAGradientLayer *_gradientLayer;
}

+ (unsigned long long)styleWithHeaderStyle:(long long)arg1;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) WBContentImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UITableView *observerScrollView; // @synthesize observerScrollView=_observerScrollView;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(retain, nonatomic) WBIndicatorView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButton *rightButton; // @synthesize rightButton=_rightButton;
@property(retain, nonatomic) UIButton *favoriteButton; // @synthesize favoriteButton=_favoriteButton;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (struct CGRect)layoutFrame;
- (struct CGRect)titleLabelVisibleFrame;
- (double)navigationBarAlphaValue;
- (void)updateNavigationBar;
- (void)setBackground:(double)arg1;
- (void)hideIndicator;
- (void)showIndicator;
- (void)udpateWithOffsetY:(double)arg1;
- (void)dealloc;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

