//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableSet, YYCache;
@protocol OS_dispatch_semaphore;

@interface XMMACacheKeyCoordinator : NSObject
{
    NSObject<OS_dispatch_semaphore> *_lock;
    _Bool _dirty;
    YYCache *_keyCacher;
    NSMutableArray *_keys;
    NSMutableSet *_keySet;
}

+ (id)coordinatorWithCache:(id)arg1;
@property(retain, nonatomic) NSMutableSet *keySet; // @synthesize keySet=_keySet;
@property(retain, nonatomic) NSMutableArray *keys; // @synthesize keys=_keys;
@property(retain, nonatomic) YYCache *keyCacher; // @synthesize keyCacher=_keyCacher;
@property(nonatomic) _Bool dirty; // @synthesize dirty=_dirty;
- (void).cxx_destruct;
- (void)flush;
- (void)removeAllKeys;
- (id)allKeys;
- (void)removeKey:(id)arg1;
- (void)addKey:(id)arg1;
- (id)initWithWithCache:(id)arg1;
- (void)dealloc;

@end

