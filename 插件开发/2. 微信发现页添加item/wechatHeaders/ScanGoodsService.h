//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WSTemplateBaseMgr.h"

#import "MMResourceMgrExt-Protocol.h"
#import "MMServiceProtocol-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"

@class NSString;

@interface ScanGoodsService : WSTemplateBaseMgr <MMResourceMgrExt, MMServiceProtocol, PBMessageObserverDelegate>
{
    _Bool _isUploadingCameraImageInfo;
}

@property(nonatomic) _Bool isUploadingCameraImageInfo; // @synthesize isUploadingCameraImageInfo=_isUploadingCameraImageInfo;
- (void)onResUpdateFinish:(long long)arg1 resType:(unsigned int)arg2 subResType:(unsigned int)arg3;
- (unsigned int)getResouceType;
- (id)getTemplateResoucePath;
- (id)getAppTemplateResoucePath;
- (void)handleMpTemplateResponse:(id)arg1;
- (void)handleSendImageInfo:(id)arg1;
- (void)handleFetchScanConfigure:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)mpTemplateRequest:(unsigned int)arg1 type:(unsigned int)arg2 content:(id)arg3;
- (void)setSendImageInfoCgiTimeout:(unsigned int)arg1;
- (unsigned int)getSendImageInfoCgiTimeout;
- (void)onEndUploadingCameraImageInfo;
- (void)onBeginUploadingCameraImageInfo;
- (_Bool)sendImageInfo:(id)arg1;
- (void)fetchScanConfigure;
- (void)dealloc;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

