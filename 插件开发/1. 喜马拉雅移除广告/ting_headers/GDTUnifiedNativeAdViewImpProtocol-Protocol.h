//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GDTUnifiedNativeAdDataObject, GDTUnifiedNativeAdView, NSArray, UIView;
@protocol GDTUnifiedNativeAdViewDelegate;

@protocol GDTUnifiedNativeAdViewImpProtocol <NSObject>
@property(nonatomic) __weak GDTUnifiedNativeAdView *unifiedNativeAdView;
@property(nonatomic) __weak id <GDTUnifiedNativeAdViewDelegate> delegate;
@property(readonly, nonatomic) GDTUnifiedNativeAdDataObject *dataObject;
- (void)registerClickableCallToActionView:(UIView *)arg1;
- (void)udpateRootViewController;
- (void)unregisterDataObject;
- (void)registerDataObject:(GDTUnifiedNativeAdDataObject *)arg1 clickableViews:(NSArray *)arg2;
@end

