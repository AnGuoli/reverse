//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UIImageView, UILabel, UIView;

@interface XMDeviceCollectionViewCell : UICollectionViewCell
{
    UIView *_rightLine;
    UIView *_bottomLine;
    UILabel *_label;
    UIImageView *_imageView;
}

@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)customInit;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

