//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "VIRPCExecutor-Protocol.h"

@interface APRPCExecutorForPB : NSObject <VIRPCExecutor>
{
}

- (void)monitorRPCFinished:(id)arg1 relRequest:(id)arg2 duration:(unsigned long long)arg3;
- (void)monitorStartRPCByInitReq:(id)arg1;
- (void)monitorStartRPCByRPCReq:(id)arg1;
- (void)executeBlockOnRPCQueue:(CDUnknownBlockType)arg1;
- (id)dispatchRPC:(id)arg1;
- (void)executeRPC:(id)arg1 showLoading:(_Bool)arg2 callback:(CDUnknownBlockType)arg3;
- (void)executeRPCCallBySceneId:(id)arg1 bizId:(id)arg2 extParams:(id)arg3 envData:(id)arg4 showLoading:(_Bool)arg5 bizRequestData:(id)arg6 callback:(CDUnknownBlockType)arg7;
- (void)executeRPCCallByKeyParams:(id)arg1 module:(id)arg2 method:(id)arg3 jsonParam:(id)arg4 envData:(id)arg5 showLoading:(_Bool)arg6 bizRequestData:(id)arg7 callback:(CDUnknownBlockType)arg8;
- (void)executeReportByParams:(id)arg1 callback:(CDUnknownBlockType)arg2;

@end

