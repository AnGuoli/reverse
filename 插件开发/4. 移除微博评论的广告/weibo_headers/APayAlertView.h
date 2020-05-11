//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIAlertViewDelegate-Protocol.h"

@class NSString, UIAlertView, UIViewController;
@protocol APayAlertViewDelegate;

@interface APayAlertView : NSObject <UIAlertViewDelegate>
{
    long long _totalIndex;
    long long _cancelButtonIndex;
    id <APayAlertViewDelegate> _delegate;
    UIAlertView *_alertView;
    UIViewController *_alertContrller;
    UIViewController *_bottomContrller;
}

@property(retain, nonatomic) UIViewController *bottomContrller; // @synthesize bottomContrller=_bottomContrller;
@property(retain, nonatomic) UIViewController *alertContrller; // @synthesize alertContrller=_alertContrller;
@property(retain, nonatomic) UIAlertView *alertView; // @synthesize alertView=_alertView;
@property(nonatomic) __weak id <APayAlertViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long cancelButtonIndex; // @synthesize cancelButtonIndex=_cancelButtonIndex;
- (void).cxx_destruct;
- (void)applicationEnterBackground:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)dismissWithClickedButtonIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)show;
- (long long)actionWithTitle:(id)arg1 style:(long long)arg2;
- (id)initWithTitle:(id)arg1 message:(id)arg2 delegate:(id)arg3 cancelButtonTitle:(id)arg4 otherButtonTitles:(id)arg5;
- (void)dealloc;
- (void)internal_init;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

