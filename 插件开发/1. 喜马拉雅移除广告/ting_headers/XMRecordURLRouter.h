//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "XMUnifiedURLRouterProtocol-Protocol.h"

@class NSMutableDictionary;

@interface XMRecordURLRouter : NSObject <XMUnifiedURLRouterProtocol>
{
    NSMutableDictionary *_messageMap;
}

- (void).cxx_destruct;
- (void)onSerialCode:(id)arg1 event:(id)arg2 url:(id)arg3;
- (void)onGivenTemplate:(id)arg1 event:(id)arg2 url:(id)arg3;
- (void)onGivenResource:(id)arg1 event:(id)arg2 url:(id)arg3;
- (void)onResoucreChoose:(id)arg1 event:(id)arg2 url:(id)arg3;
- (void)onPromptClickRateAnchor:(id)arg1 event:(id)arg2 url:(id)arg3;
- (void)onEditAlbum:(id)arg1 event:(id)arg2 url:(id)arg3;
- (void)onAllReadRecordTrack:(id)arg1 event:(id)arg2 url:(id)arg3;
- (void)onShare:(id)arg1 event:(id)arg2 url:(id)arg3;
- (void)onUploadTrack:(id)arg1 event:(id)arg2 url:(id)arg3;
- (SEL)implementationForAction:(id)arg1 module:(id)arg2 relatedURL:(id)arg3;
- (_Bool)implementationForAction:(id)arg1 module:(id)arg2 relatedURL:(id)arg3 params:(id)arg4 event:(id)arg5;
- (_Bool)shouldImplementationForAction:(id)arg1 module:(id)arg2 relatedURL:(id)arg3;
- (void)messageRegisterForImplementation;
- (id)supportBusinessModule;

@end

