//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSInvocation, NSMethodSignature;

@interface RNAspectInfo : NSObject
{
    NSInvocation *_originalInvocation;
    id _instance;
    NSMethodSignature *_methodSignature;
}

@property(retain, nonatomic) NSMethodSignature *methodSignature; // @synthesize methodSignature=_methodSignature;
@property(retain, nonatomic) id instance; // @synthesize instance=_instance;
@property(nonatomic) __weak NSInvocation *originalInvocation; // @synthesize originalInvocation=_originalInvocation;
- (void).cxx_destruct;
- (id)argumentAtIndex:(unsigned long long)arg1 invocation:(id)arg2;
@property(readonly, nonatomic) NSArray *arguments;

@end

