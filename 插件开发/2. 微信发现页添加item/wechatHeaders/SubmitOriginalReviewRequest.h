//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString, SubmitOriginalReviewRequest_WxaGameEnvContext, SubmitOriginalReviewRequest_WxagGameOriginalReviewResult, WxaGameBaseInfo, WxaGameClientPublicLibInfo;

@interface SubmitOriginalReviewRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *appId; // @dynamic appId;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) SubmitOriginalReviewRequest_WxaGameEnvContext *envContext; // @dynamic envContext;
@property(retain, nonatomic) WxaGameClientPublicLibInfo *publicLib; // @dynamic publicLib;
@property(retain, nonatomic) SubmitOriginalReviewRequest_WxagGameOriginalReviewResult *result; // @dynamic result;
@property(retain, nonatomic) WxaGameBaseInfo *wxaGameInfo; // @dynamic wxaGameInfo;

@end

