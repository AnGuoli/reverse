//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayBaseCgiDelegate-Protocol.h"

@class OpenECardRes, WCPayECardCgiError, WCPayOpenECardCgi;

@protocol WCPayOpenECardCgiDelegate <WCPayBaseCgiDelegate>
- (void)openECardCgi:(WCPayOpenECardCgi *)arg1 didFailWithError:(WCPayECardCgiError *)arg2;
- (void)openECardCgi:(WCPayOpenECardCgi *)arg1 didGetResponse:(OpenECardRes *)arg2;
@end

