//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WBXJKSerializer : NSObject
{
    struct JKEncodeState *encodeState;
}

+ (id)serializeObject:(id)arg1 options:(unsigned long long)arg2 encodeOption:(unsigned long long)arg3 block:(CDUnknownBlockType)arg4 delegate:(id)arg5 selector:(SEL)arg6 error:(id *)arg7;
- (void)dealloc;
- (void)releaseState;
- (id)serializeObject:(id)arg1 options:(unsigned long long)arg2 encodeOption:(unsigned long long)arg3 block:(CDUnknownBlockType)arg4 delegate:(id)arg5 selector:(SEL)arg6 error:(id *)arg7;

@end

