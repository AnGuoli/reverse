//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString;

@interface AddPlanReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned long long amount; // @dynamic amount;
@property(retain, nonatomic) NSString *bankType; // @dynamic bankType;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *bindSerialNo; // @dynamic bindSerialNo;
@property(retain, nonatomic) NSString *cardTail; // @dynamic cardTail;
@property(nonatomic) unsigned int day; // @dynamic day;
@property(nonatomic) unsigned int usrPlanId; // @dynamic usrPlanId;
@property(retain, nonatomic) NSString *wxpEncPasswd; // @dynamic wxpEncPasswd;

@end

