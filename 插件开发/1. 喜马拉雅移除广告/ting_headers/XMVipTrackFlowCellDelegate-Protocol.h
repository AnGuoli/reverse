//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class XMVipTrackFlowCell, XMVipTrackFlowItem;

@protocol XMVipTrackFlowCellDelegate <NSObject>
- (void)vipTrackFlowCell:(XMVipTrackFlowCell *)arg1 clickMoreWithTrakcFlowItem:(XMVipTrackFlowItem *)arg2;
- (void)vipTrackFlowCell:(XMVipTrackFlowCell *)arg1 listenAllSoundWithTrakcFlowItem:(XMVipTrackFlowItem *)arg2;
- (void)vipTrackFlowCell:(XMVipTrackFlowCell *)arg1 openAlbumWithTrakcFlowItem:(XMVipTrackFlowItem *)arg2 andIndex:(long long)arg3;
- (void)vipTrackFlowCell:(XMVipTrackFlowCell *)arg1 didClickSoundWithTrakcFlowItem:(XMVipTrackFlowItem *)arg2 andIndex:(long long)arg3;
@end

