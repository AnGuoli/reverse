//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MMCoreImageUtility : NSObject
{
}

+ (id)scaleImage:(id)arg1 inSize:(struct CGSize)arg2 cropMode:(int)arg3;
+ (id)scaleImage:(id)arg1 inSize:(struct CGSize)arg2 checkRatio:(double)arg3 targetRatio:(double)arg4 cropMode:(int)arg5;
+ (id)scaleImage:(id)arg1 inSize:(struct CGSize)arg2 cropRect:(struct CGRect)arg3;
+ (id)scaleImage:(id)arg1 inSize:(struct CGSize)arg2;
+ (id)scaleImage:(id)arg1 inSize:(struct CGSize)arg2 crop:(_Bool)arg3 cropRect:(struct CGRect)arg4;

@end

