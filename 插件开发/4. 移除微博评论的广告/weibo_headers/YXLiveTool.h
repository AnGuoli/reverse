//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YXBaseTool.h"

@interface YXLiveTool : YXBaseTool
{
}

+ (void)yyClearCacheWithBlock:(CDUnknownBlockType)arg1;
+ (long long)yyGetCacheCount;
+ (long long)yyGetCacheSize;
+ (void)yyDownloadImageAndCacheWithUrl:(id)arg1 progress:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)yyDownloadImageWithUrl:(id)arg1 progress:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)yyDownloadImageWithUrl:(id)arg1;
+ (void)yyRemoveImageCacheWithUrl:(id)arg1;
+ (void)yyGetImageCacheWithUrl:(id)arg1 block:(CDUnknownBlockType)arg2;
+ (void)yySetButton:(id)arg1 imageWithUrl:(id)arg2 state:(unsigned long long)arg3 defaultImage:(id)arg4;
+ (void)yySetButton:(id)arg1 backgroundImageWithUrl:(id)arg2 state:(unsigned long long)arg3 defaultImage:(id)arg4;
+ (void)yySetImageView:(id)arg1 url:(id)arg2 defaultImage:(id)arg3 progress:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
+ (void)yySetImageView:(id)arg1 url:(id)arg2 defaultImage:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)yySetImageView:(id)arg1 url:(id)arg2 defaultImage:(id)arg3 block:(CDUnknownBlockType)arg4;
+ (void)yySetImageViewFaded:(id)arg1 url:(id)arg2 defaultImage:(id)arg3;
+ (void)yySetImageView:(id)arg1 urlId:(id)arg2 defaultImage:(id)arg3;
+ (void)yySetImageView:(id)arg1 url:(id)arg2 defaultImage:(id)arg3;
+ (id)yyImageFromDiskCacheForKey:(id)arg1;
+ (id)getSDURL:(id)arg1;
+ (id)wb_getInfo:(id)arg1;
+ (void)wb_removeInfo:(id)arg1;
+ (void)wb_setInfo:(id)arg1 withKey:(id)arg2;
+ (id)loadingInfiniteScrollingView;
+ (id)starAndStentConvertTime:(double)arg1 withScid:(id)arg2;
+ (id)convertTime:(double)arg1;
+ (id)getDistanceNumWith:(long long)arg1;
+ (id)getFloorNumWith:(long long)arg1;
+ (id)getNumWith:(long long)arg1;
+ (id)getZanNumWith:(long long)arg1;
+ (id)getImage:(id)arg1;
+ (void)hideNativeLoadingInView:(id)arg1;
+ (id)showNativeLoadingInView:(id)arg1;

@end

