//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CBPeripheralDelegate-Protocol.h"

@class CBPeripheralManager, NSString;

@interface RNPBluetooth : NSObject <CBPeripheralDelegate>
{
    CBPeripheralManager *_peripheralManager;
    CDUnknownBlockType _completionHandler;
}

+ (id)getStatus;
@property(copy) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) CBPeripheralManager *peripheralManager; // @synthesize peripheralManager=_peripheralManager;
- (void).cxx_destruct;
- (void)peripheralManagerDidUpdateState:(id)arg1;
- (void)request:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

