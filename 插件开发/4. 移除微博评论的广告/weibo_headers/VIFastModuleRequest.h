//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface VIFastModuleRequest : NSObject
{
    NSString *_verifyId;
    NSString *_token;
    NSString *_moduleData;
    NSString *_nextStep;
    NSDictionary *_extParams;
    NSString *_bizRequestData;
    NSString *_envType;
    CDUnknownBlockType _eventProxy;
    NSString *_useBird;
}

+ (id)requestWithVerifyId:(id)arg1 verifyData:(id)arg2 extParams:(id)arg3;
@property(retain, nonatomic) NSString *useBird; // @synthesize useBird=_useBird;
@property(copy, nonatomic) CDUnknownBlockType eventProxy; // @synthesize eventProxy=_eventProxy;
@property(retain, nonatomic) NSString *envType; // @synthesize envType=_envType;
@property(retain, nonatomic) NSString *bizRequestData; // @synthesize bizRequestData=_bizRequestData;
@property(retain, nonatomic) NSDictionary *extParams; // @synthesize extParams=_extParams;
@property(retain, nonatomic) NSString *nextStep; // @synthesize nextStep=_nextStep;
@property(retain, nonatomic) NSString *moduleData; // @synthesize moduleData=_moduleData;
@property(retain, nonatomic) NSString *token; // @synthesize token=_token;
@property(retain, nonatomic) NSString *verifyId; // @synthesize verifyId=_verifyId;
- (void).cxx_destruct;
- (id)description;

@end

