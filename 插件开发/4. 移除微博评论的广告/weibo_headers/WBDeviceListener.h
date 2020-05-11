//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSThread;

@interface WBDeviceListener : NSObject
{
    NSThread *listenerThread;
    Class dictionaryClass;
    _Bool _isListening;
    set_8c8af6e4 *_allocations;
    struct __CFAllocator *_defaultAllocator;
    struct __CFAllocator *_myAllocator;
}

+ (id)sharedWBDeviceListener;
@property struct __CFAllocator *myAllocator; // @synthesize myAllocator=_myAllocator;
@property struct __CFAllocator *defaultAllocator; // @synthesize defaultAllocator=_defaultAllocator;
@property set_8c8af6e4 *allocations; // @synthesize allocations=_allocations;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (_Bool)isChargerDictionary:(struct __CFDictionary *)arg1;
- (_Bool)isValidCFDictionary:(void *)arg1;
- (void)listenerThreadMain;
- (void)dummyTimer:(id)arg1;
- (void)stopListenerWorker;
- (void)startListenerWorker;
- (void)stopListener;
- (void)startListener;
- (id)init;

@end

