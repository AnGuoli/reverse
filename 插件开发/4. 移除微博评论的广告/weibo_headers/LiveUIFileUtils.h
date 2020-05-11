//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface LiveUIFileUtils : NSObject
{
}

+ (_Bool)unzip:(id)arg1 toPath:(id)arg2 error:(id *)arg3;
+ (unsigned long long)fileSizeForPath:(id)arg1;
+ (void)createFolder:(id)arg1;
+ (id)getLikeImgsPathWithURL:(id)arg1;
+ (id)getStarsImgsPathWithAccountId:(id)arg1;
+ (id)getLikeAccountPath:(id)arg1;
+ (id)getLikeImgsPath;
+ (id)getCachesTaoLivePath;
+ (id)getDocumentTaoLivePath;
+ (id)getLikeZipFilePath:(id)arg1 accountId:(id)arg2;
+ (id)getTempPath:(id)arg1;
+ (id)getDocumentPath;
+ (id)getCachesPath;
+ (id)mainBundle;

@end

