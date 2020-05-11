//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface RMKtvWaitUserRsp : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasReason; // @dynamic hasReason;
@property(nonatomic) _Bool hasResultCode; // @dynamic hasResultCode;
@property(nonatomic) _Bool hasTimestamp; // @dynamic hasTimestamp;
@property(nonatomic) _Bool hasUniqueId; // @dynamic hasUniqueId;
@property(nonatomic) _Bool hasUserType; // @dynamic hasUserType;
@property(copy, nonatomic) NSString *reason; // @dynamic reason;
@property(nonatomic) int resultCode; // @dynamic resultCode;
@property(nonatomic) unsigned long long timestamp; // @dynamic timestamp;
@property(nonatomic) unsigned long long uniqueId; // @dynamic uniqueId;
@property(nonatomic) int userType; // @dynamic userType;
@property(retain, nonatomic) NSMutableArray *waitUsersArray; // @dynamic waitUsersArray;
@property(readonly, nonatomic) unsigned long long waitUsersArray_Count; // @dynamic waitUsersArray_Count;

@end

