//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBUInt64Array;

@interface KSONG_RM_RoomMsgAck : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GPBUInt64Array *attachmentArray; // @dynamic attachmentArray;
@property(readonly, nonatomic) unsigned long long attachmentArray_Count; // @dynamic attachmentArray_Count;
@property(nonatomic) unsigned long long chatId; // @dynamic chatId;
@property(nonatomic) _Bool hasChatId; // @dynamic hasChatId;
@property(nonatomic) _Bool hasUniqueId; // @dynamic hasUniqueId;
@property(nonatomic) _Bool hasUserId; // @dynamic hasUserId;
@property(nonatomic) _Bool hasVersionInfo; // @dynamic hasVersionInfo;
@property(nonatomic) unsigned long long uniqueId; // @dynamic uniqueId;
@property(nonatomic) unsigned long long userId; // @dynamic userId;
@property(nonatomic) int versionInfo; // @dynamic versionInfo;

@end

