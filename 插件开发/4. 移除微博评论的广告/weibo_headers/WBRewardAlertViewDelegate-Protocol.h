//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, WBRewardAlertView;

@protocol WBRewardAlertViewDelegate <NSObject>

@optional
- (void)rewardAlertView:(WBRewardAlertView *)arg1 rewardMoney:(NSString *)arg2;
- (void)rewardAlertView:(WBRewardAlertView *)arg1 selectedAnonymous:(_Bool)arg2;
- (void)rewardAlertViewDidComplete:(WBRewardAlertView *)arg1;
- (void)rewardAlertViewDidCanceled:(WBRewardAlertView *)arg1;
@end

