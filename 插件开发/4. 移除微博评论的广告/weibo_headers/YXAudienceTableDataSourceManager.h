//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString, NSTimer;
@protocol OS_dispatch_queue, YXAudienceTableDataSourceManagerDelegate;

@interface YXAudienceTableDataSourceManager : NSObject
{
    _Bool _showMore;
    NSString *_broadcasterMemberID;
    id <YXAudienceTableDataSourceManagerDelegate> _delegate;
    NSMutableArray *_dataSources;
    NSMutableDictionary *_audienceDic;
    NSObject<OS_dispatch_queue> *_queue;
    NSTimer *_reloadTimer;
    NSMutableArray *_senceRankAudienceArray;
}

@property(retain, nonatomic) NSMutableArray *senceRankAudienceArray; // @synthesize senceRankAudienceArray=_senceRankAudienceArray;
@property(retain, nonatomic) NSTimer *reloadTimer; // @synthesize reloadTimer=_reloadTimer;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSMutableDictionary *audienceDic; // @synthesize audienceDic=_audienceDic;
@property(retain, nonatomic) NSMutableArray *dataSources; // @synthesize dataSources=_dataSources;
@property(nonatomic) __weak id <YXAudienceTableDataSourceManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool showMore; // @synthesize showMore=_showMore;
@property(copy, nonatomic) NSString *broadcasterMemberID; // @synthesize broadcasterMemberID=_broadcasterMemberID;
- (void).cxx_destruct;
- (void)dealloc;
- (void)checkAndUpdateAudienceData;
- (void)reloadTimerHandle:(id)arg1;
- (void)stopReloadTimer;
- (void)startReloadTimer;
- (void)reloadView;
- (_Bool)scoreCompare:(id)arg1 right:(id)arg2;
- (void)removeResectInfo:(id)arg1;
- (_Bool)isHaveAudienceListFirstWithInfo:(id)arg1;
- (id)getFirstAudienceList;
- (void)_refreshAudienceDic;
- (_Bool)isExistsOrIsBroadcaster:(id)arg1;
- (long long)getSenceRank:(id)arg1;
- (_Bool)isHaveErrorWithInfo:(id)arg1;
- (void)_deleteSenceRankModel:(id)arg1;
- (void)deleteSenceRankModelWithMemberId:(id)arg1;
- (void)_addSenceRankModel:(id)arg1;
- (void)_updateFirstInfo;
- (void)_makeAudienceCountLessThanMaxAndRefresh:(_Bool)arg1;
- (void)_sortAudienceArray;
- (void)_resetSenceRankArray;
- (void)_resetInfos:(id)arg1;
- (void)resetInfos:(id)arg1;
- (void)_removeAudienceDic:(id)arg1;
- (void)deleteAll;
- (void)_deleteInfoWithMemberID:(id)arg1;
- (void)deleteInfoWithMemberID:(id)arg1;
- (void)_insertInfo:(id)arg1;
- (void)insertInfo:(id)arg1;
- (id)infoAtIndex:(long long)arg1;
@property(readonly, nonatomic) long long count;
- (void)_enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;

@end

