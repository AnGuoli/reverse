//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface ALiPCMuticastDelegate : NSObject
{
    NSMutableArray *_delegateNodes;
    struct _opaque_pthread_rwlock_t _dataRWLock;
}

- (void).cxx_destruct;
- (id)duplicateInvocation:(id)arg1;
- (void)dealloc;
- (void)doNothing;
- (void)doesNotRecognizeSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)delegateEnumerator;
- (_Bool)hasDelegateThatRespondsToSelector:(SEL)arg1;
- (unsigned long long)countForSelector:(SEL)arg1;
- (unsigned long long)countOfClass:(Class)arg1;
- (unsigned long long)count;
- (void)removeAllDelegates;
- (void)removeDelegate:(id)arg1;
- (void)removeDelegate:(id)arg1 delegateQueue:(id)arg2;
- (void)addDelegate:(id)arg1 delegateQueue:(id)arg2;
- (id)init;

@end

