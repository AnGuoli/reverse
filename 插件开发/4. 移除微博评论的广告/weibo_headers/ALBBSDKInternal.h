//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIWebView.h>

@class ALBBAuthHybridService, ALBBReachability, NSArray, UIViewController;

@interface ALBBSDKInternal : UIWebView
{
    _Bool _isUseMtopAndSecurity;
    _Bool _isNetWorkOK;
    _Bool _isWillJump2TaobaoClientToBind;
    _Bool _isWillJump2TaobaoClientToLogin;
    _Bool _openDebugLog;
    int _authOption;
    CDUnknownBlockType _loginResultHandler;
    UIViewController *_authController;
    ALBBReachability *_internetReachability;
    ALBBReachability *_wifiReachability;
    NSArray *_loginUrl;
    NSArray *_logoutUrl;
    ALBBAuthHybridService *_service;
}

+ (id)sharedInstance;
@property(retain, nonatomic) ALBBAuthHybridService *service; // @synthesize service=_service;
@property(retain, nonatomic) NSArray *logoutUrl; // @synthesize logoutUrl=_logoutUrl;
@property(retain, nonatomic) NSArray *loginUrl; // @synthesize loginUrl=_loginUrl;
@property(retain, nonatomic) ALBBReachability *wifiReachability; // @synthesize wifiReachability=_wifiReachability;
@property(retain, nonatomic) ALBBReachability *internetReachability; // @synthesize internetReachability=_internetReachability;
@property(nonatomic) int authOption; // @synthesize authOption=_authOption;
@property(nonatomic) _Bool openDebugLog; // @synthesize openDebugLog=_openDebugLog;
@property(nonatomic) _Bool isWillJump2TaobaoClientToLogin; // @synthesize isWillJump2TaobaoClientToLogin=_isWillJump2TaobaoClientToLogin;
@property(nonatomic) _Bool isWillJump2TaobaoClientToBind; // @synthesize isWillJump2TaobaoClientToBind=_isWillJump2TaobaoClientToBind;
@property(nonatomic) __weak UIViewController *authController; // @synthesize authController=_authController;
@property(nonatomic) _Bool isNetWorkOK; // @synthesize isNetWorkOK=_isNetWorkOK;
@property(copy, nonatomic) CDUnknownBlockType loginResultHandler; // @synthesize loginResultHandler=_loginResultHandler;
@property(nonatomic) _Bool isUseMtopAndSecurity; // @synthesize isUseMtopAndSecurity=_isUseMtopAndSecurity;
- (void).cxx_destruct;
- (void)clearService;
- (void)reachabilityChanged:(id)arg1;
- (void)updateNetWorkStatus;
- (void)setAppkey:(id)arg1;
- (void)handleSuccessLoginReturnInfo:(id)arg1;
- (void)loginByAuthCode:(id)arg1;
- (_Bool)isTBBackUrl:(id)arg1;
- (_Bool)isLogoutUrl:(id)arg1;
- (_Bool)isLoginURL:(id)arg1;
- (void)clearLocalSession;
- (void)logout;
- (_Bool)loginWithTaobaoIfPossible:(id)arg1;
- (void)showH5Login:(id)arg1 toast:(id)arg2 openUrl:(id)arg3;
- (void)showLoginView:(id)arg1 openUrl:(id)arg2;
- (void)authOnFailure:(id)arg1;
- (void)authOnSuccess;
- (void)autoLogin:(id)arg1 needLoginView:(_Bool)arg2 openUrl:(id)arg3;
- (void)auth:(id)arg1 needLoginView:(_Bool)arg2 openUrl:(id)arg3 needBind:(_Bool)arg4;
- (void)auth:(id)arg1 successCallback:(CDUnknownBlockType)arg2 failureCallback:(CDUnknownBlockType)arg3 needLoginView:(_Bool)arg4 needBind:(_Bool)arg5;
- (void)mtopInit;
- (void)checkAndUpdateSession;
- (void)ALBBSDKInit;

@end

