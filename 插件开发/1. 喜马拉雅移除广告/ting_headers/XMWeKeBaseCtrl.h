//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMBaseVC.h"

@class UIButton, UILabel, UIView;

@interface XMWeKeBaseCtrl : XMBaseVC
{
    UIView *_navigationBar;
    UIView *_navigationBarLine;
    UILabel *_titleLabel;
    UIButton *_rightButton;
    UIButton *_backButton;
    _Bool _autoReleaseView;
    UIView *_titleView;
}

@property(retain, nonatomic) UIView *titleView; // @synthesize titleView=_titleView;
@property(nonatomic) _Bool autoReleaseView; // @synthesize autoReleaseView=_autoReleaseView;
- (void).cxx_destruct;
- (_Bool)shouldShowNoNetView;
@property(readonly, nonatomic) UIButton *backButton;
@property(readonly, nonatomic) UIButton *rightButton;
@property(readonly, nonatomic) UILabel *titleLabel;
@property(readonly, nonatomic) UIView *navigationBarLine;
@property(readonly, nonatomic) UIView *navigationBar;
- (void)setTitle:(id)arg1;
- (void)clickRightButton:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)addCustomBackButton;
- (void)addCustomRightButton:(id)arg1 image:(id)arg2;
- (void)addRightButton:(id)arg1 image:(id)arg2;
- (void)addCustomTitleView:(id)arg1;
- (void)addCustomTitleLabel;
- (void)addCustomNavigationBar;
- (_Bool)isVisiable;
- (void)didReceiveMemoryWarning;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)didInitialize;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

