//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IDMapServiceOverlayAsyncBaseOperation.h"

@class IDMapDataImportSession, NSError;

@interface IDMapServiceOverlayImportOperation : IDMapServiceOverlayAsyncBaseOperation
{
    IDMapDataImportSession *_importSession;
    NSError *_error;
    CDUnknownBlockType _completionHandler;
}

@property(copy) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain) NSError *error; // @synthesize error=_error;
@property(readonly) IDMapDataImportSession *importSession; // @synthesize importSession=_importSession;
- (void).cxx_destruct;
- (id)description;
- (void)completeOperation;
- (void)handleMapServiceEvent:(unsigned long long)arg1 transferId:(long long)arg2;
- (void)abortTransfer;
- (void)finalizeTransfer;
- (void)importData;
- (void)requestData;
- (void)asyncMain;
- (id)initWithEtchSession:(id)arg1 mapServiceHandle:(long long)arg2;
- (id)initWithEtchSession:(id)arg1 mapServiceHandle:(long long)arg2 data:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;

@end

