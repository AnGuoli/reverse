//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LMBluetoothBaseViewController.h"

#import "LMBluetoothManagerCarmp3Delegate-Protocol.h"
#import "LMBluetoothManagerFMTransmitDelegate-Protocol.h"

@class NSString, NSTimer, UIAlertView;
@protocol XMSCTDelegate;

@interface XMBlueToothManager : LMBluetoothBaseViewController <LMBluetoothManagerFMTransmitDelegate, LMBluetoothManagerCarmp3Delegate>
{
    _Bool bIsConnecting;
    _Bool _bIsConnected;
    _Bool _bIsCancelConnect;
    NSTimer *connectTimer;
    NSTimer *searchTimer;
    UIAlertView *mAlertView;
    id <XMSCTDelegate> _delegate;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)shareInstance;
@property(nonatomic) _Bool bIsCancelConnect; // @synthesize bIsCancelConnect=_bIsCancelConnect;
@property(nonatomic) _Bool bIsConnected; // @synthesize bIsConnected=_bIsConnected;
@property(nonatomic) id <XMSCTDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIAlertView *mAlertView; // @synthesize mAlertView;
@property(retain, nonatomic) NSTimer *searchTimer; // @synthesize searchTimer;
@property(retain, nonatomic) NSTimer *connectTimer; // @synthesize connectTimer;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)dismissAlertView;
- (_Bool)share;
- (void)setShare:(_Bool)arg1;
- (void)shareSctToWeixin;
- (void)onPlayerDidPlaying;
- (void)soundEffectChanged:(unsigned int)arg1;
- (void)carmp3controlPlayState:(int)arg1;
- (void)carmp3selectPlayState:(int)arg1;
- (void)carmp3controlWarningTone:(int)arg1;
- (void)carmp3selectWarningTone:(int)arg1;
- (void)fMTransmitCallbackerNextAlbum;
- (void)fMTransmitCallbackerPretAlbum;
- (void)fMTransmitCallbacker4Action:(_Bool)arg1 andCurrentChannel:(int)arg2;
- (void)fMTransmitCallbacker4QueryState:(_Bool)arg1 andCurrentChannel:(int)arg2;
- (void)fMTransmitCallbacker4QueryChannelRange:(int)arg1 andChannelEnd:(int)arg2;
- (void)customCommandArrived:(unsigned int)arg1 param1:(unsigned int)arg2 param2:(unsigned int)arg3 others:(id)arg4;
- (void)managerReady;
- (void)disconnectedPeripheral:(id)arg1;
- (void)connectedPeripheral:(id)arg1;
- (void)foundPeripheral:(id)arg1 advertisementData:(id)arg2;
- (void)cancelConnect;
- (void)transmitTurnOff;
- (void)transmitTurnOn;
- (void)queryState;
- (void)queryChannelRange;
- (void)setFMChannel:(int)arg1;
- (void)disconnectBlueTooth;
- (void)connectBlueTooth;
- (void)connectTimeout;
- (void)stopConnectTimer;
- (void)startConnectTimer;
- (void)playPreOrNextAlbum:(_Bool)arg1;
- (void)setAutoPlay:(_Bool)arg1;
- (void)setTonePlay:(_Bool)arg1;
- (void)queryPlayFlag;
- (void)searchAndConnectSCTDev;
- (void)stopSearchAndConnect;
- (void)startSearchAndConnect;
- (id)init;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

