//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "WKNavigationDelegate-Protocol.h"
#import "WKScriptMessageHandler-Protocol.h"

@class NSMutableDictionary, NSString, WBYX_WebViewJavascriptBridge, WKUserContentController, WKWebView;

@interface WBYXClearWebView : UIView <WKScriptMessageHandler, WKNavigationDelegate>
{
    _Bool _showOnFinishLoad;
    CDUnknownBlockType _loadFinish;
    WKWebView *_wbView;
    WKUserContentController *_userContentController;
    NSMutableDictionary *_action;
    WBYX_WebViewJavascriptBridge *_bridge;
}

@property(retain, nonatomic) WBYX_WebViewJavascriptBridge *bridge; // @synthesize bridge=_bridge;
@property(retain, nonatomic) NSMutableDictionary *action; // @synthesize action=_action;
@property(retain, nonatomic) WKUserContentController *userContentController; // @synthesize userContentController=_userContentController;
@property(retain, nonatomic) WKWebView *wbView; // @synthesize wbView=_wbView;
@property(copy, nonatomic) CDUnknownBlockType loadFinish; // @synthesize loadFinish=_loadFinish;
@property(nonatomic) _Bool showOnFinishLoad; // @synthesize showOnFinishLoad=_showOnFinishLoad;
- (void).cxx_destruct;
- (id)secData;
- (id)checkAndAppendSecdata:(id)arg1;
- (void)callback:(id)arg1;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)registerAction:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2;
- (void)loadRequest:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

