//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface RMKtvUserStatusSyncRsp : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasMicNo; // @dynamic hasMicNo;
@property(nonatomic) _Bool hasMuteType; // @dynamic hasMuteType;
@property(nonatomic) _Bool hasReason; // @dynamic hasReason;
@property(nonatomic) _Bool hasResultCode; // @dynamic hasResultCode;
@property(nonatomic) _Bool hasStatus; // @dynamic hasStatus;
@property(nonatomic) _Bool hasTimestamp; // @dynamic hasTimestamp;
@property(nonatomic) _Bool hasTips; // @dynamic hasTips;
@property(nonatomic) _Bool hasUniqueId; // @dynamic hasUniqueId;
@property(nonatomic) _Bool hasUserType; // @dynamic hasUserType;
@property(nonatomic) int micNo; // @dynamic micNo;
@property(nonatomic) int muteType; // @dynamic muteType;
@property(copy, nonatomic) NSString *reason; // @dynamic reason;
@property(nonatomic) int resultCode; // @dynamic resultCode;
@property(nonatomic) int status; // @dynamic status;
@property(nonatomic) unsigned long long timestamp; // @dynamic timestamp;
@property(copy, nonatomic) NSString *tips; // @dynamic tips;
@property(nonatomic) unsigned long long uniqueId; // @dynamic uniqueId;
@property(nonatomic) int userType; // @dynamic userType;

@end

