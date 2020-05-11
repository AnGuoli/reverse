//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableSet;
@protocol OS_dispatch_queue;

@interface LiveRoomCommentModelCenter : NSObject
{
    NSMutableArray *_uiCommentList;
    NSMutableSet *_cacheCommentIds;
    NSMutableArray *_commentCache;
    NSObject<OS_dispatch_queue> *_commentQueue;
    unsigned long long _filterMaxCount;
}

@property(nonatomic) unsigned long long filterMaxCount; // @synthesize filterMaxCount=_filterMaxCount;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *commentQueue; // @synthesize commentQueue=_commentQueue;
@property(retain, nonatomic) NSMutableArray *commentCache; // @synthesize commentCache=_commentCache;
@property(retain, nonatomic) NSMutableSet *cacheCommentIds; // @synthesize cacheCommentIds=_cacheCommentIds;
@property(retain, nonatomic) NSMutableArray *uiCommentList; // @synthesize uiCommentList=_uiCommentList;
- (void).cxx_destruct;
- (void)removeAllCommentModels;
- (void)readCommentModelsWithMaxCount:(long long)arg1 needPreLoadProperty:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)readCommentModelsWithMaxCount:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (id)randomPickCommentArray:(unsigned long long)arg1 models:(id)arg2;
- (void)writeCommentModelsWithLocal:(id)arg1 local:(_Bool)arg2;
- (void)writeCommentModels:(id)arg1;
- (_Bool)isEmpty;
- (void)dealloc;
- (id)init;

@end

