//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSDictionary, NSMutableData, NSMutableDictionary, NSString, NSThread, NSURL;

@interface XMKingRequest : NSObject
{
    long long _statusCode;
    _Bool _isCanceled;
    NSThread *_requestThread;
    _Bool _isRawData;
    CDUnknownBlockType _doneComplete;
    CDUnknownBlockType _failedComplete;
    NSMutableData *_revData;
    NSDictionary *_revJasonData;
    id _urlSession;
    id _dataDelegate;
    NSURL *_url;
    NSMutableDictionary *_headFieldDict;
    NSString *_httpMethod;
    NSData *_postData;
}

+ (id)requestWithURL:(id)arg1;
@property(retain, nonatomic) NSData *postData; // @synthesize postData=_postData;
@property(copy, nonatomic) NSString *httpMethod; // @synthesize httpMethod=_httpMethod;
@property(retain, nonatomic) NSMutableDictionary *headFieldDict; // @synthesize headFieldDict=_headFieldDict;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(nonatomic) __weak id dataDelegate; // @synthesize dataDelegate=_dataDelegate;
@property(retain, nonatomic) id urlSession; // @synthesize urlSession=_urlSession;
@property(retain, nonatomic) NSDictionary *revJasonData; // @synthesize revJasonData=_revJasonData;
@property(retain, nonatomic) NSMutableData *revData; // @synthesize revData=_revData;
@property(nonatomic) _Bool isRawData; // @synthesize isRawData=_isRawData;
@property(copy, nonatomic) CDUnknownBlockType failedComplete; // @synthesize failedComplete=_failedComplete;
@property(copy, nonatomic) CDUnknownBlockType doneComplete; // @synthesize doneComplete=_doneComplete;
- (void).cxx_destruct;
- (void)didFailedRequest:(id)arg1;
- (void)doneNetwork;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)startAsynchronous;
- (void)setValue:(id)arg1 forHeadFiledKey:(id)arg2;
- (id)initWithURL:(id)arg1;
- (void)dealloc;

@end

