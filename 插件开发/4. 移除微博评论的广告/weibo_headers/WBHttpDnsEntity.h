//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface WBHttpDnsEntity : NSObject
{
    NSArray *_ips;
    NSString *_ip_source;
    NSString *_net_ip;
}

@property(copy, nonatomic) NSString *net_ip; // @synthesize net_ip=_net_ip;
@property(copy, nonatomic) NSString *ip_source; // @synthesize ip_source=_ip_source;
@property(retain, nonatomic) NSArray *ips; // @synthesize ips=_ips;
- (void).cxx_destruct;
- (id)init;

@end

