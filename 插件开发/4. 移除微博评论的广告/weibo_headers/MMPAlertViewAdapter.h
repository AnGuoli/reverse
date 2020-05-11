//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIAlertViewDelegate-Protocol.h"

@class NSString, UILabel;
@protocol MMPAlertViewDelegate, MMPAlertViewProtocol;

@interface MMPAlertViewAdapter : NSObject <UIAlertViewDelegate>
{
    id <MMPAlertViewDelegate> _delegate;
    long long _cancelButtonIndex;
    id <MMPAlertViewProtocol> _av;
    UILabel *_errorCodeLabel;
    NSString *_errorCode;
}

+ (void)initialize;
@property(retain, nonatomic) NSString *errorCode; // @synthesize errorCode=_errorCode;
@property(retain, nonatomic) UILabel *errorCodeLabel; // @synthesize errorCodeLabel=_errorCodeLabel;
@property(retain, nonatomic) id <MMPAlertViewProtocol> av; // @synthesize av=_av;
@property(nonatomic) long long cancelButtonIndex; // @synthesize cancelButtonIndex=_cancelButtonIndex;
@property(nonatomic) __weak id <MMPAlertViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)dismissWithClickedButtonIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)dismissAnimated:(_Bool)arg1;
- (void)dissmiss;
- (void)show;
- (id)initWithTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 otherButtonTitles:(id)arg4 delegate:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

