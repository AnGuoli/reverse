//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, WBOPTCache;
@protocol WBOperationTrackMangerDebugDelegate;

@interface WBOperationTrackManger : NSObject
{
    _Bool _showDebugLabel;
    NSMutableArray *_trackerArray;
    WBOPTCache *_dataCache;
    id <WBOperationTrackMangerDebugDelegate> _debugOwner;
}

+ (id)dateString;
+ (void)logWithProperties:(id)arg1;
+ (void)flushCache;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)shareManager;
@property(nonatomic) __weak id <WBOperationTrackMangerDebugDelegate> debugOwner; // @synthesize debugOwner=_debugOwner;
@property(retain, nonatomic) WBOPTCache *dataCache; // @synthesize dataCache=_dataCache;
@property(retain, nonatomic) NSMutableArray *trackerArray; // @synthesize trackerArray=_trackerArray;
@property(nonatomic) _Bool showDebugLabel; // @synthesize showDebugLabel=_showDebugLabel;
- (void).cxx_destruct;
- (void)getAllDiskItems:(CDUnknownBlockType)arg1;
- (void)stopAllTrack;
- (void)startAllTrack;
- (void)stopTrackWithType:(unsigned long long)arg1;
- (void)startTrackWithType:(unsigned long long)arg1;
- (void)unRegisterTrackWithType:(unsigned long long)arg1;
- (id)registerTrackWithType:(unsigned long long)arg1;
- (void)setUpDefaultConfig;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

