//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSMutableArray, SKBuiltinString_t;

@interface VoipSpeedResultReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) double latitude; // @dynamic latitude;
@property(nonatomic) double longitude; // @dynamic longitude;
@property(retain, nonatomic) SKBuiltinString_t *netName; // @dynamic netName;
@property(nonatomic) unsigned int netType; // @dynamic netType;
@property(retain, nonatomic) NSMutableArray *result; // @dynamic result;
@property(nonatomic) unsigned int resultCnt; // @dynamic resultCnt;
@property(nonatomic) unsigned int roomId; // @dynamic roomId;
@property(nonatomic) unsigned long long roomKey; // @dynamic roomKey;
@property(nonatomic) unsigned long long testId; // @dynamic testId;
@property(retain, nonatomic) SKBuiltinString_t *wifiName; // @dynamic wifiName;

@end

