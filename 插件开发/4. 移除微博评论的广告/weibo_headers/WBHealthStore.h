//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol WBHealthDataProvider;

@interface WBHealthStore : NSObject
{
    id <WBHealthDataProvider> _healthkit_provider;
    id <WBHealthDataProvider> _coremotion_provider;
}

+ (id)sharedStore;
@property(readonly, nonatomic) id <WBHealthDataProvider> coremotion_provider; // @synthesize coremotion_provider=_coremotion_provider;
@property(readonly, nonatomic) id <WBHealthDataProvider> healthkit_provider; // @synthesize healthkit_provider=_healthkit_provider;
- (void).cxx_destruct;
- (void)queryLatestWeightDataCompletion:(CDUnknownBlockType)arg1;
- (void)queryStepDataStart:(id)arg1 End:(id)arg2 Interval:(double)arg3 Completion:(CDUnknownBlockType)arg4;
- (void)queryTotalStepDataFrom:(id)arg1 To:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)queryTodaysStepDataCompletion:(CDUnknownBlockType)arg1;
- (void)queryTodayValueCompletion:(CDUnknownBlockType)arg1;
- (void)authStateForStepCompletion:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) _Bool userAuthDone;
- (void)checkPreferProviderFrom:(id)arg1 to:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)checkPreferProviderCompletion:(CDUnknownBlockType)arg1;
- (id)init;

@end

