//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WBHealthDataProvider-Protocol.h"

@class NSString;

@interface WBCMDataStore : NSObject <WBHealthDataProvider>
{
    id _stepCounter;
}

@property(retain, nonatomic) id stepCounter; // @synthesize stepCounter=_stepCounter;
- (void).cxx_destruct;
- (void)_queryStepDatafrom:(id)arg1 to:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)queryDataOfType:(unsigned long long)arg1 from:(id)arg2 to:(id)arg3 interval:(double)arg4 completion:(CDUnknownBlockType)arg5;
- (void)queryTotalDataOfType:(unsigned long long)arg1 from:(id)arg2 to:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_checkStateWithErrorCompletion:(CDUnknownBlockType)arg1;
- (void)authStateWithCompletion:(CDUnknownBlockType)arg1;
- (void)requestAuthorityCompletion:(CDUnknownBlockType)arg1;
@property(nonatomic) unsigned long long authState;
- (void)queryLatestWeightDataCompletion:(CDUnknownBlockType)arg1;
@property(nonatomic) _Bool weightAuthDone;
@property(nonatomic) _Bool userAuthDone;
@property(nonatomic) _Bool hasSkipped;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

