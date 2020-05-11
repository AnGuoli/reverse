//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ALiMonitorUrlLoad.h"

@class NSString;

@interface ALiMonitorShowH5 : ALiMonitorUrlLoad
{
    NSString *_dimension_taoke_type;
    NSString *_taokeType;
    NSString *_measure_analysis_time;
    NSString *_measure_taoke_time;
    NSString *_analysis_time;
    NSString *_taoke_time;
}

@property(retain, nonatomic) NSString *taoke_time; // @synthesize taoke_time=_taoke_time;
@property(retain, nonatomic) NSString *analysis_time; // @synthesize analysis_time=_analysis_time;
@property(retain, nonatomic) NSString *measure_taoke_time; // @synthesize measure_taoke_time=_measure_taoke_time;
@property(retain, nonatomic) NSString *measure_analysis_time; // @synthesize measure_analysis_time=_measure_analysis_time;
@property(retain, nonatomic) NSString *taokeType; // @synthesize taokeType=_taokeType;
@property(retain, nonatomic) NSString *dimension_taoke_type; // @synthesize dimension_taoke_type=_dimension_taoke_type;
- (void).cxx_destruct;
- (id)description;
- (void)makeMeasure:(id)arg1;
- (void)makeDimension:(id)arg1;
- (id)monitorPoint;
- (id)monitorModule;
- (id)init;

@end

