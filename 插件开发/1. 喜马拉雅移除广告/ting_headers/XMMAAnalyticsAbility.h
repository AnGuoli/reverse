//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "XMMANativeModule-Protocol.h"

@class NSString, XMMAWebView;

@interface XMMAAnalyticsAbility : NSObject <XMMANativeModule>
{
    XMMAWebView *webview;
}

+ (void)load;
+ (void)initialize;
@property(nonatomic) __weak XMMAWebView *webview; // @synthesize webview;
- (void).cxx_destruct;
- (void)xmma_v1_analytics_param:(id)arg1 result:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

