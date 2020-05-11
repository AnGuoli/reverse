//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class WBGPUImageEffectHandle;

@protocol WBGPUImageTargetProtocol <NSObject>
- (void)removeAllTargets;
- (void)removeTarget:(WBGPUImageEffectHandle *)arg1;
- (void)addTarget:(WBGPUImageEffectHandle *)arg1 textureIndex:(long long)arg2;
- (void)addTarget:(WBGPUImageEffectHandle *)arg1;
- (void)reset;
- (void *)getWBGPUImageHandle;
@end

