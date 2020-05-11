//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TXLiveAudioSessionDelegate-Protocol.h"
#import "TXLiveBaseDelegate-Protocol.h"

@class NSString;

@interface TXLiveBaseAdapter : NSObject <TXLiveBaseDelegate, TXLiveAudioSessionDelegate>
{
    _Bool _isLoging;
    NSString *_appId;
}

+ (id)shareInstance;
@property(nonatomic) _Bool isLoging; // @synthesize isLoging=_isLoging;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
- (void).cxx_destruct;
- (_Bool)overrideOutputAudioPort:(unsigned long long)arg1 error:(id *)arg2;
- (_Bool)setCategory:(id)arg1 mode:(id)arg2 options:(unsigned long long)arg3 error:(id *)arg4;
- (_Bool)setCategory:(id)arg1 withOptions:(unsigned long long)arg2 error:(id *)arg3;
- (_Bool)setCategory:(id)arg1 error:(id *)arg2;
- (_Bool)setMode:(id)arg1 error:(id *)arg2;
- (_Bool)setActive:(_Bool)arg1 error:(id *)arg2;
- (unsigned long long)covertAVCategroy2WCCategroy:(id)arg1;
- (void)onLog:(id)arg1 LogLevel:(int)arg2 WhichModule:(id)arg3;
- (void)stopLog;
- (void)startLog;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

