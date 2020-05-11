//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class LiveAccountView, LiveLikeView, LiveShopView, LiveStatusView, LiveUILiveDO, NSArray, NSString, UIImageView, UILabel;

@interface LiveBaseCard : UIView
{
    NSString *_cardType;
    NSString *_subType;
    NSString *_sceneType;
    LiveUILiveDO *_videoModel;
    UIImageView *_imageView;
    UIView *_maskView;
    LiveAccountView *_accountView;
    LiveShopView *_shopView;
    LiveStatusView *_liveStatusView;
    LiveLikeView *_liveLikeView;
    UILabel *_titleLabel;
    UIView *_topMaskView;
    UIView *_bottomMaskView;
    NSArray *_hiddenUIElements;
}

@property(retain, nonatomic) NSArray *hiddenUIElements; // @synthesize hiddenUIElements=_hiddenUIElements;
@property(retain, nonatomic) UIView *bottomMaskView; // @synthesize bottomMaskView=_bottomMaskView;
@property(retain, nonatomic) UIView *topMaskView; // @synthesize topMaskView=_topMaskView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) LiveLikeView *liveLikeView; // @synthesize liveLikeView=_liveLikeView;
@property(retain, nonatomic) LiveStatusView *liveStatusView; // @synthesize liveStatusView=_liveStatusView;
@property(retain, nonatomic) LiveShopView *shopView; // @synthesize shopView=_shopView;
@property(retain, nonatomic) LiveAccountView *accountView; // @synthesize accountView=_accountView;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) LiveUILiveDO *videoModel; // @synthesize videoModel=_videoModel;
@property(retain, nonatomic) NSString *sceneType; // @synthesize sceneType=_sceneType;
@property(retain, nonatomic) NSString *subType; // @synthesize subType=_subType;
@property(retain, nonatomic) NSString *cardType; // @synthesize cardType=_cardType;
- (void).cxx_destruct;
- (void)exposureEvent;
- (void)jumpToLivingRoom:(id)arg1;
- (void)didTapView;
- (void)addUserAction;
- (void)stopLikeAnimation;
- (void)startLikeAnimation;
- (_Bool)shouldHideUIElement:(id)arg1;
- (void)refreshWithModel:(id)arg1;
- (void)tblive_setImageWithUrl:(id)arg1 placeHolder:(id)arg2;
- (void)setupSubViews;
- (void)configParams;
- (id)initWithFrame:(struct CGRect)arg1 hiddenUIElements:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

