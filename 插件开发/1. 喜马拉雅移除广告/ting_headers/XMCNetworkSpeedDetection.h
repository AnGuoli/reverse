//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface XMCNetworkSpeedDetection : NSObject
{
    double mIntervalForNetworkBandwidth;
    double mTimestampForNetworkBandwidth;
    double mDownloadedDataLengthForNetworkBandwidth;
    int mStatisticCountForNetworkBandwidth;
    CDUnknownBlockType mReportBlock;
}

- (void).cxx_destruct;
- (void)sumupStatistics;
- (void)incrementDataLength:(unsigned long long)arg1;
- (void)setupInitStateForStart:(CDUnknownBlockType)arg1;

@end

