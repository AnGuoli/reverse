//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class LOTAnimationView, UIImageView, UILabel;

@interface WBPhotoViewerBottomOperationCommentLikeButton : UIButton
{
    UIImageView *iconView;
    UILabel *countLabel;
    LOTAnimationView *_likeAnimationView;
}

@property(retain, nonatomic) LOTAnimationView *likeAnimationView; // @synthesize likeAnimationView=_likeAnimationView;
- (void).cxx_destruct;
- (double)rightSpace;
- (double)leftSpace;
- (void)showLikeAnimationIfNeeded;
- (void)setIsLike:(_Bool)arg1 animate:(_Bool)arg2;
- (void)setIsLike:(_Bool)arg1;
- (void)layoutSize;
- (void)fitSizeWithStr:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

