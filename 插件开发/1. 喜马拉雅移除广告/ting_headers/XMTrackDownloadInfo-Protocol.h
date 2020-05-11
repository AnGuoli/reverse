//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, NSURL;

@protocol XMTrackDownloadInfo <NSObject>
@property(nonatomic) double downloadTimeLine;
@property(readonly, copy, nonatomic) NSURL *trackDownloadUrl;
@property(copy, nonatomic) NSString *downloadSequenceId;
@property(copy, nonatomic) NSString *fileName;
@property(nonatomic) unsigned long long totalBytes;
@property(nonatomic) unsigned long long downloadedBytes;
@property(nonatomic) long long downloadQuality;
@property(retain, nonatomic) NSURL *downloadUrl;
@property(retain, nonatomic) NSURL *downloadAacUrl;
@property(nonatomic) unsigned long long downloadUid;
@end

