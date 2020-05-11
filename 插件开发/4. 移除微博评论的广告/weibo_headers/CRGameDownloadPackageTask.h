//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CROnFileDownloadListener-Protocol.h"

@class CRSingleThreadFileDownloader, NSDictionary, NSString;
@protocol CRPackageDownloadListener;

@interface CRGameDownloadPackageTask : NSObject <CROnFileDownloadListener>
{
    _Bool _isRetryDownload;
    NSString *_savePath;
    NSString *_url;
    NSDictionary *_info;
    id <CRPackageDownloadListener> _listener;
    CRSingleThreadFileDownloader *_downloader;
}

@property(nonatomic) _Bool isRetryDownload; // @synthesize isRetryDownload=_isRetryDownload;
@property(retain, nonatomic) CRSingleThreadFileDownloader *downloader; // @synthesize downloader=_downloader;
@property(nonatomic) __weak id <CRPackageDownloadListener> listener; // @synthesize listener=_listener;
@property(copy, nonatomic) NSDictionary *info; // @synthesize info=_info;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *savePath; // @synthesize savePath=_savePath;
- (void).cxx_destruct;
- (void)onDownloadSuccess:(id)arg1;
- (void)onDownloadStart:(id)arg1;
- (void)onDownloadRetry:(int)arg1;
- (void)onDownloadProgress:(long long)arg1 totalSize:(long long)arg2;
- (void)onDownloadFailure:(int)arg1 msg:(id)arg2 error:(id)arg3;
- (void)onDownloadCancel;
- (void)_checkPackageHash:(id)arg1;
- (void)_ensureFile;
- (void)_downloadFile;
- (void)cancel;
- (void)execute:(id)arg1;
- (id)init:(id)arg1 savePath:(id)arg2 url:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

