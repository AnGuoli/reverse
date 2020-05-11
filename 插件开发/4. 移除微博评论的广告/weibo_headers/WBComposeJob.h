//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBQueueJob.h"

@class NSDictionary, NSMutableDictionary, NSString, WBStatus;
@protocol WBQueueArticle;

@interface WBComposeJob : WBQueueJob
{
    _Bool _locationHasOffset;
    float _longitude;
    float _latitude;
    NSMutableDictionary *_attachmentTypeToAttachmentMap;
    NSString *_content;
    NSString *_contentForTimeline;
    NSString *_tonick;
    NSString *_statusID;
    NSString *_statusV4ID;
    WBStatus *_status;
    id <WBQueueArticle> _article;
}

+ (void)registerDefaultArticleClass:(Class)arg1;
+ (id)localErrorWithReason:(long long)arg1;
@property(retain, nonatomic) id <WBQueueArticle> article; // @synthesize article=_article;
@property(retain, nonatomic) WBStatus *status; // @synthesize status=_status;
@property(retain, nonatomic) NSString *statusV4ID; // @synthesize statusV4ID=_statusV4ID;
@property(retain, nonatomic) NSString *statusID; // @synthesize statusID=_statusID;
@property(retain, nonatomic) NSString *tonick; // @synthesize tonick=_tonick;
@property(retain, nonatomic) NSString *contentForTimeline; // @synthesize contentForTimeline=_contentForTimeline;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(nonatomic) _Bool locationHasOffset; // @synthesize locationHasOffset=_locationHasOffset;
@property(nonatomic) float latitude; // @synthesize latitude=_latitude;
@property(nonatomic) float longitude; // @synthesize longitude=_longitude;
- (void).cxx_destruct;
- (void)queueOperation:(id)arg1 didFailureWithError:(id)arg2;
- (void)queueOperation:(id)arg1 didFinishWithResult:(id)arg2;
- (_Bool)deleteFromDB:(id)arg1;
- (unsigned long long)contentIndexForAttachmentIdentifier:(id)arg1;
- (void)setContentIndex:(unsigned long long)arg1 forAttachmentIdentifier:(id)arg2;
@property(readonly, nonatomic) NSDictionary *attachmentIdentifierToIndexMap;
- (void)unbindAttachmentForType:(id)arg1;
- (void)bindAttachment:(id)arg1 withType:(id)arg2;
@property(readonly, nonatomic) NSMutableDictionary *attachmentTypeToAttachmentMap; // @synthesize attachmentTypeToAttachmentMap=_attachmentTypeToAttachmentMap;
@property(readonly, nonatomic) NSDictionary *attachmentTypeToIdentifierMap;
@property(nonatomic) unsigned long long articleIndex;
- (Class)articleClass;
@property(retain, nonatomic) NSString *clientUniqueID;
- (void)loadFromRS:(id)arg1;
- (void)increaseFailTimes;
- (unsigned long long)failTimes;
- (_Bool)hasCoordinateLocation;
- (void)jobSendCancel;
- (id)init;
- (void)dealloc;

@end

