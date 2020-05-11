//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "XMHWebViewDelegate-Protocol.h"

@class NSArray, NSString, NSURL, UIViewController, XMHWebView, XMHWebViewConfiguration, XMJSCallExport;
@protocol XMHWebViewProtocol;

@interface XMHWebViewProvider : NSObject <XMHWebViewDelegate>
{
    NSString *_appId;
    _Bool _canAnalyzing;
    XMHWebView *_webView;
    UIViewController<XMHWebViewProtocol> *_containerVC;
    NSArray *_abilities;
    XMHWebViewConfiguration *_config;
    NSURL *_requestURL;
    NSURL *_uri;
    NSString *_htmlString;
    NSURL *_baseUri;
    XMJSCallExport *_webJSCall;
}

+ (void)initialize;
@property(retain, nonatomic) XMJSCallExport *webJSCall; // @synthesize webJSCall=_webJSCall;
@property(nonatomic) _Bool canAnalyzing; // @synthesize canAnalyzing=_canAnalyzing;
@property(copy, nonatomic) NSURL *baseUri; // @synthesize baseUri=_baseUri;
@property(copy, nonatomic) NSString *htmlString; // @synthesize htmlString=_htmlString;
@property(copy, nonatomic) NSURL *uri; // @synthesize uri=_uri;
@property(copy, nonatomic) NSURL *requestURL; // @synthesize requestURL=_requestURL;
@property(retain, nonatomic) XMHWebViewConfiguration *config; // @synthesize config=_config;
@property(retain, nonatomic) NSArray *abilities; // @synthesize abilities=_abilities;
@property(nonatomic) __weak UIViewController<XMHWebViewProtocol> *containerVC; // @synthesize containerVC=_containerVC;
@property(readonly, nonatomic) XMHWebView *webView; // @synthesize webView=_webView;
- (void).cxx_destruct;
- (void)jssdkWebView:(id)arg1 handleRequest:(id)arg2;
- (_Bool)jssdkCanHandler:(id)arg1 handleRequest:(id)arg2;
- (id)userAgent;
- (void)initHybridUAWithConfig:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)xmh_htmlURLWithUri:(id)arg1;
- (void)wk_xmh_console_log:(id)arg1;
- (void)wk_xmh_JSExportPerformWithCmd:(id)arg1;
- (void)wk_xmh_JSExportCmdWithUrl:(id)arg1 callback:(id)arg2 param:(id)arg3 resultHandler:(CDUnknownBlockType)arg4;
- (void)xmh_webView:(id)arg1 runJavaScriptTextInputPanelWithPrompt:(id)arg2 defaultText:(id)arg3 initiatedByFrame:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)xmh_webView:(id)arg1 runJavaScriptConfirmPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)xmh_webView:(id)arg1 runJavaScriptAlertPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)xmh_webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)xmh_webViewDidFinishLoad:(id)arg1;
- (void)xmh_webViewDidStartLoad:(id)arg1;
- (_Bool)xmh_webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)xmh_console_log:(id)arg1;
- (void)xmh_JSExportPerformWithCmd:(id)arg1;
- (void)xmh_JSExportCmdWithUrl:(id)arg1 callback:(id)arg2 param:(id)arg3 resultHandler:(CDUnknownBlockType)arg4;
- (void)onLoginStateChanged;
- (void)callWebJSDomain:(id)arg1 function:(id)arg2 withArgs:(id)arg3;
- (void)reloadWebViewWithUri:(id)arg1;
- (void)reloadWebView;
- (void)initWKWebViewWithConfig:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)initWebViewWithConfig:(id)arg1;
- (id)initWithHTMLString:(id)arg1 baseURL:(id)arg2 configuration:(id)arg3;
- (void)keyboardWillHide;
- (void)updateTitle:(CDUnknownBlockType)arg1;
- (void)removeScriptHandler;
- (void)addScriptHandler;
- (void)setWKUserAgent:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (id)initWithURI:(id)arg1 configuration:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithURI:(id)arg1 configuration:(id)arg2;
- (id)initWithURI:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

