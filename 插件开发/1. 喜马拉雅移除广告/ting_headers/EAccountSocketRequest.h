//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GCDAsyncSocketDelegate-Protocol.h"

@class EAccountGCDAsyncSocket, NSMutableDictionary, NSString;

@interface EAccountSocketRequest : NSObject <GCDAsyncSocketDelegate>
{
    EAccountGCDAsyncSocket *asyncSocket;
    _Bool _SECURE_CONNECTION;
    _Bool _index;
    _Bool _index2222;
    CDUnknownBlockType _block;
    NSString *_host;
    NSString *_path;
    long long _port;
    NSString *_scheme;
    NSString *_bussinessType;
    double _timeoutInterval;
    NSString *_errorTempParams;
    NSString *_reqId;
    NSString *_redirectTag;
    NSString *_socketHttpMethod;
    NSMutableDictionary *_logDic;
    NSString *_paramStr;
    double _beginRequestTime;
    double _totalTime;
    NSString *_ep;
    NSString *_rt;
    NSString *_date;
    NSString *_errorParams;
    NSString *_msg;
    NSString *_gwAuth;
}

@property(retain, nonatomic) NSString *gwAuth; // @synthesize gwAuth=_gwAuth;
@property(retain, nonatomic) NSString *msg; // @synthesize msg=_msg;
@property(retain, nonatomic) NSString *errorParams; // @synthesize errorParams=_errorParams;
@property(retain, nonatomic) NSString *date; // @synthesize date=_date;
@property(retain, nonatomic) NSString *rt; // @synthesize rt=_rt;
@property(retain, nonatomic) NSString *ep; // @synthesize ep=_ep;
@property(nonatomic) double totalTime; // @synthesize totalTime=_totalTime;
@property(nonatomic) double beginRequestTime; // @synthesize beginRequestTime=_beginRequestTime;
@property(retain, nonatomic) NSString *paramStr; // @synthesize paramStr=_paramStr;
@property(retain, nonatomic) NSMutableDictionary *logDic; // @synthesize logDic=_logDic;
@property(nonatomic) _Bool index2222; // @synthesize index2222=_index2222;
@property(nonatomic) _Bool index; // @synthesize index=_index;
@property(retain, nonatomic) NSString *socketHttpMethod; // @synthesize socketHttpMethod=_socketHttpMethod;
@property(retain, nonatomic) NSString *redirectTag; // @synthesize redirectTag=_redirectTag;
@property(retain, nonatomic) NSString *reqId; // @synthesize reqId=_reqId;
@property(retain, nonatomic) NSString *errorTempParams; // @synthesize errorTempParams=_errorTempParams;
@property(nonatomic) double timeoutInterval; // @synthesize timeoutInterval=_timeoutInterval;
@property(retain, nonatomic) NSString *bussinessType; // @synthesize bussinessType=_bussinessType;
@property(retain, nonatomic) NSString *scheme; // @synthesize scheme=_scheme;
@property(nonatomic) _Bool SECURE_CONNECTION; // @synthesize SECURE_CONNECTION=_SECURE_CONNECTION;
@property(nonatomic) long long port; // @synthesize port=_port;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
@property(retain, nonatomic) NSString *host; // @synthesize host=_host;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
- (void).cxx_destruct;
- (void)startLog;
- (_Bool)isDisConnect;
- (void)socketDidDisconnect:(id)arg1 withError:(id)arg2;
- (_Bool)containsStringMethod:(id)arg1 bString:(id)arg2;
- (void)socket:(id)arg1 didReadData:(id)arg2 withTag:(long long)arg3;
- (void)socket:(id)arg1 didWriteDataWithTag:(long long)arg2;
- (void)socketDidSecure:(id)arg1;
- (void)socket:(id)arg1 didReceiveTrust:(struct __SecTrust *)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)socket:(id)arg1 didConnectToHost:(id)arg2 port:(unsigned short)arg3;
- (void)startSocket;
- (void)getMobile:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

