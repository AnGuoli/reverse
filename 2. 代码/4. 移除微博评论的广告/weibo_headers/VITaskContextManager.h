//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class VITaskContext;

@interface VITaskContextManager : NSObject
{
    VITaskContext *_taskContext;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)clearTaskContextByVerifyId:(id)arg1 token:(id)arg2;
- (void)clearTaskContext;
- (id)currentContext;
- (id)defaultContext;

@end

