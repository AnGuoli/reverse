//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBMessageObserverDelegate-Protocol.h"

@interface WXIAPInitDataCgiTask : MMObject <PBMessageObserverDelegate>
{
    CDUnknownBlockType _completion;
}

@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
- (void).cxx_destruct;
- (void)callbackInitCompletionWithSuccess:(_Bool)arg1 result:(id)arg2 error:(id)arg3;
- (void)onInitMidasResponse:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)dealloc;
- (void)stopTask;
- (void)startTask;
- (id)initWithCompletion:(CDUnknownBlockType)arg1;

@end

