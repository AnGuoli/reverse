//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSURLRequest;

@protocol ProxyHttpClientDeleagete <NSObject>

@optional
- (void)didProxyHostConnectFailed;
- (void)needAuthenRequest:(NSURLRequest *)arg1 withProxyHTTPHeaderParam:(id *)arg2;
- (void)needAuthenRequstWithUserName:(id *)arg1 withPassword:(id *)arg2;
- (void)needProxyHost:(id *)arg1 withPort:(long long *)arg2 withProxyType:(id *)arg3;
@end

