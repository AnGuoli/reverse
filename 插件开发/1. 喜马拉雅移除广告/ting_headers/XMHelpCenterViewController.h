//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMSubLevelViewController.h"

#import "UIWebViewDelegate-Protocol.h"

@class NSString, NSURL, NSURLRequest, UIActivityIndicatorView, UIWebView;

@interface XMHelpCenterViewController : XMSubLevelViewController <UIWebViewDelegate>
{
    UIWebView *_webView;
    UIActivityIndicatorView *_indicatorView;
    NSURL *_url;
    NSURLRequest *_myReqeust;
    long long _helpType;
}

@property(nonatomic) long long helpType; // @synthesize helpType=_helpType;
@property(retain, nonatomic) NSURLRequest *myReqeust; // @synthesize myReqeust=_myReqeust;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)onShareButtonDidClick;
- (void)addShareButton;
- (void)viewDidLoad;
- (id)initWithURL:(id)arg1 helpType:(long long)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

