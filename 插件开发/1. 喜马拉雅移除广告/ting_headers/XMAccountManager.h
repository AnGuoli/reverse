//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface XMAccountManager : NSObject
{
}

+ (void)afterLoginSuccess;
+ (id)loginSuccessWithResponse:(id)arg1;
+ (id)switchCheckWithPreUid:(long long)arg1;
+ (id)checkLogin;
+ (id)logout;
+ (id)modifyPasswordWithOld:(id)arg1 new:(id)arg2;
+ (id)resetPasswordWithMobile:(id)arg1 code:(id)arg2 password:(id)arg3;
+ (id)setPassword:(id)arg1;
+ (id)getPasswordStatus;
+ (id)validateMobile:(id)arg1 verifyCode:(id)arg2;
+ (id)smsLoginWithMobile:(id)arg1 verifyCode:(id)arg2;
+ (id)loginWithAccount:(id)arg1 fdsOtp:(id)arg2 psw:(id)arg3;
+ (id)loginWithAccount:(id)arg1 psw:(id)arg2;
+ (id)checkSmsWithMobile:(id)arg1 code:(id)arg2;
+ (id)sendSmsWithMobile:(id)arg1 fdsOtp:(id)arg2 isVoice:(_Bool)arg3 biz:(unsigned long long)arg4;
+ (id)sendSmsWithMobile:(id)arg1 isVoice:(_Bool)arg2;
+ (id)getWithPath:(id)arg1;
+ (id)error:(id)arg1;
+ (id)postWithPath:(id)arg1 parameters:(id)arg2;
+ (id)signatureRequestWithPath:(id)arg1 parameters:(id)arg2;
+ (id)getNonce;
+ (id)oneKeyLoginWithToken:(id)arg1;
+ (id)oneKeyGetPhoneNumberWithToken:(id)arg1;
+ (id)oneKeyGetNonce;
+ (id)unBindWithAuthType:(unsigned long long)arg1;
+ (id)getBindStatus;
+ (void)updateUserBaseInfo;
+ (id)getUserBaseInfo;
+ (id)forceBindMobile:(id)arg1;
+ (id)loginBindMobile:(id)arg1 verifyCode:(id)arg2;
+ (id)authBindWithParameters:(id)arg1 authType:(unsigned long long)arg2;
+ (id)authLoginWithParameters:(id)arg1 authType:(unsigned long long)arg2;
+ (id)p_authWithParameters:(id)arg1 authType:(unsigned long long)arg2;

@end

