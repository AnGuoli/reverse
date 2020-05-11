//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WBFPlayerNetworkerClient-Protocol.h"

@class NSDictionary, NSMutableData, NSString, NSURL, NSURLResponse;
@protocol WBFPlayerNetworking;

@interface WBFPlayerNetworkLayerAdaptor : NSObject <WBFPlayerNetworkerClient>
{
    _Bool _deallocing;
    _Bool _closed;
    _Bool _didEnterBackgroundWhileReading;
    _Bool _currentInBackground;
    Class _networkerClass;
    NSDictionary *_additionalRequestHeaders;
    unsigned long long _currentReadOffset;
    unsigned long long _currentWriteOffset;
    NSURLResponse *_response;
    CDUnknownBlockType _sendRequestBlock;
    CDUnknownBlockType _performRedirectBlock;
    CDUnknownBlockType _receiveResponseBlock;
    CDUnknownBlockType _interruptBlock;
    CDUnknownBlockType _collectMetricsBlock;
    unsigned long long _bufferBytesLimit;
    NSMutableData *_buffer;
    id <WBFPlayerNetworking> _currentNetworker;
    double _mostRecentResponseTime;
    double _mostRencetTimeoutOptions;
    struct _NSRange _currentLoadingRange;
    struct _opaque_pthread_cond_t _bufferEmptyCondition;
    struct _opaque_pthread_cond_t _bufferFullCondition;
    struct _opaque_pthread_cond_t _responseCondition;
    struct _opaque_pthread_cond_t _completionCondition;
    struct _opaque_pthread_mutex_t _bufferMutex;
    struct _opaque_pthread_mutex_t _networkerMutex;
    struct _opaque_pthread_mutex_t _closeMutex;
    struct _opaque_pthread_mutex_t _writeOperationMutex;
}

@property(nonatomic) double mostRencetTimeoutOptions; // @synthesize mostRencetTimeoutOptions=_mostRencetTimeoutOptions;
@property(nonatomic) _Bool currentInBackground; // @synthesize currentInBackground=_currentInBackground;
@property(nonatomic) _Bool didEnterBackgroundWhileReading; // @synthesize didEnterBackgroundWhileReading=_didEnterBackgroundWhileReading;
@property(nonatomic) double mostRecentResponseTime; // @synthesize mostRecentResponseTime=_mostRecentResponseTime;
@property(nonatomic) struct _opaque_pthread_mutex_t writeOperationMutex; // @synthesize writeOperationMutex=_writeOperationMutex;
@property(nonatomic) struct _opaque_pthread_mutex_t closeMutex; // @synthesize closeMutex=_closeMutex;
@property(nonatomic) struct _opaque_pthread_mutex_t networkerMutex; // @synthesize networkerMutex=_networkerMutex;
@property(nonatomic) struct _opaque_pthread_cond_t completionCondition; // @synthesize completionCondition=_completionCondition;
@property(nonatomic) struct _opaque_pthread_cond_t responseCondition; // @synthesize responseCondition=_responseCondition;
@property(nonatomic) _Bool closed; // @synthesize closed=_closed;
@property(nonatomic) _Bool deallocing; // @synthesize deallocing=_deallocing;
@property(retain, nonatomic) id <WBFPlayerNetworking> currentNetworker; // @synthesize currentNetworker=_currentNetworker;
@property(nonatomic) struct _opaque_pthread_mutex_t bufferMutex; // @synthesize bufferMutex=_bufferMutex;
@property(nonatomic) struct _opaque_pthread_cond_t bufferFullCondition; // @synthesize bufferFullCondition=_bufferFullCondition;
@property(nonatomic) struct _opaque_pthread_cond_t bufferEmptyCondition; // @synthesize bufferEmptyCondition=_bufferEmptyCondition;
@property(retain, nonatomic) NSMutableData *buffer; // @synthesize buffer=_buffer;
@property(nonatomic) unsigned long long bufferBytesLimit; // @synthesize bufferBytesLimit=_bufferBytesLimit;
@property(copy, nonatomic) CDUnknownBlockType collectMetricsBlock; // @synthesize collectMetricsBlock=_collectMetricsBlock;
@property(copy, nonatomic) CDUnknownBlockType interruptBlock; // @synthesize interruptBlock=_interruptBlock;
@property(copy, nonatomic) CDUnknownBlockType receiveResponseBlock; // @synthesize receiveResponseBlock=_receiveResponseBlock;
@property(copy, nonatomic) CDUnknownBlockType performRedirectBlock; // @synthesize performRedirectBlock=_performRedirectBlock;
@property(copy, nonatomic) CDUnknownBlockType sendRequestBlock; // @synthesize sendRequestBlock=_sendRequestBlock;
@property(readonly, nonatomic) NSURLResponse *response; // @synthesize response=_response;
@property(readonly, nonatomic) unsigned long long currentWriteOffset; // @synthesize currentWriteOffset=_currentWriteOffset;
@property(readonly, nonatomic) unsigned long long currentReadOffset; // @synthesize currentReadOffset=_currentReadOffset;
@property(readonly, nonatomic) struct _NSRange currentLoadingRange; // @synthesize currentLoadingRange=_currentLoadingRange;
@property(retain, nonatomic) NSDictionary *additionalRequestHeaders; // @synthesize additionalRequestHeaders=_additionalRequestHeaders;
@property(nonatomic) Class networkerClass; // @synthesize networkerClass=_networkerClass;
- (void).cxx_destruct;
- (void)playerNetworker:(id)arg1 didCollectTaskMetrics:(id)arg2;
- (void)playerNetworker:(id)arg1 didFailWithError:(id)arg2;
- (void)playerNetworkerDidFinishLoading:(id)arg1;
- (void)playerNetworker:(id)arg1 didLoadData:(id)arg2;
- (void)playerNetworker:(id)arg1 didReceiveResponse:(id)arg2;
- (void)playerNetworker:(id)arg1 willRedirectToRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)_clearCurrentRequest_nolock;
- (void)_clearCurrentRequest;
- (_Bool)_writeData:(id)arg1;
- (id)readBytes:(unsigned long long)arg1 timeout:(double)arg2 error:(id *)arg3;
- (_Bool)_shouldRetryForConnectionLost;
- (void)close;
- (void)_networkCallbackQueueBarrier;
@property(readonly, nonatomic) NSURL *currentRequestURL;
@property(readonly, nonatomic) NSString *currentRequestMethod;
- (void)_retryCurrentRequest;
- (_Bool)openWithURI:(id)arg1 options:(CDStruct_1154cbcc)arg2 error:(id *)arg3;
- (unsigned long long)expectedContentLength;
@property(readonly, nonatomic) unsigned long long fileSize;
- (id)noMoreDataError;
- (id)timedOutError;
- (id)interruptedError;
- (_Bool)_checkForInterruption;
- (void)backgroundStateChanged;
- (id)init;
- (id)initWithAdaptor:(id)arg1;
- (id)initWithNetworkerClass:(Class)arg1 additionalHeaders:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

