//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMBaseAlert.h"

@class NSTimer, UILabel, XMSubsidyAlertItem;

@interface XMSubsidyAlertView : XMBaseAlert
{
    XMSubsidyAlertItem *_item;
    CDUnknownBlockType _buttonDidClick;
    UILabel *_countDownLabel;
    NSTimer *_timer;
    double _expireMachineTime;
}

+ (id)countDownStringForSeconds:(unsigned long long)arg1;
+ (void)todayDidShow;
+ (_Bool)shouldShow;
+ (_Bool)showSubsidyAlertForTaskFinishedIfNeeded;
+ (void)showSubsidyAlertForPaySuccessWithAlbumId:(long long)arg1;
+ (void)showSubsidyAlertForNotLoginIfNeededInVc:(id)arg1;
@property(nonatomic) double expireMachineTime; // @synthesize expireMachineTime=_expireMachineTime;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) UILabel *countDownLabel; // @synthesize countDownLabel=_countDownLabel;
@property(copy, nonatomic) CDUnknownBlockType buttonDidClick; // @synthesize buttonDidClick=_buttonDidClick;
@property(retain, nonatomic) XMSubsidyAlertItem *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (void)tap:(id)arg1;
- (void)buttonClick:(id)arg1;
- (void)closeBtn:(id)arg1;
- (id)alertButtonTitle;
- (id)alertSubtitle;
- (id)alertTitle;
- (void)updateUIForDidReceive;
- (id)countDownStrFor123;
- (void)updateUIForNotLogin;
- (void)timerFired:(id)arg1;
- (void)startTimer;
- (void)stopTimer;
- (void)removeFromSuperview;
- (void)initUI;

@end

