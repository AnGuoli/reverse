//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable;

@interface GT3Swizzle : NSObject
{
    unsigned int _numArgs;
    Class _class;
    SEL _selector;
    CDUnknownFunctionPointerType _originalMethod;
    NSMapTable *_blocks;
}

@property(copy, nonatomic) NSMapTable *blocks; // @synthesize blocks=_blocks;
@property(nonatomic) unsigned int numArgs; // @synthesize numArgs=_numArgs;
@property(nonatomic) CDUnknownFunctionPointerType originalMethod; // @synthesize originalMethod=_originalMethod;
@property(nonatomic) SEL selector; // @synthesize selector=_selector;
@property(nonatomic) Class class; // @synthesize class=_class;
- (void).cxx_destruct;
- (id)description;
- (id)initWithBlock:(CDUnknownBlockType)arg1 named:(id)arg2 forClass:(Class)arg3 selector:(SEL)arg4 originalMethod:(CDUnknownFunctionPointerType)arg5;
- (id)init;

@end

