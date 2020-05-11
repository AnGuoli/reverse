//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSURL, XMHTMLShareModel, XMHWebView;

@protocol XMHybridVCProtocol <NSObject>

@optional
- (void)updateSupportOrientation:(_Bool)arg1;
- (void)updateAdParams:(NSDictionary *)arg1;
- (void)updateIsActivityUrl:(_Bool)arg1 activityId:(long long)arg2;
- (void)updateIsExternalUrl:(_Bool)arg1;
- (void)updateHtmlShareModel:(XMHTMLShareModel *)arg1;
- (void)addRightShare:(_Bool)arg1;
- (void)addRightFeedBack;
- (_Bool)rightShare;
- (XMHTMLShareModel *)xmHtmlShareModel;
- (XMHWebView *)webView;
- (NSURL *)webURL;
@end

