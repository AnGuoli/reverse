//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIImage, WBStaticImageCropperViewController;

@protocol WBStaticImageCropperViewControllerDelegate <NSObject>
- (void)imageCropperDidCancel:(WBStaticImageCropperViewController *)arg1;

@optional
- (void)subViewControllerDidFinishViewAction;
- (void)imageCropper:(WBStaticImageCropperViewController *)arg1 didFinished:(UIImage *)arg2 withCropRect:(struct CGRect)arg3;
- (void)imageCropper:(WBStaticImageCropperViewController *)arg1 didFinishedWithCropRect:(struct CGRect)arg2;
@end

