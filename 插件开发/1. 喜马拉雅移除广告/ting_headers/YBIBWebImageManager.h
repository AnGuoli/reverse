//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface YBIBWebImageManager : NSObject
{
}

+ (void)queryCacheOperationForKey:(id)arg1 completed:(CDUnknownBlockType)arg2;
+ (void)storeImage:(id)arg1 imageData:(id)arg2 forKey:(id)arg3 toDisk:(_Bool)arg4;
+ (void)cancelTaskWithDownloadToken:(id)arg1;
+ (id)downloadImageWithURL:(id)arg1 progress:(CDUnknownBlockType)arg2 success:(CDUnknownBlockType)arg3 failed:(CDUnknownBlockType)arg4;
+ (void)restoreOutsideConfiguration;
+ (void)storeOutsideConfiguration;

@end

