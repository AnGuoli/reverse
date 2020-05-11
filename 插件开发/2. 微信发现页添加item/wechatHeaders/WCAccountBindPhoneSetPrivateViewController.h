//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCAccountBaseViewController.h"

@class NSString, UIButton;
@protocol WCAccountBindPhoneSetPrivateViewControllerDelegate;

@interface WCAccountBindPhoneSetPrivateViewController : WCAccountBaseViewController
{
    NSString *m_nsHeaderWording;
    id <WCAccountBindPhoneSetPrivateViewControllerDelegate> m_delegate;
    UIButton *m_pushFriendToMeBtn;
    UIButton *m_mobileCanBeFoundBtn;
}

- (void).cxx_destruct;
- (void)setDelegate:(id)arg1;
- (void)viewDidLoad;
- (void)initTableView;
- (void)onPushFriendToMeAgreementClick;
- (void)onMobileCanBeFoundAgreementClick;
- (void)setPushFriendToMe:(_Bool)arg1;
- (void)setAgreeMobileCanBeFound:(_Bool)arg1;
- (void)initNavigationBar;
- (void)onNext;

@end

