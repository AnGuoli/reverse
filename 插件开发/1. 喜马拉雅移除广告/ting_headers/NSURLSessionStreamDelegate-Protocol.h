//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSURLSessionTaskDelegate-Protocol.h"

@class NSInputStream, NSOutputStream, NSURLSession, NSURLSessionStreamTask;

@protocol NSURLSessionStreamDelegate <NSURLSessionTaskDelegate>

@optional
- (void)URLSession:(NSURLSession *)arg1 streamTask:(NSURLSessionStreamTask *)arg2 didBecomeInputStream:(NSInputStream *)arg3 outputStream:(NSOutputStream *)arg4;
- (void)URLSession:(NSURLSession *)arg1 betterRouteDiscoveredForStreamTask:(NSURLSessionStreamTask *)arg2;
- (void)URLSession:(NSURLSession *)arg1 writeClosedForStreamTask:(NSURLSessionStreamTask *)arg2;
- (void)URLSession:(NSURLSession *)arg1 readClosedForStreamTask:(NSURLSessionStreamTask *)arg2;
@end

