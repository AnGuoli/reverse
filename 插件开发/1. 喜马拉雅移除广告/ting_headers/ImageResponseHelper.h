//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ImageResponseHelper : NSObject
{
}

- (id)imageWithImage:(id)arg1 scaledToSize:(struct CGSize)arg2;
- (_Bool)string:(id)arg1 hasPrefix:(id)arg2 caseInsensitive:(_Bool)arg3;
- (id)resizeImage:(id)arg1 imgWidth:(id)arg2 imgHeight:(id)arg3 ignoreAspectRatio:(_Bool)arg4;
- (void)resizedImageDataWithParams:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end

