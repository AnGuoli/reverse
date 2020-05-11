//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "XMJSCocoaFFIDelegate-Protocol.h"

@class FFIClosureContext, NSMutableArray, NSMutableString, NSString, XMFFIBlockClosure;

@interface XMJSCocoaFFIClosure : NSObject <XMJSCocoaFFIDelegate, NSCopying>
{
    struct OpaqueJSValue *jsFunction;
    struct OpaqueJSContext *ctx;
    CDStruct_4a179dc8 cif;
    CDStruct_a1491473 *closure;
    struct _ffi_type **argTypes;
    struct OpaqueJSValue *jsThisObject;
    void *_blockPtr;
    _Bool isObjC;
    int blockSize;
    _Bool _isNativeBlock;
    _Bool _isBackgroudTask;
    FFIClosureContext *_closureCtx;
    NSMutableString *_signature;
    NSMutableArray *_encodings;
    long long _blockType;
    XMFFIBlockClosure *_blockClosure;
    NSMutableArray *_blockObjArray;
}

@property(retain, nonatomic) NSMutableArray *blockObjArray; // @synthesize blockObjArray=_blockObjArray;
@property(retain, nonatomic) XMFFIBlockClosure *blockClosure; // @synthesize blockClosure=_blockClosure;
@property(nonatomic) long long blockType; // @synthesize blockType=_blockType;
@property(nonatomic) _Bool isBackgroudTask; // @synthesize isBackgroudTask=_isBackgroudTask;
@property(nonatomic) _Bool isNativeBlock; // @synthesize isNativeBlock=_isNativeBlock;
@property(retain, nonatomic) NSMutableArray *encodings; // @synthesize encodings=_encodings;
@property(retain, nonatomic) NSMutableString *signature; // @synthesize signature=_signature;
@property(retain, nonatomic) FFIClosureContext *closureCtx; // @synthesize closureCtx=_closureCtx;
- (struct OpaqueJSValue *)callBlock:(struct OpaqueJSValue *)arg1 arguments:(void **)arg2 count:(int)arg3 nativeCall:(_Bool)arg4;
- (struct _ffi_type **)getArgumentsTypes;
- (void)calledByClosureWithArgs:(void **)arg1 returnValue:(void *)arg2;
- (void)clearBlockObjectInContext:(struct OpaqueJSContext *)arg1;
- (void)clearJSFunction;
- (void)didGetBlockJSObject:(id)arg1;
- (struct OpaqueJSValue *)calledByClosureWithArgs:(void **)arg1 count:(int)arg2 nativeCall:(_Bool)arg3;
- (void)setWithNativeBlock:(id)arg1;
- (CDUnknownFunctionPointerType)setJSFunction:(struct OpaqueJSValue *)arg1 inContext:(struct OpaqueJSContext *)arg2 argumentEncodings:(id)arg3 objC:(_Bool)arg4;
- (void)releaseJSFunction;
- (void)updateBlockSignature:(id)arg1 isReturnValue:(_Bool)arg2;
- (int)blockPointerSize;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (struct OpaqueJSValue *)getFunctionValue;
- (void)copyWithBlockPointer:(void *)arg1 withJSFunction:(struct OpaqueJSValue *)arg2;
- (void *)blockPointer;
- (void *)functionPointer;
- (void)finalize;
- (void)dealloc;
- (void)cleanUp;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

