//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SDLTransportDelegate-Protocol.h"

@class NSHashTable, NSString, SDLAbstractTransport;

@interface SDLAbstractProtocol : NSObject <SDLTransportDelegate>
{
    NSString *_debugConsoleGroupName;
    SDLAbstractTransport *_transport;
    NSHashTable *_protocolDelegateTable;
}

@property(retain) NSHashTable *protocolDelegateTable; // @synthesize protocolDelegateTable=_protocolDelegateTable;
@property __weak SDLAbstractTransport *transport; // @synthesize transport=_transport;
@property(retain) NSString *debugConsoleGroupName; // @synthesize debugConsoleGroupName=_debugConsoleGroupName;
- (void).cxx_destruct;
- (void)onDataReceived:(id)arg1;
- (void)onTransportDisconnected;
- (void)onTransportConnected;
- (void)dispose;
- (void)sendRawData:(id)arg1 withServiceType:(unsigned char)arg2;
- (void)sendRawDataStream:(id)arg1 withServiceType:(unsigned char)arg2;
- (void)handleBytesFromTransport:(id)arg1;
- (void)sendHeartbeat;
- (void)sendRPCRequest:(id)arg1;
- (void)sendRPC:(id)arg1;
- (void)sendEndSessionWithType:(unsigned char)arg1;
- (void)sendStartSessionWithType:(unsigned char)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

