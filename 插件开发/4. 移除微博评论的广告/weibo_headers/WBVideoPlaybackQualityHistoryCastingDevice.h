//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WBVideoPlaybackQualityHistoryCastingDevice : NSObject
{
    NSString *_identifier;
    NSString *_name;
    double _cumulativePlaybackDuration;
}

@property(nonatomic) double cumulativePlaybackDuration; // @synthesize cumulativePlaybackDuration=_cumulativePlaybackDuration;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;

@end

