//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class CAGradientLayer, UIImageView;

@interface WBPhotoEditorBorderCollectionViewCell : UICollectionViewCell
{
    CAGradientLayer *_selectBack;
    _Bool _isEmpty;
    _Bool _cellSelected;
    UIImageView *_borderImageView;
}

@property(nonatomic) _Bool cellSelected; // @synthesize cellSelected=_cellSelected;
@property(nonatomic) _Bool isEmpty; // @synthesize isEmpty=_isEmpty;
@property(retain, nonatomic) UIImageView *borderImageView; // @synthesize borderImageView=_borderImageView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

