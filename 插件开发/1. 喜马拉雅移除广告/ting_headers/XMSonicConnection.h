//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SonicConnection.h"

#import "NSURLSessionDataDelegate-Protocol.h"

@class NSString, NSThread, XMSonicRequest;

@interface XMSonicConnection : SonicConnection <NSURLSessionDataDelegate>
{
    _Bool _resCache;
    _Bool _useWK;
    _Bool _isFormRequest;
    NSThread *_thread;
    id _formParams;
    XMSonicRequest *_dataRequest;
}

@property(retain, nonatomic) XMSonicRequest *dataRequest; // @synthesize dataRequest=_dataRequest;
@property(retain, nonatomic) id formParams; // @synthesize formParams=_formParams;
@property(nonatomic) _Bool isFormRequest; // @synthesize isFormRequest=_isFormRequest;
@property(nonatomic) _Bool useWK; // @synthesize useWK=_useWK;
@property(nonatomic) _Bool resCache; // @synthesize resCache=_resCache;
@property(retain, nonatomic) NSThread *thread; // @synthesize thread=_thread;
- (void)URLSession:(id)arg1 redirection:(id)arg2 newRequest:(id)arg3;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)stopLoading;
- (void)startLoading;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

