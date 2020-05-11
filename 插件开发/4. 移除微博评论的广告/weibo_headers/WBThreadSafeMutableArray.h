//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSMutableArray.h>

@interface WBThreadSafeMutableArray : NSMutableArray
{
    struct _opaque_pthread_mutex_t _safeThreadArrayMutex;
    struct _opaque_pthread_mutexattr_t _safeThreadArrayMutexAttr;
    NSMutableArray *_array;
}

@property(retain, nonatomic) NSMutableArray *array; // @synthesize array=_array;
- (void).cxx_destruct;
- (void)dealloc;
- (unsigned long long)indexOfObject:(id)arg1;
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)removeLastObject;
- (void)removeObjectAtIndex:(unsigned long long)arg1;
- (void)addObject:(id)arg1;
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)keyEnumerator;
- (id)objectAtIndex:(unsigned long long)arg1;
- (unsigned long long)count;
- (id)initWithObjects:(const id *)arg1 count:(unsigned long long)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)init;
- (id)initCommon;

@end

