//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WebviewJSEventHandlerBase.h"

#import "IWebviewResourceManagerExt-Protocol.h"

@class NSMutableArray, NSString;

@interface WebviewJSEventHandler_uploadVideo : WebviewJSEventHandlerBase <IWebviewResourceManagerExt>
{
    _Bool _isShowProgressTips;
    NSMutableArray *arrLocalIDs;
}

- (void).cxx_destruct;
- (void)doDelayCancel;
- (void)onLocalResourceUploadFinished:(id)arg1 SvrId:(id)arg2 ErrCode:(int)arg3;
- (void)onLocalResourceUploadProgress:(int)arg1 LocalId:(id)arg2;
- (void)doUploadVideo;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

