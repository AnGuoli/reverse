//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIWindow;

@interface WBIapCancelRetainAlert : UIView
{
    UIWindow *_showWindows;
    CDUnknownBlockType _dismissBlock;
}

+ (void)showAlertWithTitle:(id)arg1 contentImageUrl:(id)arg2 dismissBlock:(CDUnknownBlockType)arg3;
@property(copy, nonatomic) CDUnknownBlockType dismissBlock; // @synthesize dismissBlock=_dismissBlock;
@property(retain, nonatomic) UIWindow *showWindows; // @synthesize showWindows=_showWindows;
- (void).cxx_destruct;
- (void)dismiss:(id)arg1;
- (void)show;
- (id)initWithTitle:(id)arg1 contentImageUrl:(id)arg2;

@end

