//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBLogDBStorageModel.h"

@class NSNumber, NSString;

@interface LogAnalysisSDKRecordModel : WBLogDBStorageModel
{
    NSString *_modeltype;
    NSNumber *_timestamp;
    NSString *_recordtype;
    NSString *_uid;
}

+ (id)createSqlCmd;
+ (id)_generated_database_path;
+ (void)initializeFields;
+ (id)tableName;
+ (id)dbManager;
+ (id)modelWithRecordType:(id)arg1 modelType:(id)arg2 time:(id)arg3 uid:(id)arg4;
@property(retain) NSString *uid; // @synthesize uid=_uid;
@property(retain) NSString *recordtype; // @synthesize recordtype=_recordtype;
@property(retain) NSNumber *timestamp; // @synthesize timestamp=_timestamp;
@property(retain) NSString *modeltype; // @synthesize modeltype=_modeltype;
- (void).cxx_destruct;
- (id)initWithRecordType:(id)arg1 modelType:(id)arg2 time:(id)arg3 uid:(id)arg4;

@end

