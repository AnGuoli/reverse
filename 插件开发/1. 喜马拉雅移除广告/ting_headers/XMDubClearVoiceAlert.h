//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, XMTimer;

@interface XMDubClearVoiceAlert : UIView
{
    CDUnknownBlockType _completedBlock;
    XMTimer *_timer;
    UIButton *_okButton;
}

@property(retain, nonatomic) UIButton *okButton; // @synthesize okButton=_okButton;
@property(retain, nonatomic) XMTimer *timer; // @synthesize timer=_timer;
@property(copy, nonatomic) CDUnknownBlockType completedBlock; // @synthesize completedBlock=_completedBlock;
- (void).cxx_destruct;
- (void)onClick;
- (void)onTimer;
- (void)customInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

