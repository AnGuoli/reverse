//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface KSONG_PlaySongRsp : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasReason; // @dynamic hasReason;
@property(nonatomic) _Bool hasReqId; // @dynamic hasReqId;
@property(nonatomic) _Bool hasResultCode; // @dynamic hasResultCode;
@property(nonatomic) _Bool hasTimeStamp; // @dynamic hasTimeStamp;
@property(nonatomic) _Bool hasUniqueId; // @dynamic hasUniqueId;
@property(nonatomic) _Bool hasVersionInfo; // @dynamic hasVersionInfo;
@property(copy, nonatomic) NSString *reason; // @dynamic reason;
@property(nonatomic) unsigned long long reqId; // @dynamic reqId;
@property(nonatomic) int resultCode; // @dynamic resultCode;
@property(nonatomic) unsigned long long timeStamp; // @dynamic timeStamp;
@property(nonatomic) unsigned long long uniqueId; // @dynamic uniqueId;
@property(nonatomic) int versionInfo; // @dynamic versionInfo;

@end

