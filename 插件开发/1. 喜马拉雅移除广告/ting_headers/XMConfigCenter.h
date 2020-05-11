//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "XMConfigRequestProtocol-Protocol.h"

@class NSMutableDictionary, NSString, XMConfigCore;

@interface XMConfigCenter : NSObject <XMConfigRequestProtocol>
{
    double _lastRequestTime;
    XMConfigCore *_configCore;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedConfigCenter;
@property(retain, nonatomic) XMConfigCore *configCore; // @synthesize configCore=_configCore;
@property(nonatomic) double lastRequestTime; // @synthesize lastRequestTime=_lastRequestTime;
- (void).cxx_destruct;
- (void)shouldStartDiff:(id)arg1;
- (void)onAppEnvChanged;
- (id)getFacemaskPortalStr;
- (void)updateMulehorseBucketIdsStr:(id)arg1;
- (id)mulehorseBucketIdsStr;
- (id)getBucketIdsStr;
- (id)getNullableConfigWithGroup:(id)arg1 andItem:(id)arg2;
- (void)requestFacemaskPortal;
- (void)requestABTestSync;
- (void)requestABTestDiff;
- (void)requestPickOffBucketIds;
- (void)requestConfigWithGroupNames:(id)arg1;
- (void)requestConfigWithGroupName:(id)arg1;
- (id)getStrValueWithGroup:(id)arg1 andItem:(id)arg2 defaultValue:(id)arg3;
- (long long)getIntValueWithGroup:(id)arg1 andItem:(id)arg2 defaultValue:(long long)arg3;
- (_Bool)getBoolValueWithGroup:(id)arg1 andItem:(id)arg2 defaultValue:(_Bool)arg3;
@property(copy, nonatomic) NSString *appId;
@property(readonly, nonatomic) NSMutableDictionary *configGroupsDic;
- (void)dealloc;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)hostUrl;
- (id)p_stringForGroupNames:(id)arg1;
- (void)xm_requestFacemaskPortalWithAppId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)xm_requestABTestSyncWithAppId:(id)arg1 clientId:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)xm_requestABTestDiffWithAppId:(id)arg1 clientId:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)xm_requestPickOffWithCompletion:(CDUnknownBlockType)arg1;
- (void)xm_requestBatchDiff2ForGroups:(id)arg1 versionInfo:(id)arg2 completion:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

