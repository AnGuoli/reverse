//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AVAssetResourceLoaderDelegate-Protocol.h"
#import "NSURLSessionDelegate-Protocol.h"

@class NSFileHandle, NSMutableArray, NSString, NSURL, NSURLSession, NSURLSessionDataTask;
@protocol WBGVideoRequestTaskDelegate;

@interface WBGVideoRequestTask : NSObject <AVAssetResourceLoaderDelegate, NSURLSessionDelegate>
{
    _Bool _isFinishLoad;
    _Bool _once;
    NSURL *_url;
    unsigned long long _offset;
    unsigned long long _videoLength;
    unsigned long long _downLoadingOffset;
    NSString *_mimeType;
    id <WBGVideoRequestTaskDelegate> _delegate;
    NSMutableArray *_taskArr;
    NSFileHandle *_fileHandle;
    NSString *_tempPath;
    NSURLSession *_session;
    NSURLSessionDataTask *_dataTask;
}

@property(retain, nonatomic) NSURLSessionDataTask *dataTask; // @synthesize dataTask=_dataTask;
@property(retain, nonatomic) NSURLSession *session; // @synthesize session=_session;
@property(retain, nonatomic) NSString *tempPath; // @synthesize tempPath=_tempPath;
@property(retain, nonatomic) NSFileHandle *fileHandle; // @synthesize fileHandle=_fileHandle;
@property(nonatomic) _Bool once; // @synthesize once=_once;
@property(retain, nonatomic) NSMutableArray *taskArr; // @synthesize taskArr=_taskArr;
@property(nonatomic) __weak id <WBGVideoRequestTaskDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isFinishLoad; // @synthesize isFinishLoad=_isFinishLoad;
@property(retain, nonatomic) NSString *mimeType; // @synthesize mimeType=_mimeType;
@property(nonatomic) unsigned long long downLoadingOffset; // @synthesize downLoadingOffset=_downLoadingOffset;
@property(nonatomic) unsigned long long videoLength; // @synthesize videoLength=_videoLength;
@property(nonatomic) unsigned long long offset; // @synthesize offset=_offset;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (void)clearData;
- (void)continueLoading;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)cancel;
- (void)setUrl:(id)arg1 offset:(unsigned long long)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

