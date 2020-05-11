//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMBaseViewController.h"

#import "UIWebViewDelegate-Protocol.h"

@class NSString, UIActivityIndicatorView, UIButton, UIWebView;

@interface XMYouzanWebViewController : XMBaseViewController <UIWebViewDelegate>
{
    UIButton *_backButton;
    UIButton *_closeButton;
    UIButton *_shareBtn;
    UIWebView *_webView;
    UIActivityIndicatorView *_indicatorView;
    NSString *_webUrl;
    long long _loginRetryCount;
}

+ (id)urlFromAdLink:(id)arg1;
+ (_Bool)isYouzanUrl:(id)arg1;
+ (void)checkYouzanSDKInit;
+ (void)initYouzanSDK;
@property(nonatomic) long long loginRetryCount; // @synthesize loginRetryCount=_loginRetryCount;
@property(copy, nonatomic) NSString *webUrl; // @synthesize webUrl=_webUrl;
- (void).cxx_destruct;
- (void)disableGL;
- (void)enableGL;
- (void)alertShareData:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)triggerPullToRefresh;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (void)loginYouzanWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)loadYouzanMallMainpage;
- (void)onShare;
- (void)back;
- (void)goBack;
- (void)addRightButton;
- (void)addLeftButton;
- (void)viewDidLoad;
- (id)initWithUrl:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

