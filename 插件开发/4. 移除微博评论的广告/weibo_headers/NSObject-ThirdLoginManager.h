//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface NSObject (ThirdLoginManager)
- (void)dismissSelf;
- (void)loginCompleteWithAccount:(id)arg1 gotoScheme:(id)arg2;
- (id)showProgressHud;
- (void)handlerAppleError:(id)arg1 withAuthorizationCode:(id)arg2 params:(id)arg3;
- (void)appleLoginWithAppleID:(id)arg1 analysisParameters:(id)arg2 extraParameters:(id)arg3;
- (void)appleLoginWithAppleID:(id)arg1 analysisParameters:(id)arg2;
- (void)handlerWechatError:(id)arg1 params:(id)arg2;
- (void)wechatLoginWithParams:(id)arg1 analysisParameters:(id)arg2;
- (void)wechatLoginWithCode:(id)arg1 analysisParameters:(id)arg2 extraParameters:(id)arg3;
- (void)wechatLoginWithCode:(id)arg1 analysisParameters:(id)arg2;
- (void)handlerError:(id)arg1 tencentOAuth:(id)arg2 params:(id)arg3;
- (void)qqLoginWithtencentOAuth:(id)arg1 QQParams:(id)arg2 analysisParams:(id)arg3;
- (void)qqLoginWithOAuth:(id)arg1 analysisParameters:(id)arg2 extraParameters:(id)arg3;
- (void)qqLoginWithOAuth:(id)arg1 analysisParameters:(id)arg2;
@end

