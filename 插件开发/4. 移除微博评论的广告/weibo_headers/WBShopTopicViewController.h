//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBTopNavigationWebViewController.h"

@class WBShopTopic;

@interface WBShopTopicViewController : WBTopNavigationWebViewController
{
    long long scrollDistance;
    double topNaviBackgroundAlpha;
    WBShopTopic *_topic;
}

@property(retain, nonatomic) WBShopTopic *topic; // @synthesize topic=_topic;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (void)layoutViews;
- (void)refreshNaviWithTopNaviItemStyle:(_Bool)arg1 andBackgroundAlpha:(double)arg2;
- (void)setTopNaviWhiteBackground:(double)arg1;
- (void)setTopNaviNormalBackground:(double)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (_Bool)displaysLoadingProgressBar;
- (void)wb_webViewDidStartLoad:(id)arg1;
- (void)wb_webViewDidFinishLoad:(id)arg1;
- (void)wb_webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (_Bool)wb_webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end

