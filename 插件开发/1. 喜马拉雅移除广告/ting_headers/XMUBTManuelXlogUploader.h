//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "XMUBTManualLoggerDelegate-Protocol.h"

@class NSString;

@interface XMUBTManuelXlogUploader : NSObject <XMUBTManualLoggerDelegate>
{
}

- (void)uploadResultWithModule:(id)arg1 subModule:(id)arg2 datas:(id)arg3;
- (id)initUploaderWithAppId:(id)arg1 deviceId:(id)arg2 channel:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

