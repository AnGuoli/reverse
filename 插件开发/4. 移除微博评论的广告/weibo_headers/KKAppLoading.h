//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface KKAppLoading : NSObject
{
    _Bool _canceled;
    CDUnknownBlockType _http;
    NSURL *_URL;
    NSString *_url;
    NSString *_key;
    NSString *_path;
    id _appInfo;
    long long _count;
    long long _totalCount;
    CDUnknownBlockType _onload;
    CDUnknownBlockType _onprogress;
    CDUnknownBlockType _onerror;
    CDUnknownBlockType _onappinfo;
}

+ (id)JOSNObject:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType onappinfo; // @synthesize onappinfo=_onappinfo;
@property(copy, nonatomic) CDUnknownBlockType onerror; // @synthesize onerror=_onerror;
@property(copy, nonatomic) CDUnknownBlockType onprogress; // @synthesize onprogress=_onprogress;
@property(copy, nonatomic) CDUnknownBlockType onload; // @synthesize onload=_onload;
@property(readonly, nonatomic, getter=isCanceled) _Bool canceled; // @synthesize canceled=_canceled;
@property(readonly, nonatomic) long long totalCount; // @synthesize totalCount=_totalCount;
@property(readonly, nonatomic) long long count; // @synthesize count=_count;
@property(readonly, nonatomic) id appInfo; // @synthesize appInfo=_appInfo;
@property(readonly, nonatomic) NSString *path; // @synthesize path=_path;
@property(readonly, nonatomic) NSString *key; // @synthesize key=_key;
@property(readonly, nonatomic) NSString *url; // @synthesize url=_url;
@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(readonly, nonatomic) CDUnknownBlockType http; // @synthesize http=_http;
- (void).cxx_destruct;
- (void)restart;
- (void)cancel;
- (void)start;
- (void)verify:(id)arg1 appInfo:(id)arg2 basePath:(id)arg3 tPath:(id)arg4;
- (void)itemLoad:(long long)arg1 items:(id)arg2 appInfo:(id)arg3 vers:(id)arg4 basePath:(id)arg5 tPath:(id)arg6 skipLocalFiles:(_Bool)arg7;
- (void)onAppInfo:(id)arg1;
- (void)onProgress:(long long)arg1 totalCount:(long long)arg2;
- (void)onLoad:(id)arg1;
- (void)onError:(id)arg1;
- (id)initWithURL:(id)arg1 path:(id)arg2 http:(CDUnknownBlockType)arg3;

@end

