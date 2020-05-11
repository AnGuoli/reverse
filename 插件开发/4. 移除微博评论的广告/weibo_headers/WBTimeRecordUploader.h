//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSFileHandle, NSFileManager, NSHashTable, NSMutableArray, NSTimer;
@protocol OS_dispatch_queue;

@interface WBTimeRecordUploader : NSObject
{
    NSObject<OS_dispatch_queue> *tmpCachedRecordQueue;
    double _viewWillAppearTimeStamp;
    NSFileManager *_fileManager;
    NSFileHandle *_fileHandler;
    NSTimer *_recordTimer;
    NSTimer *_uploadTimer;
    NSMutableArray *_records;
    NSMutableArray *_new_records;
    NSHashTable *_recordsCache;
    NSHashTable *_enterBackgroundCache;
    long long _policy;
    NSMutableArray *_mblogExposureLogs;
    NSMutableArray *_tmpCachedRecords_internal;
}

@property(retain, nonatomic) NSMutableArray *tmpCachedRecords_internal; // @synthesize tmpCachedRecords_internal=_tmpCachedRecords_internal;
@property(retain, nonatomic) NSMutableArray *mblogExposureLogs; // @synthesize mblogExposureLogs=_mblogExposureLogs;
@property(nonatomic) long long policy; // @synthesize policy=_policy;
@property(retain, nonatomic) NSHashTable *enterBackgroundCache; // @synthesize enterBackgroundCache=_enterBackgroundCache;
@property(retain, nonatomic) NSHashTable *recordsCache; // @synthesize recordsCache=_recordsCache;
@property(retain, nonatomic) NSMutableArray *new_records; // @synthesize new_records=_new_records;
@property(retain, nonatomic) NSMutableArray *records; // @synthesize records=_records;
@property(retain, nonatomic) NSTimer *uploadTimer; // @synthesize uploadTimer=_uploadTimer;
@property(retain, nonatomic) NSTimer *recordTimer; // @synthesize recordTimer=_recordTimer;
@property(retain, nonatomic) NSFileHandle *fileHandler; // @synthesize fileHandler=_fileHandler;
@property(retain, nonatomic) NSFileManager *fileManager; // @synthesize fileManager=_fileManager;
@property(nonatomic) double viewWillAppearTimeStamp; // @synthesize viewWillAppearTimeStamp=_viewWillAppearTimeStamp;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *tmpCachedRecords;
- (void)addNewRecord:(id)arg1;
- (void)_addMblogExposureLog:(id)arg1;
- (void)addMblogExposureLog:(id)arg1;
- (_Bool)clearLogFile;
- (_Bool)createDirectoryIfNotExist:(id)arg1;
- (id)logFilePath;
- (id)getLogContent;
- (void)writeToFile:(id)arg1;
- (void)_uploadBatch;
- (void)uploadBatch;
- (void)_log:(id)arg1 belongToHome:(CDUnknownBlockType)arg2 belongToHot:(CDUnknownBlockType)arg3;
- (id)logDictFromLogJsonString:(id)arg1;
- (void)uploadNow;
- (void)upload;
- (void)_endRecordItem:(id)arg1 readTime:(double)arg2 inScene:(id)arg3 extraInfo:(id)arg4;
- (void)endRecordItem:(id)arg1 readTime:(double)arg2 inScene:(id)arg3 extraInfo:(id)arg4;
- (void)_startRecordItem:(id)arg1 readTime:(double)arg2 inScene:(id)arg3 extraInfo:(id)arg4;
- (void)startRecordItem:(id)arg1 readTime:(double)arg2 inScene:(id)arg3 extraInfo:(id)arg4;
- (void)_new_startRecordItem:(id)arg1 readTime:(double)arg2 inScene:(id)arg3 extraInfo:(id)arg4;
- (void)new_startRecordItem:(id)arg1 readTime:(double)arg2 inScene:(id)arg3 extraInfo:(id)arg4;
- (void)_endRecordItemWhenInterruptStart:(double)arg1 inScene:(id)arg2 dealloc:(_Bool)arg3;
- (void)endRecordItemWhenInterruptStart:(double)arg1 inScene:(id)arg2 dealloc:(_Bool)arg3;
- (void)_recordTimeStampWhenInterruptEnd:(double)arg1 inScene:(id)arg2;
- (void)recordTimeStampWhenInterruptEnd:(double)arg1 inScene:(id)arg2;
- (void)_endRecordItem:(id)arg1 showTime:(double)arg2 inScene:(id)arg3 extraInfo:(id)arg4;
- (void)endRecordItem:(id)arg1 showTime:(double)arg2 inScene:(id)arg3 extraInfo:(id)arg4;
- (void)_startRecordItem:(id)arg1 showTime:(double)arg2 inScene:(id)arg3 extraInfo:(id)arg4;
- (void)startRecordItem:(id)arg1 showTime:(double)arg2 inScene:(id)arg3 extraInfo:(id)arg4;
- (void)_removeRecordItem:(id)arg1 inScene:(id)arg2;
- (void)removeRecordItem:(id)arg1 inScene:(id)arg2;
- (id)initWithPolicy:(long long)arg1;

@end

