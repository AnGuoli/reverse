//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBModelObject.h"

@class NSData, WBMediaUploadContentSource;

@interface WBMediaUploadChunkDetail : WBModelObject
{
    WBMediaUploadContentSource *_contentSource;
    long long _contentType;
    double _creationTime;
    unsigned long long _indexInTrack;
    unsigned long long _totalCount;
    unsigned long long _uploadIndex;
    struct _NSRange _contentRange;
    CDStruct_e83c9415 _mediaTimeRange;
}

@property(readonly, nonatomic) unsigned long long uploadIndex; // @synthesize uploadIndex=_uploadIndex;
@property(readonly, nonatomic) unsigned long long totalCount; // @synthesize totalCount=_totalCount;
@property(readonly, nonatomic) unsigned long long indexInTrack; // @synthesize indexInTrack=_indexInTrack;
@property(readonly, nonatomic) double creationTime; // @synthesize creationTime=_creationTime;
@property(readonly, nonatomic) CDStruct_e83c9415 mediaTimeRange; // @synthesize mediaTimeRange=_mediaTimeRange;
@property(readonly, nonatomic) long long contentType; // @synthesize contentType=_contentType;
@property(readonly, nonatomic) struct _NSRange contentRange; // @synthesize contentRange=_contentRange;
@property(readonly, nonatomic) WBMediaUploadContentSource *contentSource; // @synthesize contentSource=_contentSource;
- (void).cxx_destruct;
- (void)updateUploadIndexIfNeed:(unsigned long long)arg1;
- (void)updateTotalCount:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentSource:(id)arg1 contentType:(long long)arg2 contentRange:(struct _NSRange)arg3 timeRange:(CDStruct_e83c9415)arg4 indexInTrack:(unsigned long long)arg5;
- (id)initWithContentSource:(id)arg1 contentType:(long long)arg2 contentRange:(struct _NSRange)arg3;
@property(readonly, copy, nonatomic) NSData *contentData;
@property(readonly, nonatomic) struct _NSRange availableContentRange;

@end

