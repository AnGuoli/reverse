//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSError, NSURLSessionTaskMetrics, WXResourceRequest, WXResourceResponse;

@protocol WXResourceRequestDelegate <NSObject>
- (void)request:(WXResourceRequest *)arg1 didFinishCollectingMetrics:(NSURLSessionTaskMetrics *)arg2;
- (void)request:(WXResourceRequest *)arg1 didFailWithError:(NSError *)arg2;
- (void)requestDidFinishLoading:(WXResourceRequest *)arg1;
- (void)request:(WXResourceRequest *)arg1 didReceiveData:(NSData *)arg2;
- (void)request:(WXResourceRequest *)arg1 didReceiveResponse:(WXResourceResponse *)arg2;
- (void)request:(WXResourceRequest *)arg1 didSendData:(unsigned long long)arg2 totalBytesToBeSent:(unsigned long long)arg3;
@end

