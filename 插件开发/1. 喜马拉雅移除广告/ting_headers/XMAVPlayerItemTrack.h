//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XMBase/XMModel.h>

@class NSArray, NSString, NSURL;

@interface XMAVPlayerItemTrack : XMModel
{
    _Bool _isAuthorized;
    NSURL *_playUrl;
    unsigned long long _trackId;
    unsigned long long _albumId;
    NSString *_title;
    NSString *_domain;
    unsigned long long _duration;
    unsigned long long _totalLength;
    unsigned long long _sampleDuration;
    unsigned long long _sampleLength;
    NSString *_apiVersion;
    NSString *_buyKey;
    NSArray *_resolutions;
    long long _downloadQuality;
    double _createTimeInterval;
}

+ (id)xmm_modelContainerPropertyGenericClass;
@property(nonatomic) double createTimeInterval; // @synthesize createTimeInterval=_createTimeInterval;
@property(nonatomic) long long downloadQuality; // @synthesize downloadQuality=_downloadQuality;
@property(retain, nonatomic) NSArray *resolutions; // @synthesize resolutions=_resolutions;
@property(copy, nonatomic) NSString *buyKey; // @synthesize buyKey=_buyKey;
@property(copy, nonatomic) NSString *apiVersion; // @synthesize apiVersion=_apiVersion;
@property(nonatomic) _Bool isAuthorized; // @synthesize isAuthorized=_isAuthorized;
@property(nonatomic) unsigned long long sampleLength; // @synthesize sampleLength=_sampleLength;
@property(nonatomic) unsigned long long sampleDuration; // @synthesize sampleDuration=_sampleDuration;
@property(nonatomic) unsigned long long totalLength; // @synthesize totalLength=_totalLength;
@property(nonatomic) unsigned long long duration; // @synthesize duration=_duration;
@property(copy, nonatomic) NSString *domain; // @synthesize domain=_domain;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) unsigned long long albumId; // @synthesize albumId=_albumId;
@property(nonatomic) unsigned long long trackId; // @synthesize trackId=_trackId;
@property(retain, nonatomic) NSURL *playUrl; // @synthesize playUrl=_playUrl;
- (void).cxx_destruct;

@end

