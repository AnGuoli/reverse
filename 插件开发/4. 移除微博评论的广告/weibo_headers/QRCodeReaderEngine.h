//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WBHTTPRequestOperationWrapper;

@interface QRCodeReaderEngine : NSObject
{
    WBHTTPRequestOperationWrapper *fetchRequestOperationWrapper;
}

- (void).cxx_destruct;
- (void)cancelAllRequests;
- (id)parseQRCode:(id)arg1 paraDict:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;

@end

