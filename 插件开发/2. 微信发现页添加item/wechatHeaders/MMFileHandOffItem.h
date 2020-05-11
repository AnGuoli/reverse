//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMHandOffItem.h"

#import "NSCopying-Protocol.h"
#import "YYModel-Protocol.h"

@class CMessageWrap, NSString;

@interface MMFileHandOffItem : MMHandOffItem <YYModel, NSCopying>
{
    unsigned int _sdkversion;
    NSString *_filetype;
    NSString *_title;
    NSString *_md5;
    unsigned long long _size;
    long long _source;
    long long _id;
    NSString *_extid;
    NSString *_cdnurl;
    NSString *_aeskey;
    NSString *_authkey;
    long long _filestatus;
    NSString *_appid;
    NSString *_mediaid;
    CMessageWrap *_messageWrap;
}

+ (id)modelPropertyBlacklist;
@property(retain, nonatomic) CMessageWrap *messageWrap; // @synthesize messageWrap=_messageWrap;
@property(copy, nonatomic) NSString *mediaid; // @synthesize mediaid=_mediaid;
@property(nonatomic) unsigned int sdkversion; // @synthesize sdkversion=_sdkversion;
@property(copy, nonatomic) NSString *appid; // @synthesize appid=_appid;
@property(nonatomic) long long filestatus; // @synthesize filestatus=_filestatus;
@property(copy, nonatomic) NSString *authkey; // @synthesize authkey=_authkey;
@property(copy, nonatomic) NSString *aeskey; // @synthesize aeskey=_aeskey;
@property(copy, nonatomic) NSString *cdnurl; // @synthesize cdnurl=_cdnurl;
@property(copy, nonatomic) NSString *extid; // @synthesize extid=_extid;
@property(nonatomic) long long id; // @synthesize id=_id;
@property(nonatomic) long long source; // @synthesize source=_source;
@property(nonatomic) unsigned long long size; // @synthesize size=_size;
@property(copy, nonatomic) NSString *md5; // @synthesize md5=_md5;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *filetype; // @synthesize filetype=_filetype;
- (void).cxx_destruct;
- (id)getRecordClientMsgID;
- (id)getFilePath;
- (_Bool)canUpload;
- (id)getMessageWrap;
- (id)getChatName;
- (id)initFromMinimizeTaskData:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

