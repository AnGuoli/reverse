//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMBaseTabelVC.h"

@class UIButton, UILabel, XMAlarmClockModel, XMAlarmClockSoundPresenter;

@interface XMAlarmClockSoundViewController : XMBaseTabelVC
{
    XMAlarmClockModel *_model;
    UIButton *_backButton;
    UIButton *_commitButton;
    UILabel *_titleLabel;
    XMAlarmClockSoundPresenter *_presenter;
}

@property(retain, nonatomic) XMAlarmClockSoundPresenter *presenter; // @synthesize presenter=_presenter;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButton *commitButton; // @synthesize commitButton=_commitButton;
@property(retain, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
@property(retain, nonatomic) XMAlarmClockModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)commit;
- (void)p_updatePresenter;
- (void)p_setUI;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;

@end

