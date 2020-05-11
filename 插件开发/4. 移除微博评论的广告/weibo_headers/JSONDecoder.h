//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface JSONDecoder : NSObject
{
    struct JKParseState *parseState;
}

+ (id)decoderWithParseOptions:(unsigned long long)arg1;
+ (id)decoder;
- (id)mutableObjectWithData:(id)arg1 error:(id *)arg2;
- (id)mutableObjectWithData:(id)arg1;
- (id)mutableObjectWithUTF8String:(const char *)arg1 length:(unsigned long long)arg2 error:(id *)arg3;
- (id)mutableObjectWithUTF8String:(const char *)arg1 length:(unsigned long long)arg2;
- (id)objectWithData:(id)arg1 error:(id *)arg2;
- (id)objectWithData:(id)arg1;
- (id)objectWithUTF8String:(const char *)arg1 length:(unsigned long long)arg2 error:(id *)arg3;
- (id)objectWithUTF8String:(const char *)arg1 length:(unsigned long long)arg2;
- (id)parseJSONData:(id)arg1 error:(id *)arg2;
- (id)parseJSONData:(id)arg1;
- (id)parseUTF8String:(const char *)arg1 length:(unsigned long long)arg2 error:(id *)arg3;
- (id)parseUTF8String:(const char *)arg1 length:(unsigned long long)arg2;
- (void)clearCache;
- (void)dealloc;
- (id)initWithParseOptions:(unsigned long long)arg1;
- (id)init;

@end

