//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MJRefreshHeader.h"

@class NSMutableDictionary, UILabel;

__attribute__((visibility("hidden")))
@interface MJRefreshStateHeader : MJRefreshHeader
{
    UILabel *_lastUpdatedTimeLabel;
    UILabel *_stateLabel;
    CDUnknownBlockType _lastUpdatedTimeText;
    double _labelLeftInset;
    NSMutableDictionary *_stateTitles;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *stateTitles; // @synthesize stateTitles=_stateTitles;
@property(nonatomic) double labelLeftInset; // @synthesize labelLeftInset=_labelLeftInset;
@property(copy, nonatomic) CDUnknownBlockType lastUpdatedTimeText; // @synthesize lastUpdatedTimeText=_lastUpdatedTimeText;
- (void)setState:(long long)arg1;
- (void)placeSubviews;
- (void)prepare;
- (void)setLastUpdatedTimeKey:(id)arg1;
- (void)setTitle:(id)arg1 forState:(long long)arg2;
@property(readonly, nonatomic) __weak UILabel *lastUpdatedTimeLabel;
@property(readonly, nonatomic) __weak UILabel *stateLabel;

@end

