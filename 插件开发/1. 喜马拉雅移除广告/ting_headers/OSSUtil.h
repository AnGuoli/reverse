//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface OSSUtil : NSObject
{
}

+ (id)detemineMimeTypeForFilePath:(id)arg1 uploadName:(id)arg2;
+ (id)getRelativePath:(id)arg1;
+ (id)base64ForData:(char *)arg1 length:(int)arg2;
+ (id)fileMD5String:(id)arg1;
+ (id)dataMD5String:(id)arg1;
+ (id)convertMd5Bytes2String:(char *)arg1;
+ (char *)fileMD5:(id)arg1;
+ (char *)dataMD5:(id)arg1;
+ (id)base64Md5ForFileURL:(id)arg1;
+ (id)base64Md5ForFilePath:(id)arg1;
+ (id)base64Md5ForData:(id)arg1;
+ (_Bool)isOssOriginBucketHost:(id)arg1;
+ (_Bool)isNetworkDelegateState;
+ (id)getIpByHost:(id)arg1;
+ (id)constructHttpBodyForCreateBucketWithLocation:(id)arg1;
+ (id)constructHttpBodyFromPartInfos:(id)arg1;
+ (id)encodeURL:(id)arg1;
+ (id)calBase64WithData:(char *)arg1;
+ (id)calBase64Sha1WithData:(id)arg1 withSecret:(id)arg2;

@end

