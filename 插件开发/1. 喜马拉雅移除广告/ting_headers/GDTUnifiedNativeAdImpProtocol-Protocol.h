//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GDTUnifiedNativeAd, NSDictionary, NSString;
@protocol GDTUnifiedNativeAdDelegate;

@protocol GDTUnifiedNativeAdImpProtocol <NSObject>
@property(nonatomic) long long maxVideoDuration;
@property(copy, nonatomic) NSString *adNetworkName;
@property(retain, nonatomic) NSDictionary *tagDict;
@property(nonatomic) __weak id <GDTUnifiedNativeAdDelegate> delegate;
@property(nonatomic) __weak GDTUnifiedNativeAd *unifiedNativeAd;
- (void)loadAdWithAdCount:(long long)arg1;
- (void)loadAd;
- (id)initWithAppId:(NSString *)arg1 placementId:(NSString *)arg2 serverType:(long long)arg3;
- (id)initWithAppId:(NSString *)arg1 placementId:(NSString *)arg2;
@end

