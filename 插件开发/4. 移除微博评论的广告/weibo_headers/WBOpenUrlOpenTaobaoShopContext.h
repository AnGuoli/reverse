//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBOpenUrlContextBase.h"

@class NSDictionary, NSString;

@interface WBOpenUrlOpenTaobaoShopContext : WBOpenUrlContextBase
{
    NSString *_shopid;
    NSDictionary *_ybhpss;
    NSString *_url;
    NSString *_isvCode;
    NSString *_taobaoH5Url;
}

@property(retain, nonatomic) NSString *taobaoH5Url; // @synthesize taobaoH5Url=_taobaoH5Url;
@property(retain, nonatomic) NSString *isvCode; // @synthesize isvCode=_isvCode;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSDictionary *ybhpss; // @synthesize ybhpss=_ybhpss;
@property(retain, nonatomic) NSString *shopid; // @synthesize shopid=_shopid;
- (void).cxx_destruct;
- (void)dealloc;
- (void)startContext;
- (void)parseUrlAndRefreshValues:(id)arg1;

@end

