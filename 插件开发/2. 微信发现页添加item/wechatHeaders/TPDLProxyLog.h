//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TPDLProxyLog : NSObject
{
}

+ (void)logDebug:(id)arg1 line:(int)arg2 tag:(id)arg3 msg:(id)arg4;
+ (void)logError:(id)arg1 line:(int)arg2 tag:(id)arg3 msg:(id)arg4;
+ (void)logWarn:(id)arg1 line:(int)arg2 tag:(id)arg3 msg:(id)arg4;
+ (void)logInfo:(id)arg1 line:(int)arg2 tag:(id)arg3 msg:(id)arg4;
+ (void)setLogDelegateWithServiceType:(int)arg1 logDelegate:(id)arg2;

@end

