//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSURLSessionDelegate-Protocol.h"
#import "NSURLSessionTaskDelegate-Protocol.h"

@class FABCertificatePinner, NSString, NSURLSession;

@interface FABNetworkClient : NSObject <NSURLSessionDelegate, NSURLSessionTaskDelegate>
{
    FABCertificatePinner *_certPinner;
    NSURLSession *_session;
}

@property(readonly, nonatomic) NSURLSession *session; // @synthesize session=_session;
@property(readonly, nonatomic) FABCertificatePinner *certPinner; // @synthesize certPinner=_certPinner;
- (void).cxx_destruct;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (void)invalidateAndCancel;
- (void)startDownloadTaskWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)startDownloadTaskWithRequest:(id)arg1 retryLimit:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)startDownloadTaskWithRequest:(id)arg1 retryLimit:(unsigned long long)arg2 tries:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)startDataTaskWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)startDataTaskWithRequest:(id)arg1 retryLimit:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)startDataTaskWithRequest:(id)arg1 retryLimit:(unsigned long long)arg2 tries:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)runAfterRetryValueFromResponse:(id)arg1 attempts:(unsigned long long)arg2 block:(CDUnknownBlockType)arg3;
- (void)runAfterRetryValueFromResponse:(id)arg1 attempts:(unsigned long long)arg2 onQueue:(id)arg3 block:(CDUnknownBlockType)arg4;
- (double)computeDelayForResponse:(id)arg1 withRetryCount:(unsigned long long)arg2;
- (double)generateRandomJitter;
- (double)randomDoubleWithMin:(double)arg1 max:(double)arg2;
- (void)dealloc;
- (id)initWithSessionConfiguration:(id)arg1 queue:(id)arg2 pinnedCertificates:(id)arg3;
- (id)initWithQueue:(id)arg1 pinnedCertificates:(id)arg2;
- (id)initWithQueue:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

