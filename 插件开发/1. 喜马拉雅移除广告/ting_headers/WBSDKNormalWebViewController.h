//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBSDKBasicWebViewController.h"

@class NSDictionary;
@protocol WBSDKNormalWebRequestDelegate;

@interface WBSDKNormalWebViewController : WBSDKBasicWebViewController
{
    id <WBSDKNormalWebRequestDelegate> _delegate;
    NSDictionary *_resultResponseInfo;
}

@property(retain, nonatomic) NSDictionary *resultResponseInfo; // @synthesize resultResponseInfo=_resultResponseInfo;
@property(retain, nonatomic) id <WBSDKNormalWebRequestDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didFinishAndPassDataToUser;
- (void)didReceiveWithResponseInfo:(id)arg1;
- (_Bool)wbsdk_webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)closeBtnClicked;
- (id)urlRequestFromWeiboSDKRequest:(id)arg1 andExtraPara:(id)arg2;
- (void)dealloc;

@end

