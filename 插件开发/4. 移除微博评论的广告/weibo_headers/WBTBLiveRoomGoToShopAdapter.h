//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBTBLiveRoomBaseAdapter.h"

#import "LiveRoomGotoShopProtocol-Protocol.h"

@class NSString;

@interface WBTBLiveRoomGoToShopAdapter : WBTBLiveRoomBaseAdapter <LiveRoomGotoShopProtocol>
{
    CDUnknownBlockType _onTradeSuccess;
    CDUnknownBlockType _onTradeFailure;
}

@property(copy, nonatomic) CDUnknownBlockType onTradeFailure; // @synthesize onTradeFailure=_onTradeFailure;
@property(copy, nonatomic) CDUnknownBlockType onTradeSuccess; // @synthesize onTradeSuccess=_onTradeSuccess;
- (void).cxx_destruct;
- (id)customParam;
- (id)taokeParam;
- (unsigned long long)openType;
- (id)schemeType;
- (void)OpenByPage:(id)arg1;
- (void)gotoShop:(id)arg1 withWebView:(id)arg2 withViewController:(id)arg3 withType:(id)arg4 completion:(CDUnknownBlockType)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

