//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@interface GroupSessionInfo : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) unsigned long long groupId; // @dynamic groupId;
@property(nonatomic) unsigned int groupmsgtype; // @dynamic groupmsgtype;
@property(nonatomic) _Bool hasGroupId; // @dynamic hasGroupId;
@property(nonatomic) _Bool hasGroupmsgtype; // @dynamic hasGroupmsgtype;
@property(nonatomic) _Bool hasMaxMsgId; // @dynamic hasMaxMsgId;
@property(nonatomic) _Bool hasReadMsgId; // @dynamic hasReadMsgId;
@property(nonatomic) unsigned long long maxMsgId; // @dynamic maxMsgId;
@property(nonatomic) unsigned long long readMsgId; // @dynamic readMsgId;

@end

