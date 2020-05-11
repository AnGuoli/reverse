//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface WBVideoPlaybackQualityHistory : NSObject
{
    const char *_queue_identifier;
    double _cumulativePlaybackDuration;
    NSMutableArray *_historyItems;
    NSMutableDictionary *_qualityLabelToDataSource;
    NSMutableDictionary *_nameToCastingDevice;
}

+ (id)_dataSourceFromMediaSelectionOption:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *nameToCastingDevice; // @synthesize nameToCastingDevice=_nameToCastingDevice;
@property(retain, nonatomic) NSMutableDictionary *qualityLabelToDataSource; // @synthesize qualityLabelToDataSource=_qualityLabelToDataSource;
@property(retain, nonatomic) NSMutableArray *historyItems; // @synthesize historyItems=_historyItems;
@property(nonatomic) double cumulativePlaybackDuration; // @synthesize cumulativePlaybackDuration=_cumulativePlaybackDuration;
@property(nonatomic) const char *queue_identifier; // @synthesize queue_identifier=_queue_identifier;
- (void).cxx_destruct;
- (id)synthesizeActionLogExtParams;
- (id)synthesizeLogs;
- (void)_checkCalledOnSameQueue;
- (void)_updateWithPlaybackDuration:(double)arg1;
- (void)updateCurrentWithPlaybackDuration:(double)arg1;
- (void)updateWithMediaSelectionOption:(id)arg1 castingDevice:(id)arg2 cumulativePlaybackDuration:(double)arg3;
- (id)init;

@end

