//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSObject, YXRedPacketCornerMark;
@protocol YXRedPacketPresenterProtocol;

@protocol YXRedPacketCornerMarkDelegate <NSObject>
- (_Bool)redPacketCornerMarkCurrentRoomIsPK:(YXRedPacketCornerMark *)arg1;
- (void)redPacketCornerMark:(YXRedPacketCornerMark *)arg1 didEnterClick:(NSObject<YXRedPacketPresenterProtocol> *)arg2;
@end

