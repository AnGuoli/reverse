//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSMutableArray;

@interface VoipRedirectReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) int connSampleCnt; // @dynamic connSampleCnt;
@property(retain, nonatomic) NSMutableArray *connSampleList; // @dynamic connSampleList;
@property(nonatomic) int currentDuration; // @dynamic currentDuration;
@property(nonatomic) unsigned int currentNetType; // @dynamic currentNetType;
@property(nonatomic) unsigned int nicCnt; // @dynamic nicCnt;
@property(retain, nonatomic) NSMutableArray *nicSet; // @dynamic nicSet;
@property(nonatomic) unsigned int previousNetType; // @dynamic previousNetType;
@property(nonatomic) int redirectOrientedFlg; // @dynamic redirectOrientedFlg;
@property(nonatomic) int roomId; // @dynamic roomId;
@property(nonatomic) long long roomKey; // @dynamic roomKey;
@property(nonatomic) int roomMemberId; // @dynamic roomMemberId;

@end

