//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, XMCSocialMiniProgramItem, XMCSocialShareAudioItem, XMCSocialShareImageItem, XMCSocialShareTextItem, XMCSocialShareWebpageItem;

@protocol XMCSocialSDKCalInterface <NSObject>
@property(copy, nonatomic) NSString *redirectURI;
@property(retain, nonatomic) NSString *appId;
- (void)sendAuthorizeRequest;
- (void)shareMiniProgramItem:(XMCSocialMiniProgramItem *)arg1;
- (void)shareAudioMessage:(XMCSocialShareAudioItem *)arg1;
- (void)shareWebpageMessage:(XMCSocialShareWebpageItem *)arg1;
- (void)shareImageMessage:(XMCSocialShareImageItem *)arg1;
- (void)shareTextMessage:(XMCSocialShareTextItem *)arg1;
- (_Bool)isAppRegisted;
- (_Bool)registerApp:(NSString *)arg1 universalLink:(NSString *)arg2;
@end

