//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, WBEasyLoginView;

@protocol WBEasyLoginViewDelegate <NSObject>

@optional
- (void)didPressedButtonForAbroadLogin:(WBEasyLoginView *)arg1 extraParameters:(NSDictionary *)arg2 withCompletion:(void (^)(_Bool))arg3;
- (void)didVerifyCodeForRegister:(WBEasyLoginView *)arg1 extraParameters:(NSDictionary *)arg2 withCompletion:(void (^)(_Bool))arg3;
- (void)didVerifyCodeForLogin:(WBEasyLoginView *)arg1 extraParameters:(NSDictionary *)arg2 withCompletion:(void (^)(_Bool))arg3;
- (void)didPressedButtonForSendCodeRequest:(WBEasyLoginView *)arg1 extraParameters:(NSDictionary *)arg2 withCompletion:(void (^)(unsigned long long))arg3;
@end

