//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "OSSRequest.h"

@class NSData, NSDictionary, NSString, NSURL;

@interface OSSAppendObjectRequest : OSSRequest
{
    NSString *_bucketName;
    NSString *_objectKey;
    long long _appendPosition;
    NSData *_uploadingData;
    NSURL *_uploadingFileURL;
    NSString *_contentType;
    NSString *_contentMd5;
    NSString *_contentDisposition;
    NSString *_contentEncoding;
    NSString *_cacheControl;
    NSString *_expires;
    NSDictionary *_objectMeta;
    CDUnknownBlockType _uploadProgress;
}

@property(copy, nonatomic) CDUnknownBlockType uploadProgress; // @synthesize uploadProgress=_uploadProgress;
@property(retain, nonatomic) NSDictionary *objectMeta; // @synthesize objectMeta=_objectMeta;
@property(retain, nonatomic) NSString *expires; // @synthesize expires=_expires;
@property(retain, nonatomic) NSString *cacheControl; // @synthesize cacheControl=_cacheControl;
@property(retain, nonatomic) NSString *contentEncoding; // @synthesize contentEncoding=_contentEncoding;
@property(retain, nonatomic) NSString *contentDisposition; // @synthesize contentDisposition=_contentDisposition;
@property(retain, nonatomic) NSString *contentMd5; // @synthesize contentMd5=_contentMd5;
@property(retain, nonatomic) NSString *contentType; // @synthesize contentType=_contentType;
@property(retain, nonatomic) NSURL *uploadingFileURL; // @synthesize uploadingFileURL=_uploadingFileURL;
@property(retain, nonatomic) NSData *uploadingData; // @synthesize uploadingData=_uploadingData;
@property(nonatomic) long long appendPosition; // @synthesize appendPosition=_appendPosition;
@property(retain, nonatomic) NSString *objectKey; // @synthesize objectKey=_objectKey;
@property(retain, nonatomic) NSString *bucketName; // @synthesize bucketName=_bucketName;
- (void).cxx_destruct;
- (id)init;

@end

