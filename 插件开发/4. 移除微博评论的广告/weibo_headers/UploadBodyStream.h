//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSInputStream.h>

#import "NSStreamDelegate-Protocol.h"

@class NSEnumerator, NSError, NSMutableArray, NSString;
@protocol NSStreamDelegate;

@interface UploadBodyStream : NSInputStream <NSStreamDelegate>
{
    int _phase;
    unsigned long long _phaseReadOffset;
    id <NSStreamDelegate> delegate;
    unsigned long long streamStatus;
    NSError *streamError;
    NSString *_boundary;
    unsigned long long _stringEncoding;
    NSMutableArray *_headerArr;
    NSMutableArray *_inputStreamArr;
    NSMutableArray *_contentLengthArr;
    NSEnumerator *_headerEnumerator;
    NSEnumerator *_streamEnumerator;
    NSInputStream *_inputStream;
    NSString *_headerStr;
}

@property(retain, nonatomic) NSString *headerStr; // @synthesize headerStr=_headerStr;
@property(retain, nonatomic) NSInputStream *inputStream; // @synthesize inputStream=_inputStream;
@property(retain, nonatomic) NSEnumerator *streamEnumerator; // @synthesize streamEnumerator=_streamEnumerator;
@property(retain, nonatomic) NSEnumerator *headerEnumerator; // @synthesize headerEnumerator=_headerEnumerator;
@property(retain, nonatomic) NSMutableArray *contentLengthArr; // @synthesize contentLengthArr=_contentLengthArr;
@property(retain, nonatomic) NSMutableArray *inputStreamArr; // @synthesize inputStreamArr=_inputStreamArr;
@property(retain, nonatomic) NSMutableArray *headerArr; // @synthesize headerArr=_headerArr;
@property(nonatomic) unsigned long long stringEncoding; // @synthesize stringEncoding=_stringEncoding;
@property(copy, nonatomic) NSString *boundary; // @synthesize boundary=_boundary;
@property(copy) NSError *streamError; // @synthesize streamError;
@property unsigned long long streamStatus; // @synthesize streamStatus;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void).cxx_destruct;
- (_Bool)_setCFClientFlags:(unsigned long long)arg1 callback:(CDUnknownFunctionPointerType)arg2 context:(CDStruct_4210025a *)arg3;
- (void)_unscheduleFromCFRunLoop:(struct __CFRunLoop *)arg1 forMode:(struct __CFString *)arg2;
- (void)_scheduleInCFRunLoop:(struct __CFRunLoop *)arg1 forMode:(struct __CFString *)arg2;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (_Bool)setProperty:(id)arg1 forKey:(id)arg2;
- (id)propertyForKey:(id)arg1;
- (void)close;
- (void)open;
- (_Bool)hasBytesAvailable;
- (_Bool)getBuffer:(char **)arg1 length:(unsigned long long *)arg2;
- (long long)read:(char *)arg1 maxLength:(unsigned long long)arg2;
- (unsigned long long)contentLength;
- (void)appendWithFomeData:(id)arg1 name:(id)arg2;
- (_Bool)appendWithFileURL:(id)arg1 name:(id)arg2 fileName:(id)arg3;
- (unsigned long long)_contentLengthAtIndex:(int)arg1;
- (id)_stringForHeaders:(id)arg1;
- (_Bool)_transitionToNextPhase;
- (long long)_readData:(id)arg1 intoBuffer:(char *)arg2 maxLength:(unsigned long long)arg3;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

