//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class XMLiveEntBaseRspMapItem, XMLiveRoomMsg;

@protocol XMLiveEntBaseMicManagerDelegate <NSObject>

@optional
- (void)entMicMgrRecvPresideJoinSuccess;
- (void)entMicMgrRecvGiftComboOver:(XMLiveRoomMsg *)arg1;
- (void)entMicMgrRecvGift:(XMLiveRoomMsg *)arg1;
- (void)entMicMgrDidSendGiftSuccess:(XMLiveRoomMsg *)arg1;
- (void)entMicMgrOnlineUserSync:(XMLiveEntBaseRspMapItem *)arg1 selfOnMic:(_Bool)arg2;
- (void)entMicMgrMicWaitListUpdate:(XMLiveEntBaseRspMapItem *)arg1;
- (void)entMicMgrMicWaitListSync:(XMLiveEntBaseRspMapItem *)arg1;
@end

