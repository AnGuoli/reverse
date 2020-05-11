//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMSoundItem.h"

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSMutableCopying-Protocol.h"

@class NSString;

@interface XMCacheItem : XMSoundItem <NSCoding, NSCopying, NSMutableCopying>
{
    _Bool _readyForDownload;
    _Bool _isInDownLoadQueue;
    _Bool _isExceptLen;
    int sortId;
    int soundTop;
    int manualSortId;
    int albumManualSortId;
    int _novelState;
    double cacheTime;
    NSString *downloadSequenceId;
    double downloadTimeLine;
    long long _downloaderUid;
    unsigned long long _cdnSize;
    unsigned long long _sampleSize;
    long long _downloadFailedCount;
    unsigned long long _downloadType;
}

@property(nonatomic) unsigned long long downloadType; // @synthesize downloadType=_downloadType;
@property(nonatomic) int novelState; // @synthesize novelState=_novelState;
@property(nonatomic) long long downloadFailedCount; // @synthesize downloadFailedCount=_downloadFailedCount;
@property(nonatomic) unsigned long long sampleSize; // @synthesize sampleSize=_sampleSize;
@property(nonatomic) unsigned long long cdnSize; // @synthesize cdnSize=_cdnSize;
@property(nonatomic) _Bool isExceptLen; // @synthesize isExceptLen=_isExceptLen;
@property(nonatomic) _Bool isInDownLoadQueue; // @synthesize isInDownLoadQueue=_isInDownLoadQueue;
@property(nonatomic) _Bool readyForDownload; // @synthesize readyForDownload=_readyForDownload;
@property(nonatomic) long long downloaderUid; // @synthesize downloaderUid=_downloaderUid;
@property(nonatomic) double downloadTimeLine; // @synthesize downloadTimeLine;
@property(retain, nonatomic) NSString *downloadSequenceId; // @synthesize downloadSequenceId;
@property(nonatomic) int albumManualSortId; // @synthesize albumManualSortId;
@property(nonatomic) int manualSortId; // @synthesize manualSortId;
@property(nonatomic) int soundTop; // @synthesize soundTop;
@property(nonatomic) int sortId; // @synthesize sortId;
@property(nonatomic) double cacheTime; // @synthesize cacheTime;
- (void).cxx_destruct;
- (_Bool)isEqualToSound:(id)arg1;
- (void)updateTrackBuyProperty:(id)arg1;
- (void)updateDownloadInfoFromDBItem:(id)arg1;
- (void)updatePropertiesFromAlbumSoundDictionary:(id)arg1;
- (void)checkDownloadSize:(id)arg1;
- (void)updateDownloadInfoFromDict:(id)arg1;
- (id)description;
- (void)copyPropertiesFrom:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

