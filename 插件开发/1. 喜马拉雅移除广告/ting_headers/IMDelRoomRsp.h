//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class ArchInfo;

@interface IMDelRoomRsp : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) ArchInfo *archInfo; // @dynamic archInfo;
@property(nonatomic) unsigned long long attachment; // @dynamic attachment;
@property(nonatomic) _Bool hasArchInfo; // @dynamic hasArchInfo;
@property(nonatomic) _Bool hasAttachment; // @dynamic hasAttachment;
@property(nonatomic) _Bool hasResultCode; // @dynamic hasResultCode;
@property(nonatomic) _Bool hasRoomId; // @dynamic hasRoomId;
@property(nonatomic) _Bool hasToken; // @dynamic hasToken;
@property(nonatomic) _Bool hasUserId; // @dynamic hasUserId;
@property(nonatomic) _Bool hasVersionInfo; // @dynamic hasVersionInfo;
@property(nonatomic) int resultCode; // @dynamic resultCode;
@property(nonatomic) unsigned int roomId; // @dynamic roomId;
@property(nonatomic) unsigned long long token; // @dynamic token;
@property(nonatomic) unsigned int userId; // @dynamic userId;
@property(nonatomic) int versionInfo; // @dynamic versionInfo;

@end

