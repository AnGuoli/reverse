//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMSubLevelViewController.h"

#import "UITextFieldDelegate-Protocol.h"

@class NSString, PPMediaDevice, UITextField;

@interface XMWiFiNameViewController : XMSubLevelViewController <UITextFieldDelegate>
{
    UITextField *nameTextField;
    PPMediaDevice *setDevice;
}

@property(retain, nonatomic) PPMediaDevice *setDevice; // @synthesize setDevice;
@property(retain, nonatomic) UITextField *nameTextField; // @synthesize nameTextField;
- (void).cxx_destruct;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)requestNameDidFailed:(id)arg1;
- (void)requestNameDidFinished:(id)arg1;
- (void)setDeviceName;
- (void)addRightButton;
- (id)initWithDevice:(id)arg1;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

