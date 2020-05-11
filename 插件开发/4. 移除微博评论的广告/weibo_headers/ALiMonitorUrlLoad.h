//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ALiMonitor.h"

@class NSString;

@interface ALiMonitorUrlLoad : ALiMonitor
{
    NSString *_dimension_page_type;
    NSString *_pageType;
    NSString *_measure_urlHandle_time;
    NSString *_measure_urlLoad_time;
    NSString *_measure_all_time;
    NSString *_urlHandle_time;
    NSString *_urlLoad_time;
    NSString *_all_time;
}

@property(retain, nonatomic) NSString *all_time; // @synthesize all_time=_all_time;
@property(retain, nonatomic) NSString *urlLoad_time; // @synthesize urlLoad_time=_urlLoad_time;
@property(retain, nonatomic) NSString *urlHandle_time; // @synthesize urlHandle_time=_urlHandle_time;
@property(retain, nonatomic) NSString *measure_all_time; // @synthesize measure_all_time=_measure_all_time;
@property(retain, nonatomic) NSString *measure_urlLoad_time; // @synthesize measure_urlLoad_time=_measure_urlLoad_time;
@property(retain, nonatomic) NSString *measure_urlHandle_time; // @synthesize measure_urlHandle_time=_measure_urlHandle_time;
@property(retain, nonatomic) NSString *pageType; // @synthesize pageType=_pageType;
@property(retain, nonatomic) NSString *dimension_page_type; // @synthesize dimension_page_type=_dimension_page_type;
- (void).cxx_destruct;
- (id)description;
- (void)makeMeasure:(id)arg1;
- (void)makeDimension:(id)arg1;
- (id)monitorPoint;
- (id)monitorModule;
- (id)init;

@end

