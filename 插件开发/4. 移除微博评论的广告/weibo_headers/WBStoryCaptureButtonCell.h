//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UIImageView, WBStoryCameraModeModel;

@interface WBStoryCaptureButtonCell : UICollectionViewCell
{
    _Bool _recording;
    WBStoryCameraModeModel *_cameraModeModel;
    UIImageView *_imageView;
}

@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) WBStoryCameraModeModel *cameraModeModel; // @synthesize cameraModeModel=_cameraModeModel;
@property(nonatomic) _Bool recording; // @synthesize recording=_recording;
- (void).cxx_destruct;
- (void)updateImageView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

