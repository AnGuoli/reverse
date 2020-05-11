//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "LDNetDiagnoServiceDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class LDNetDiagnoService, NSString, UIActivityIndicatorView, UIButton, UITextField, UITextView;

@interface XMNetDiagnoServiceViewController : UIViewController <LDNetDiagnoServiceDelegate, UITextFieldDelegate>
{
    UIActivityIndicatorView *_indicatorView;
    UIButton *btn;
    UITextView *_txtView_log;
    UITextField *_txtfield_dormain;
    NSString *_logInfo;
    LDNetDiagnoService *_netDiagnoService;
    _Bool _isRunning;
}

- (void).cxx_destruct;
- (id)getTraceRouteUrl;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)emailLogInfo;
- (void)netDiagnosisDidEnd:(id)arg1;
- (void)netDiagnosisStepInfo:(id)arg1;
- (void)netDiagnosisDidStarted;
- (void)didReceiveMemoryWarning;
- (void)delayMethod;
- (void)startNetDiag;
- (void)viewDidLoad;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

