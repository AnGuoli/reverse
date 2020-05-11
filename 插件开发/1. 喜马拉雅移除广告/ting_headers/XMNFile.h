//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "XMNFileDelegate-Protocol.h"

@class NSData, NSFileHandle, NSString;

@interface XMNFile : NSObject <XMNFileDelegate>
{
    NSString *_filepath;
    NSData *_data;
    long long _fileSize;
    long long _fileModifyTime;
    NSFileHandle *_file;
}

@property(retain, nonatomic) NSFileHandle *file; // @synthesize file=_file;
@property(readonly) long long fileModifyTime; // @synthesize fileModifyTime=_fileModifyTime;
@property(readonly) long long fileSize; // @synthesize fileSize=_fileSize;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(readonly, nonatomic) NSString *filepath; // @synthesize filepath=_filepath;
- (void).cxx_destruct;
- (long long)size;
- (long long)modifyTime;
- (id)path;
- (void)close;
- (id)readAll;
- (id)read:(long long)arg1 size:(long long)arg2;
- (id)initWithData:(id)arg1 error:(id *)arg2;
- (id)initWithPath:(id)arg1 error:(id *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

