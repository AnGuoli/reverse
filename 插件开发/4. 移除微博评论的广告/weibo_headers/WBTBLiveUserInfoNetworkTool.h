//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WBTBLiveUserInfoCardCacheTool;

@interface WBTBLiveUserInfoNetworkTool : NSObject
{
    WBTBLiveUserInfoCardCacheTool *_cacheTool;
}

@property(retain, nonatomic) WBTBLiveUserInfoCardCacheTool *cacheTool; // @synthesize cacheTool=_cacheTool;
- (void).cxx_destruct;
- (void)requestUserInfoWithOpenId:(id)arg1 liveId:(id)arg2 fetchCacheHandler:(CDUnknownBlockType)arg3 successHandler:(CDUnknownBlockType)arg4 failureHandler:(CDUnknownBlockType)arg5;
- (id)init;

@end

