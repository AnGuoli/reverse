//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMBaseEngine.h"

@class NSOperationQueue;

@interface MMVideoMessageEngine : MMBaseEngine
{
    NSOperationQueue *_operationQueue;
}

@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
- (void).cxx_destruct;
- (void)videoSendOperation:(id)arg1 progress:(float)arg2;
- (void)videoSendOperationFailed:(id)arg1;
- (void)moveVideoFile:(id)arg1;
- (void)videoSendOperationSuccessed:(id)arg1;
- (void)cancelAllVideoMessages;
- (void)cancelVideoMessage:(id)arg1;
- (void)addVideoOperation:(id)arg1;
- (void)sendVideoMessage:(id)arg1;
- (id)initWithCoreProvider:(id)arg1;
- (void)dealloc;

@end

