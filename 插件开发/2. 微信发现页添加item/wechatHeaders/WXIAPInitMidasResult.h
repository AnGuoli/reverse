//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding-Protocol.h"

@class NSString;

@interface WXIAPInitMidasResult : MMObject <PBCoding>
{
    NSString *offerId;
    NSString *openId;
    NSString *openKey;
    NSString *sessionId;
    NSString *sessionType;
    NSString *pf;
    NSString *environment;
    NSString *usableProductId;
}

+ (void)initialize;
+ (void)PBArrayAdd_usableProductId;
+ (void)PBArrayAdd_environment;
+ (void)PBArrayAdd_pf;
+ (void)PBArrayAdd_sessionType;
+ (void)PBArrayAdd_sessionId;
+ (void)PBArrayAdd_openKey;
+ (void)PBArrayAdd_openId;
+ (void)PBArrayAdd_offerId;
@property(copy, nonatomic) NSString *usableProductId; // @synthesize usableProductId;
@property(copy, nonatomic) NSString *environment; // @synthesize environment;
@property(copy, nonatomic) NSString *pf; // @synthesize pf;
@property(copy, nonatomic) NSString *sessionType; // @synthesize sessionType;
@property(copy, nonatomic) NSString *sessionId; // @synthesize sessionId;
@property(copy, nonatomic) NSString *openKey; // @synthesize openKey;
@property(copy, nonatomic) NSString *openId; // @synthesize openId;
@property(copy, nonatomic) NSString *offerId; // @synthesize offerId;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

