//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IDA4AConnectionDelegate-Protocol.h"
#import "IDA4AConnectionMonitorDelegate-Protocol.h"
#import "IDBclBroadcastSender-Protocol.h"
#import "IDStreamProviderDelegate-Protocol.h"

@class IDA4AConnection, IDA4AConnectionMonitor, IDA4AProtocol, IDA4AProxyInfo, IDBackgroundTask, IDExternalAccessorySelector, IDJSONRPCNotification, IDJSONRPCRequest, NSConditionLock, NSLock, NSMutableSet, NSSet, NSString;
@protocol IDBclBroadcastReceiver, IDProtocolSelectorDelegate, IDStreamProvider;

@interface IDProtocolSelector : NSObject <IDStreamProviderDelegate, IDA4AConnectionDelegate, IDA4AConnectionMonitorDelegate, IDBclBroadcastSender>
{
    _Bool _isTargetedForSimulator;
    float _handshakeTimeout;
    float _broadcastResponseTimeout;
    float _claimProtocolWaitTime;
    id <IDBclBroadcastReceiver> _broadcastReceiver;
    id <IDProtocolSelectorDelegate> _delegate;
    IDA4AProtocol *_preselectedCommunicationProtocol;
    IDA4AProtocol *_claimedCommunicationProtocol;
    IDA4AProtocol *_selectedCommunicationProtocol;
    id <IDStreamProvider> _streamProvider;
    IDA4AConnection *_a4aConnection;
    IDExternalAccessorySelector *_externalAccessorySelector;
    IDA4AProxyInfo *_proxyInfo;
    NSSet *_communicationProtocols;
    NSSet *_negotiationProtocols;
    NSSet *_preselectableCommunicationProtocols;
    IDA4AProtocol *_selectedNegotiationProtocol;
    NSMutableSet *_receivedProtocols;
    NSLock *_receivedProtocolsAccessLock;
    IDA4AProtocol *_legacyProtocol;
    IDBackgroundTask *_backgroundTask;
    NSConditionLock *_stateCondition;
    NSConditionLock *_connectionCondition;
    IDA4AConnectionMonitor *_connectionMonitor;
    IDJSONRPCRequest *_lastBroadcastProtocolRequest;
    IDJSONRPCNotification *_lastClaimProtocolNotification;
    double _sessionId;
}

@property double sessionId; // @synthesize sessionId=_sessionId;
@property(retain) IDJSONRPCNotification *lastClaimProtocolNotification; // @synthesize lastClaimProtocolNotification=_lastClaimProtocolNotification;
@property(retain) IDJSONRPCRequest *lastBroadcastProtocolRequest; // @synthesize lastBroadcastProtocolRequest=_lastBroadcastProtocolRequest;
@property _Bool isTargetedForSimulator; // @synthesize isTargetedForSimulator=_isTargetedForSimulator;
@property float claimProtocolWaitTime; // @synthesize claimProtocolWaitTime=_claimProtocolWaitTime;
@property float broadcastResponseTimeout; // @synthesize broadcastResponseTimeout=_broadcastResponseTimeout;
@property float handshakeTimeout; // @synthesize handshakeTimeout=_handshakeTimeout;
@property(retain) IDA4AConnectionMonitor *connectionMonitor; // @synthesize connectionMonitor=_connectionMonitor;
@property(retain) NSConditionLock *connectionCondition; // @synthesize connectionCondition=_connectionCondition;
@property(retain) NSConditionLock *stateCondition; // @synthesize stateCondition=_stateCondition;
@property(retain) IDBackgroundTask *backgroundTask; // @synthesize backgroundTask=_backgroundTask;
@property(retain) IDA4AProtocol *legacyProtocol; // @synthesize legacyProtocol=_legacyProtocol;
@property(retain) NSLock *receivedProtocolsAccessLock; // @synthesize receivedProtocolsAccessLock=_receivedProtocolsAccessLock;
@property(retain) NSMutableSet *receivedProtocols; // @synthesize receivedProtocols=_receivedProtocols;
@property(retain) IDA4AProtocol *selectedNegotiationProtocol; // @synthesize selectedNegotiationProtocol=_selectedNegotiationProtocol;
@property(retain) NSSet *preselectableCommunicationProtocols; // @synthesize preselectableCommunicationProtocols=_preselectableCommunicationProtocols;
@property(retain) NSSet *negotiationProtocols; // @synthesize negotiationProtocols=_negotiationProtocols;
@property(retain) NSSet *communicationProtocols; // @synthesize communicationProtocols=_communicationProtocols;
@property(retain) IDA4AProxyInfo *proxyInfo; // @synthesize proxyInfo=_proxyInfo;
@property(retain) IDExternalAccessorySelector *externalAccessorySelector; // @synthesize externalAccessorySelector=_externalAccessorySelector;
@property(retain) IDA4AConnection *a4aConnection; // @synthesize a4aConnection=_a4aConnection;
@property(retain) id <IDStreamProvider> streamProvider; // @synthesize streamProvider=_streamProvider;
@property(retain) IDA4AProtocol *selectedCommunicationProtocol; // @synthesize selectedCommunicationProtocol=_selectedCommunicationProtocol;
@property(retain) IDA4AProtocol *claimedCommunicationProtocol; // @synthesize claimedCommunicationProtocol=_claimedCommunicationProtocol;
@property(retain) IDA4AProtocol *preselectedCommunicationProtocol; // @synthesize preselectedCommunicationProtocol=_preselectedCommunicationProtocol;
@property __weak id <IDProtocolSelectorDelegate> delegate; // @synthesize delegate=_delegate;
@property __weak id <IDBclBroadcastReceiver> broadcastReceiver; // @synthesize broadcastReceiver=_broadcastReceiver;
- (void).cxx_destruct;
- (id)stringFromIDProtocolSelectorConnectionToAccessoryState:(unsigned long long)arg1;
- (id)stringFromIDProtocolSelectorState:(unsigned long long)arg1;
- (_Bool)isSessionIdentifierValid:(double)arg1;
- (id)loadLastUsedCommunicationProtocol;
- (id)availableCommunicationProtocols;
- (void)useClaimedProtocolAsSelectedProtocol:(double)arg1;
- (void)claimRandomCommunicationProtocol:(double)arg1;
- (void)sendBroadcast:(id)arg1;
- (void)enqueJSONRPCMessage:(id)arg1;
- (void)sendClaimProtocolNotification:(id)arg1;
- (void)requestBroadcastProtocol;
- (void)processA4ABroadcastPacket:(id)arg1;
- (void)finishHandshake;
- (void)connectionDidCloseUnderlyingStreams:(id)arg1;
- (void)connection:(id)arg1 errorOccured:(id)arg2;
- (void)connection:(id)arg1 didReceivePacket:(id)arg2;
- (void)monitor:(id)arg1 didEncounterError:(id)arg2;
- (void)monitor:(id)arg1 didCreatePacket:(id)arg2;
- (void)waitForHandshakeWithTimeout:(float)arg1;
- (void)streamProvider:(id)arg1 didFailToStartWithError:(id)arg2;
- (void)streamProvider:(id)arg1 didFailToResolveStreamsWithError:(id)arg2;
- (void)streamProviderWillDiscardStreams:(id)arg1;
- (void)streamProvider:(id)arg1 didResolveInputStream:(id)arg2 outputStream:(id)arg3;
@property(readonly, getter=isStarted) _Bool started;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (void)closeA4AConnection;
- (void)resetProtocolSelectorState;
- (void)resetStreamProvider;
- (void)stop;
- (void)start;
- (id)init;

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

