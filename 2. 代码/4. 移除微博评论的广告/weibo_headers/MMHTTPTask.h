//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMTask.h"

#import "MIHTTPRequestHandling-Protocol.h"

@class NSString, NSURLRequest;

@interface MMHTTPTask : MMTask <MIHTTPRequestHandling>
{
    NSURLRequest *_request;
    CDUnknownBlockType _completionHandler;
}

@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) NSURLRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;
- (void)handleErrorResponse:(id)arg1;
- (void)handleResponse:(id)arg1 responseObject:(id)arg2;
- (void)resume;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

