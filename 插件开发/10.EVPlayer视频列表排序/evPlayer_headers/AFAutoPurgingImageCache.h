//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AFImageRequestCache-Protocol.h"

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface AFAutoPurgingImageCache : NSObject <AFImageRequestCache>
{
    unsigned long long _memoryCapacity;
    unsigned long long _preferredMemoryUsageAfterPurge;
    NSMutableDictionary *_cachedImages;
    unsigned long long _currentMemoryUsage;
    NSObject<OS_dispatch_queue> *_synchronizationQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *synchronizationQueue; // @synthesize synchronizationQueue=_synchronizationQueue;
@property(nonatomic) unsigned long long currentMemoryUsage; // @synthesize currentMemoryUsage=_currentMemoryUsage;
@property(retain, nonatomic) NSMutableDictionary *cachedImages; // @synthesize cachedImages=_cachedImages;
@property(nonatomic) unsigned long long preferredMemoryUsageAfterPurge; // @synthesize preferredMemoryUsageAfterPurge=_preferredMemoryUsageAfterPurge;
@property(nonatomic) unsigned long long memoryCapacity; // @synthesize memoryCapacity=_memoryCapacity;
- (void).cxx_destruct;
- (id)imageCacheKeyFromURLRequest:(id)arg1 withAdditionalIdentifier:(id)arg2;
- (id)imageforRequest:(id)arg1 withAdditionalIdentifier:(id)arg2;
- (_Bool)removeImageforRequest:(id)arg1 withAdditionalIdentifier:(id)arg2;
- (void)addImage:(id)arg1 forRequest:(id)arg2 withAdditionalIdentifier:(id)arg3;
- (id)imageWithIdentifier:(id)arg1;
- (_Bool)removeAllImages;
- (_Bool)removeImageWithIdentifier:(id)arg1;
- (void)addImage:(id)arg1 withIdentifier:(id)arg2;
@property(readonly, nonatomic) unsigned long long memoryUsage;
- (void)dealloc;
- (id)initWithMemoryCapacity:(unsigned long long)arg1 preferredMemoryCapacity:(unsigned long long)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

