//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GTWebView, NSError, NSURLRequest, WKNavigationAction;

@protocol GTWebViewDelegate <NSObject>
- (void)gtWebView:(GTWebView *)arg1 didFailLoadWithError:(NSError *)arg2;
- (void)gtWebViewDidFinishLoad:(GTWebView *)arg1;
- (void)gtWebViewDidStartLoad:(GTWebView *)arg1;

@optional
- (void)gtWebView:(GTWebView *)arg1 didFailWithWebContentProcessCrashError:(NSError *)arg2;
- (void)gtWebView:(GTWebView *)arg1 decidePolicyForNavigationAction:(WKNavigationAction *)arg2 decisionHandler:(void (^)(long long))arg3;
- (_Bool)gtWebView:(GTWebView *)arg1 shouldStartLoadWithRequest:(NSURLRequest *)arg2 navigationType:(long long)arg3;
@end

