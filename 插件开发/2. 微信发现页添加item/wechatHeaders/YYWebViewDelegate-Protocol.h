//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, NSString, NSURLAuthenticationChallenge, NSURLRequest, NSURLResponse, WKFrameInfo, WKNavigation, WKScriptMessage;
@protocol YYWebViewInterface;

@protocol YYWebViewDelegate <NSObject>

@optional
@property(readonly, nonatomic) NSURLRequest *request;
- (_Bool)checkShouldHandlePromptMessage:(NSString *)arg1 defaultText:(NSString *)arg2 sourceFrame:(WKFrameInfo *)arg3 resultMsg:(id *)arg4;
- (NSString *)getWXHookScriptStr;
- (NSString *)getPreInjectScriptStr;
- (void)webViewDidReceiveServerRedirect:(id <YYWebViewInterface>)arg1 navigation:(WKNavigation *)arg2;
- (void)webViewDidCommitLoad:(id <YYWebViewInterface>)arg1 navigation:(WKNavigation *)arg2;
- (void)webViewOnBeforeReload:(id <YYWebViewInterface>)arg1;
- (void)webView:(id <YYWebViewInterface>)arg1 onBeforeLoadRequest:(NSURLRequest *)arg2;
- (void)webView:(id <YYWebViewInterface>)arg1 didReceiveAuthenticationChallenge:(NSURLAuthenticationChallenge *)arg2 completionHandler:(void (^)(long long, NSURLCredential *))arg3;
- (_Bool)allowsAutoMediaPlay;
- (_Bool)allowsInlineMediaPlay;
- (void)webViewDidReceiveResponse:(NSURLResponse *)arg1 isMainFrame:(_Bool)arg2 andGetIsCancelNavigation:(_Bool *)arg3;
- (void)webViewDidReceiveResponse:(NSURLResponse *)arg1 isMainFrame:(_Bool)arg2;
- (void)webviewDidReceiveScriptMessage:(id)arg1 handler:(NSString *)arg2 rawMessage:(WKScriptMessage *)arg3;
- (void)webView:(id <YYWebViewInterface>)arg1 didFailLoadWithError:(NSError *)arg2;
- (void)webViewContentProcessDidTerminate:(id <YYWebViewInterface>)arg1;
- (void)webViewDidFinishLoad:(id <YYWebViewInterface>)arg1;
- (void)webViewDidStartLoad:(id <YYWebViewInterface>)arg1;
- (_Bool)webView:(id <YYWebViewInterface>)arg1 shouldStartLoadWithRequest:(NSURLRequest *)arg2 navigationType:(long long)arg3 isMainFrame:(_Bool)arg4;
@end

