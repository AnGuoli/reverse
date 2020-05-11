//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "WePkgDownloaderDelegate-Protocol.h"

@class NSMutableArray, NSString, WePkgDownloader, WePkgFileDownloadInfo;

@interface WePkgDownloadMgr : MMObject <WePkgDownloaderDelegate>
{
    NSMutableArray *_arrWaitingDownloadList;
    WePkgFileDownloadInfo *_currDownladInfo;
    WePkgDownloader *_downloader;
}

- (void).cxx_destruct;
- (int)checkIfFileValidAfterDownloadSuccess:(id)arg1 TmpFilePath:(id)arg2;
- (void)downloaderDidFinishDownloadFor:(id)arg1 TmpFilePath:(id)arg2 isSuccess:(_Bool)arg3 isLocalValidFile:(_Bool)arg4;
- (void)tryNextDownload;
- (void)clearCurrentDownloadingTask;
- (void)cancelDownloadIfVersionNotMatch:(id)arg1 Version:(id)arg2;
- (void)addToDownloadList:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

