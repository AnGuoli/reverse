//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WXPBGeneratedMessage;

@interface WACgiRequest : NSObject
{
    _Bool _needSpeedyFlag;
    _Bool _dispatchSyncToMainThread;
    unsigned int _uiCgi;
    unsigned int _retryCount;
    WXPBGeneratedMessage *_pbRequest;
    NSObject *_oUserData;
}

@property(nonatomic) _Bool dispatchSyncToMainThread; // @synthesize dispatchSyncToMainThread=_dispatchSyncToMainThread;
@property(nonatomic) _Bool needSpeedyFlag; // @synthesize needSpeedyFlag=_needSpeedyFlag;
@property(nonatomic) unsigned int retryCount; // @synthesize retryCount=_retryCount;
@property(retain, nonatomic) NSObject *oUserData; // @synthesize oUserData=_oUserData;
@property(nonatomic) unsigned int uiCgi; // @synthesize uiCgi=_uiCgi;
@property(retain, nonatomic) WXPBGeneratedMessage *pbRequest; // @synthesize pbRequest=_pbRequest;
- (void).cxx_destruct;
- (id)init;
- (id)toProtobufCGIWrap;

@end

