//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WKScriptMessageHandler-Protocol.h"

@class NSString, XMHWebView;

@interface XMJSExportScriptHandler : NSObject <WKScriptMessageHandler>
{
    XMHWebView *_webView;
}

@property(nonatomic) __weak XMHWebView *webView; // @synthesize webView=_webView;
- (void).cxx_destruct;
- (void)dealloc;
- (void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

