//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSRecursiveLock;

@interface TBLiveAdapterMgr : NSObject
{
    NSMutableDictionary *_adapterMap;
    NSRecursiveLock *_moduleLock;
    NSMutableDictionary *_adapterDict;
}

+ (id)shareInstance;
@property(retain, nonatomic) NSMutableDictionary *adapterDict; // @synthesize adapterDict=_adapterDict;
@property(retain, nonatomic) NSRecursiveLock *moduleLock; // @synthesize moduleLock=_moduleLock;
@property(retain, nonatomic) NSMutableDictionary *adapterMap; // @synthesize adapterMap=_adapterMap;
- (void).cxx_destruct;
- (id)classWithAdapterName:(id)arg1;
- (void)unRegisterAdapter:(id)arg1 withClass:(id)arg2;
- (void)registerAdapter:(id)arg1 withClass:(id)arg2;

@end

