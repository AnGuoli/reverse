//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ABQMipNetHTTPServerDelegate-Protocol.h"

@class ABQBlockingQueue, ABQKeyedRequestMap, ABQLocationManager, AQHAP, NSString;
@protocol ABQMipNetHTTPServer;

@interface MongooseDaemon : NSObject <ABQMipNetHTTPServerDelegate>
{
    _Bool _isOEMApp;
    id _delegate;
    struct NSObject *_server;
    ABQBlockingQueue *_longPoll;
    ABQKeyedRequestMap *_commandControl;
    AQHAP *_hap;
    ABQLocationManager *_sharedLocationManager;
}

@property(nonatomic) __weak ABQLocationManager *sharedLocationManager; // @synthesize sharedLocationManager=_sharedLocationManager;
@property(retain) AQHAP *hap; // @synthesize hap=_hap;
@property(readonly, nonatomic) ABQKeyedRequestMap *commandControl; // @synthesize commandControl=_commandControl;
@property(readonly, nonatomic) ABQBlockingQueue *longPoll; // @synthesize longPoll=_longPoll;
@property(retain) NSObject<ABQMipNetHTTPServer> *server; // @synthesize server=_server;
@property(retain) id delegate; // @synthesize delegate=_delegate;
@property _Bool isOEMApp; // @synthesize isOEMApp=_isOEMApp;
- (void).cxx_destruct;
- (_Bool)routeBroadcastRequest:(struct NSObject *)arg1;
- (id)responseForFileControlFromRequest:(struct NSObject *)arg1;
- (id)echoResponseFromRequest:(struct NSObject *)arg1;
- (id)sendHandsetLocationToRequest:(struct NSObject *)arg1;
- (id)hupUpdateResponseFromRequest:(struct NSObject *)arg1;
- (id)handleVehicleInformationOnRequest:(struct NSObject *)arg1;
- (id)handleApplicationNameOnRequest:(struct NSObject *)arg1;
- (id)handleAQLayerEventOnRequest:(struct NSObject *)arg1;
- (id)handleTTSOnRequest:(struct NSObject *)arg1;
- (void)writeResponse:(id)arg1 toRequest:(struct NSObject *)arg2;
- (id)manageGetEventFromRequest:(struct NSObject *)arg1;
- (void)flushHMIMessageQueue;
- (void)unblockAuth;
- (id)handleAuthenticationTokenOnRequest:(struct NSObject *)arg1;
- (void)handleMIPConnectionStateChangeOnRequest:(struct NSObject *)arg1;
- (id)handleSwitchToAppOnRequest:(struct NSObject *)arg1;
- (id)whiteListWorkAroundResponse;
- (id)handleCommandControlOnRequest:(struct NSObject *)arg1;
- (id)sequencedResponseForHTTPRequest:(struct NSObject *)arg1 error:(id *)arg2;
- (id)sendHeadUnitInformationResponseToRequest:(struct NSObject *)arg1;
- (id)sendHandsetProfileToRequest:(struct NSObject *)arg1;
- (void)handleHTTPRequest:(struct NSObject *)arg1 fromServer:(struct NSObject *)arg2;
- (void)stopMongooseDaemon;
- (void)MG_poke;
- (void)MG_respondToSequenceNumber:(long long)arg1 withContentType:(id)arg2 andPayload:(id)arg3 fromAppWithName:(id)arg4;
- (long long)MG_sendMessageofType:(id)arg1 usingSequenceNumber:(long long)arg2 withPayload:(id)arg3 fromAppWithName:(id)arg4;
- (void)resetSSLContext;
- (int)startHTTP:(id)arg1;
- (int)startMongooseDaemon:(id)arg1 withDelegate:(id)arg2;
- (id)initWithHAP:(id)arg1 httpServer:(struct NSObject *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

