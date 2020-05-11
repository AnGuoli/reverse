//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface UploadTaskWrapper : NSObject
{
    shared_ptr_3cd17474 _task;
    NSMutableArray *_dataArray;
    long long _bytesReceived;
    long long _totalBytesReceived;
}

@property(nonatomic) long long totalBytesReceived; // @synthesize totalBytesReceived=_totalBytesReceived;
@property(nonatomic) long long bytesReceived; // @synthesize bytesReceived=_bytesReceived;
- (id).cxx_construct;
- (void).cxx_destruct;
- (long long)transferDataToBuffer:(void *)arg1 lengthOfBuffer:(long long)arg2;
- (void)addData:(id)arg1;
- (const struct UploadTask *)get;
- (id)init:(shared_ptr_3cd17474 *)arg1;

@end

