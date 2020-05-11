//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "MMKernelExt-Protocol.h"
#import "MMServiceProtocol-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"

@class NSString;

@interface WASearchAdMgr : MMService <PBMessageObserverDelegate, MMKernelExt, MMServiceProtocol>
{
}

- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handleWeAppSearchAdClickResp:(id)arg1;
- (void)handleAdLogResp:(id)arg1;
- (void)weAppSearchADClick:(id)arg1 statKeywordId:(id)arg2 searchId:(id)arg3 docId:(id)arg4 position:(long long)arg5 appUserName:(id)arg6 appVersion:(id)arg7 adBuffer:(id)arg8 searchScene:(long long)arg9 clickExtInfo:(id)arg10;
- (void)reportADLog:(unsigned int)arg1 logExt:(id)arg2;
- (void)weAppClickStream:(id)arg1 keywordId:(id)arg2 clickType:(int)arg3 searchScene:(long long)arg4;
- (id)getKVLogHead;
- (void)dealloc;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

