//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURLSession;

@interface WBAdURLSession : NSObject
{
    NSURLSession *_session;
}

+ (id)shareInstance;
+ (void)postWithUrl:(id)arg1 headers:(id)arg2 params:(id)arg3 completion:(CDUnknownBlockType)arg4;
@property(retain, nonatomic) NSURLSession *session; // @synthesize session=_session;
- (void).cxx_destruct;
- (void)postWithUrl:(id)arg1 headers:(id)arg2 params:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)init;

@end

