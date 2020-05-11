//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSString, XMNDownloader;

@interface XMVCNDownloader : NSObject
{
    XMNDownloader *_downloader;
    NSString *_url;
    NSString *_urlKey;
    NSString *_path;
    NSString *_tmpPath;
    NSString *_extension;
    CDUnknownBlockType _progressBlock;
    CDUnknownBlockType _completionBlock;
    _Bool _hasCtx;
    _Bool _isRuning;
    _Bool _needAutoResume;
    id _ctx;
}

+ (id)pathWithUrl:(id)arg1;
+ (id)downloaderWithUrl:(id)arg1 progress:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
@property(nonatomic) __weak id ctx; // @synthesize ctx=_ctx;
- (void).cxx_destruct;
- (void)cleanCache;
- (void)removeResumeDataFile;
- (void)resume;
- (void)suspend;
- (void)stop;
- (void)start;
- (void)onCompletion;
- (void)onProgress;
- (id)downloader;
@property(readonly, nonatomic) NSString *key;
@property(readonly, nonatomic) NSString *path;
- (id)tmpPath;
@property(readonly, nonatomic) NSError *error;
@property(readonly, nonatomic) double progress;
@property(readonly, nonatomic) NSString *url;
- (id)initWithUrl:(id)arg1;

@end

