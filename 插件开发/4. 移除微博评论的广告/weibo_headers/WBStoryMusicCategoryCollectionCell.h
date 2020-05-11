//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UIImageView, UILabel, WBStoryMusicCategoryFoldView, WBStoryMusicCategoryItem;

@interface WBStoryMusicCategoryCollectionCell : UICollectionViewCell
{
    WBStoryMusicCategoryItem *_musicCategoryModel;
    UIImageView *_imageView;
    UILabel *_textLabel;
    WBStoryMusicCategoryFoldView *_foldView;
}

+ (double)getCellHeight;
+ (double)getCellWidth;
@property(retain, nonatomic) WBStoryMusicCategoryFoldView *foldView; // @synthesize foldView=_foldView;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) WBStoryMusicCategoryItem *musicCategoryModel; // @synthesize musicCategoryModel=_musicCategoryModel;
- (void).cxx_destruct;
- (void)setAnimationInWindow;
- (void)updateFoldWithAnmated:(_Bool)arg1;
- (void)updateFoldStatus;
- (void)initViews;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

