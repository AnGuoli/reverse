//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface KSONG_JoinReq : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int clientType; // @dynamic clientType;
@property(nonatomic) _Bool hasClientType; // @dynamic hasClientType;
@property(nonatomic) _Bool hasNickname; // @dynamic hasNickname;
@property(nonatomic) _Bool hasRoomId; // @dynamic hasRoomId;
@property(nonatomic) _Bool hasUniqueId; // @dynamic hasUniqueId;
@property(nonatomic) _Bool hasUserId; // @dynamic hasUserId;
@property(nonatomic) _Bool hasVersionInfo; // @dynamic hasVersionInfo;
@property(copy, nonatomic) NSString *nickname; // @dynamic nickname;
@property(nonatomic) unsigned long long roomId; // @dynamic roomId;
@property(nonatomic) unsigned long long uniqueId; // @dynamic uniqueId;
@property(nonatomic) unsigned long long userId; // @dynamic userId;
@property(nonatomic) int versionInfo; // @dynamic versionInfo;

@end

