//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WBCardDotProtocol-Protocol.h"

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface WBCardDotManager : NSObject <WBCardDotProtocol>
{
    NSMutableDictionary *cardNodes;
    NSObject<OS_dispatch_queue> *cardNodeQueue;
}

+ (id)sharedManager;
- (void).cxx_destruct;
- (void)updateAllNodesToDatebase;
- (void)saveAllNodesToDatabase;
- (void)reloadAllNodesFromDatabase;
- (void)currentAccountDidChanged:(id)arg1;
- (void)markDotTipsOpenedForUnreadID:(id)arg1 result:(CDUnknownBlockType)arg2;
- (void)dotInfoForCard:(id)arg1 result:(CDUnknownBlockType)arg2;
- (void)cardNodeForID:(id)arg1 result:(CDUnknownBlockType)arg2;
- (id)cardNodeForID:(id)arg1;
@property(nonatomic) long long currentVersion;
- (id)init;
- (void)dealloc;
- (void)updateFollowerNodeWithSetting:(_Bool)arg1;
- (void)accountPushSettingUpdated:(id)arg1;
- (void)updateTreeWithArray:(id)arg1 toNodeDictionary:(id)arg2 parentNode:(id)arg3 rootNode:(id)arg4;
- (void)updateNodesTreeWithDictionary:(id)arg1;
- (void)updateNodesWithDictionary_old:(id)arg1;
- (void)updateNodesWithDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

