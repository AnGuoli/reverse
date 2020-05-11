//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RecyclableScrollViewCell.h"

#import "WBCopyAndShareTextContentView-Protocol.h"

@class NSString, UILabel, UIView, WBArticleImageView, WBArticlePragraphModel, WBTimelinePicture;
@protocol WBCopyAndShardContentViewDelegate;

@interface ArticleImageCell : RecyclableScrollViewCell <WBCopyAndShareTextContentView>
{
    WBArticlePragraphModel *_pragraphModel;
    id <WBCopyAndShardContentViewDelegate> wbCopyAndShareContentDelegate;
    WBArticleImageView *_articleImageView;
    UILabel *_articleAltLabel;
    WBTimelinePicture *_timelinePicture;
    UIView *_selectionView;
    UIView *_gestureRecognizerView;
}

+ (id)sharedRenderDrawingContextQueue;
+ (void)_renderDrawingContext:(id)arg1 timelinePicture:(id)arg2 imageSize:(struct CGSize)arg3 altContent:(id)arg4 withContentWidth:(unsigned long long)arg5;
+ (void)renderDrawingContext:(id)arg1 withContentWidth:(unsigned long long)arg2;
@property(retain, nonatomic) UIView *gestureRecognizerView; // @synthesize gestureRecognizerView=_gestureRecognizerView;
@property(retain, nonatomic) UIView *selectionView; // @synthesize selectionView=_selectionView;
@property(retain, nonatomic) WBTimelinePicture *timelinePicture; // @synthesize timelinePicture=_timelinePicture;
@property(retain, nonatomic) UILabel *articleAltLabel; // @synthesize articleAltLabel=_articleAltLabel;
@property(retain, nonatomic) WBArticleImageView *articleImageView; // @synthesize articleImageView=_articleImageView;
@property(nonatomic) __weak id <WBCopyAndShardContentViewDelegate> wbCopyAndShareContentDelegate; // @synthesize wbCopyAndShareContentDelegate;
- (id)pragraphModel;
- (void).cxx_destruct;
- (void)imagePressed:(id)arg1;
- (void)loadAltContent:(id)arg1;
- (void)updateSubviewsByAltContent:(id)arg1 imageSize:(struct CGSize)arg2 shouldReRenderDrawingContext:(_Bool)arg3;
- (void)loadPreLocalImageWithSrc:(id)arg1 alt:(id)arg2;
- (void)loadGifImage;
- (void)setPragraphModel:(id)arg1;
- (void)singleTap:(id)arg1;
- (void)longPress:(id)arg1;
@property(readonly, nonatomic) NSString *textContent;
@property(readonly, nonatomic) struct CGRect menuRect;
@property(nonatomic) _Bool wbCopyAndShareContentSelected;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

