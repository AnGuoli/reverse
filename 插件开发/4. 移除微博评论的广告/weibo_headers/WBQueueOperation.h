//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSError, NSMutableDictionary, NSMutableString, NSObject, NSString, SNHTTPRequestOperationWrapper, WBQueueJob;
@protocol OS_dispatch_semaphore;

@interface WBQueueOperation : NSOperation
{
    WBQueueJob *job;
    double startTime;
    double finishedTime;
    SNHTTPRequestOperationWrapper *requestWrapper;
    NSObject<OS_dispatch_semaphore> *operationSemaphore;
    double _startTime;
    _Bool _isAddedToQueue;
    float _progress;
    id _operationResult;
    NSError *_operationError;
    double _cancelledTime;
    NSString *_resourceIdentifier;
    unsigned long long _contentSize;
    NSMutableDictionary *_log_parameters;
    NSMutableDictionary *_log_results;
    NSMutableDictionary *_detailLog;
    NSMutableString *_log_extra;
}

+ (_Bool)logEnabled;
+ (long long)operationType;
@property(retain, nonatomic) NSMutableString *log_extra; // @synthesize log_extra=_log_extra;
@property(retain, nonatomic) NSMutableDictionary *detailLog; // @synthesize detailLog=_detailLog;
@property(retain, nonatomic) NSMutableDictionary *log_results; // @synthesize log_results=_log_results;
@property(retain, nonatomic) NSMutableDictionary *log_parameters; // @synthesize log_parameters=_log_parameters;
@property(nonatomic) float progress; // @synthesize progress=_progress;
@property(nonatomic) unsigned long long contentSize; // @synthesize contentSize=_contentSize;
@property(copy, nonatomic) NSString *resourceIdentifier; // @synthesize resourceIdentifier=_resourceIdentifier;
@property(nonatomic) double cancelledTime; // @synthesize cancelledTime=_cancelledTime;
@property(retain, nonatomic) NSError *operationError; // @synthesize operationError=_operationError;
@property(retain, nonatomic) id operationResult; // @synthesize operationResult=_operationResult;
@property(nonatomic) _Bool isAddedToQueue; // @synthesize isAddedToQueue=_isAddedToQueue;
- (void).cxx_destruct;
- (void)excuteLogPresendTimeWithPictureList:(id)arg1 uploadFilesProperty:(id)arg2 uid:(id)arg3 mid:(id)arg4 type:(id)arg5;
- (void)addExtraLog:(id)arg1;
- (void)addDetailLog:(id)arg1 forKey:(id)arg2;
- (_Bool)isCancelled;
- (void)cancel;
- (void)doCompletion;
- (void)notifiProgressDidChange;
- (void)executeRequestWithBlock:(CDUnknownBlockType)arg1;
- (long long)checkOperationDependencies;
- (void)main;
- (id)operationTypeString;
- (id)job;
- (id)initWithJob:(id)arg1;
- (void)dealloc;

@end

