//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WBQueueJobDelegate-Protocol.h"

@class NSArray, NSDictionary, NSMutableDictionary, NSString, WBImageEditorCacheManager, WBMediaUploadJob;
@protocol OS_dispatch_queue, WBComposeAttachmentUploadDelegate;

@interface WBComposeAttachment : NSObject <WBQueueJobDelegate>
{
    id <WBComposeAttachmentUploadDelegate> _uploadDelegate;
    struct {
        unsigned int contentsChanged:1;
    } _flags;
    NSObject<OS_dispatch_queue> *_ioQueue;
    _Bool _draft;
    NSString *_identifier;
    unsigned long long _source;
    NSString *_key;
    NSArray *_resources;
    NSString *_serverPlaceholderName;
    NSString *_displayTitle;
    NSString *_displayIconName;
    NSDictionary *_userInfo;
    WBImageEditorCacheManager *_imageCacheRecoveryManager;
    WBMediaUploadJob *_imageUploadJob;
    NSMutableDictionary *_attachmentProperties;
}

+ (id)draftAttachmentFromDatabaseWithKey:(id)arg1;
+ (id)attachmentFromDatabaseWithIdentifier:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *attachmentProperties; // @synthesize attachmentProperties=_attachmentProperties;
@property(retain, nonatomic) WBMediaUploadJob *imageUploadJob; // @synthesize imageUploadJob=_imageUploadJob;
@property(retain, nonatomic) WBImageEditorCacheManager *imageCacheRecoveryManager; // @synthesize imageCacheRecoveryManager=_imageCacheRecoveryManager;
@property(retain, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic, getter=isDraft) _Bool draft; // @synthesize draft=_draft;
@property(copy, nonatomic) NSString *displayIconName; // @synthesize displayIconName=_displayIconName;
@property(copy, nonatomic) NSString *displayTitle; // @synthesize displayTitle=_displayTitle;
@property(copy, nonatomic) NSString *serverPlaceholderName; // @synthesize serverPlaceholderName=_serverPlaceholderName;
@property(copy, nonatomic) NSArray *resources; // @synthesize resources=_resources;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
@property(nonatomic) unsigned long long source; // @synthesize source=_source;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)initWithUUIDIdentifier;
- (id)initWithIdentifier:(id)arg1;
- (id)init;
- (id)attributedStringForDraftDisplayingForIndex:(unsigned long long)arg1 inText:(id)arg2;
- (void)_cleanData;
- (void)deleteFromDatabase;
- (void)convertFromDraftToNormalAndSaveToDatabaseWithCompletion:(CDUnknownBlockType)arg1;
- (void)saveToDatabaseWithCompletion:(CDUnknownBlockType)arg1;
- (void)loadFromProperties:(id)arg1;
- (id)loadPropertiesFromFMResultSet:(id)arg1;
@property(readonly, nonatomic) NSString *resourceDirectory;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *resourceIOQueue;
- (void)queryQueueJobDetailLogsWithCompletion:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSArray *imageCachesToUpload;
- (void)cleanDataForResources;
@property(readonly, nonatomic) NSDictionary *serverParametersForResources;
- (void)save;
@property(readonly, nonatomic, getter=isUploadCompleted) _Bool uploadCompleted;
- (void)uploadIfNeeded;
@property(nonatomic) __weak id <WBComposeAttachmentUploadDelegate> uploadDelegate;
- (void)queueJob:(id)arg1 operationFinished:(id)arg2;
- (void)jobSendFinished:(id)arg1;
@property(retain, nonatomic) NSDictionary *imageUploadInfos;
@property(retain, nonatomic) NSDictionary *pidMap;
@property(readonly, nonatomic) NSArray *pendingUploadImageCaches;
- (void)_doUpload;
- (void)addProperty:(id)arg1 forKey:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

