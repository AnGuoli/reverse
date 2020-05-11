//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MJRefreshStateHeader.h"

@class NSMutableDictionary, UIImageView;

__attribute__((visibility("hidden")))
@interface MJRefreshGifHeader : MJRefreshStateHeader
{
    UIImageView *_gifView;
    NSMutableDictionary *_stateImages;
    NSMutableDictionary *_stateDurations;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *stateDurations; // @synthesize stateDurations=_stateDurations;
@property(retain, nonatomic) NSMutableDictionary *stateImages; // @synthesize stateImages=_stateImages;
- (void)setState:(long long)arg1;
- (void)placeSubviews;
- (void)setPullingPercent:(double)arg1;
- (void)prepare;
- (void)setImages:(id)arg1 forState:(long long)arg2;
- (void)setImages:(id)arg1 duration:(double)arg2 forState:(long long)arg3;
@property(readonly, nonatomic) __weak UIImageView *gifView;

@end

