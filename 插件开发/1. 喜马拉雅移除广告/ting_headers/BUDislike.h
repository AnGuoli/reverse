//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BUNativeAd, NSArray, NSMutableArray;

@interface BUDislike : NSObject
{
    NSArray *_filterWords;
    BUNativeAd *_nativeAd;
    NSMutableArray *_AllFilterWords;
}

@property(retain, nonatomic) NSMutableArray *AllFilterWords; // @synthesize AllFilterWords=_AllFilterWords;
@property(retain, nonatomic) BUNativeAd *nativeAd; // @synthesize nativeAd=_nativeAd;
@property(copy, nonatomic) NSArray *filterWords; // @synthesize filterWords=_filterWords;
- (void).cxx_destruct;
- (void)didSelectedFilterWordWithReason:(id)arg1;
- (id)initWithNativeAd:(id)arg1;

@end

