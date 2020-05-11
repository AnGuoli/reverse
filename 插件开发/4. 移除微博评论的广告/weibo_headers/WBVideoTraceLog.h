//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBVideoTraceBaseLog.h"

@class NSDictionary, NSString;

@interface WBVideoTraceLog : WBVideoTraceBaseLog
{
    NSString *_traceId;
    NSString *_spanId;
    NSString *_parentId;
    NSString *_actionString;
    NSString *_name;
    long long _startTime;
    long long _endTime;
    NSString *_service;
    NSString *_method;
    NSString *_requestParams;
    NSString *_sa;
    NSString *_error;
    long long _errorCode;
    NSDictionary *_cronetDic;
    long long _requestStatus;
    NSDictionary *_extraInfoDic;
    long long _logType;
    NSString *_from;
    NSString *_uid;
    NSString *_ap;
    NSString *_ua;
    long long _imsi;
    NSString *_cip;
}

@property(copy, nonatomic) NSString *cip; // @synthesize cip=_cip;
@property(nonatomic) long long imsi; // @synthesize imsi=_imsi;
@property(copy, nonatomic) NSString *ua; // @synthesize ua=_ua;
@property(copy, nonatomic) NSString *ap; // @synthesize ap=_ap;
@property(copy, nonatomic) NSString *uid; // @synthesize uid=_uid;
@property(copy, nonatomic) NSString *from; // @synthesize from=_from;
@property(nonatomic) long long logType; // @synthesize logType=_logType;
@property(copy, nonatomic) NSDictionary *extraInfoDic; // @synthesize extraInfoDic=_extraInfoDic;
@property(nonatomic) long long requestStatus; // @synthesize requestStatus=_requestStatus;
@property(retain, nonatomic) NSDictionary *cronetDic; // @synthesize cronetDic=_cronetDic;
@property(nonatomic) long long errorCode; // @synthesize errorCode=_errorCode;
@property(retain, nonatomic) NSString *error; // @synthesize error=_error;
@property(copy, nonatomic) NSString *sa; // @synthesize sa=_sa;
@property(copy, nonatomic) NSString *requestParams; // @synthesize requestParams=_requestParams;
@property(copy, nonatomic) NSString *method; // @synthesize method=_method;
@property(copy, nonatomic) NSString *service; // @synthesize service=_service;
@property(nonatomic) long long endTime; // @synthesize endTime=_endTime;
@property(nonatomic) long long startTime; // @synthesize startTime=_startTime;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *actionString; // @synthesize actionString=_actionString;
@property(copy, nonatomic) NSString *parentId; // @synthesize parentId=_parentId;
@property(copy, nonatomic) NSString *spanId; // @synthesize spanId=_spanId;
@property(copy, nonatomic) NSString *traceId; // @synthesize traceId=_traceId;
- (void).cxx_destruct;
- (long long)currentTimeOfMicroseconds;
- (void)recordErrorInfo;
- (void)updateWithRequestOperationWrapper:(id)arg1;
- (void)updateWithRequestOperation:(id)arg1;
- (id)addBrotherSpanAction:(id)arg1;
- (id)addChildSpanWithAction:(id)arg1;
- (id)addSpanWithAction:(id)arg1;
- (void)logBehaviorWithAction:(long long)arg1;
- (void)dictionaryRepresentation;
- (id)traceLogHeaderFields;
- (void)logEndAction;
- (void)logStartAction;
- (id)initWithAct:(id)arg1 action:(id)arg2 logType:(long long)arg3 traceId:(id)arg4 startTime:(double)arg5 endTime:(double)arg6;
- (id)initWithAct:(id)arg1 action:(id)arg2 logType:(long long)arg3 traceId:(id)arg4;

@end

