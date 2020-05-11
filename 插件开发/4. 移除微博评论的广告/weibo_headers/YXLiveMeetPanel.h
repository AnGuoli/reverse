//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSDictionary, NSString, UIButton, UIImageView, UILabel, YXButton, YXLiveBorderBGView, YXLiveUserView;

@interface YXLiveMeetPanel : UIView
{
    _Bool _isFromStory;
    UIButton *_confirmButton;
    YXLiveUserView *_userView;
    UIView *_baseView;
    UILabel *_nickNameLabel;
    UIImageView *_genderImageView;
    UILabel *_desc;
    YXButton *_confimButton;
    NSString *_yzbNickName;
    NSString *_btnChecked;
    NSDictionary *_jsonDict;
    NSString *_scheme;
    NSString *_layer_txt;
    NSString *_button_txt;
    long long _goldcoin;
    UIView *_yzbView;
    UIImageView *_yzbLogoImgView;
    UILabel *_yzbNickNameLbl;
    UIButton *_bgMask;
    YXLiveBorderBGView *_tipView;
    CDUnknownBlockType _confirmButtonDidSelectColsure;
    CDUnknownBlockType _dismissCompeletionHandlerColsure;
    CDUnknownBlockType _headButtonDidSelectColsure;
    double _baseViewHeight;
    UIButton *_priceButton;
    UILabel *_discountLabel;
    UILabel *_discountNumsLabel;
    UIView *_discountNumsLabelContainer;
    UIButton *_locationButton;
    UIView *_containerView;
    long long _perGoldcoin;
}

+ (void)hiddenFromView:(id)arg1;
+ (id)showInView:(id)arg1;
@property(nonatomic) long long perGoldcoin; // @synthesize perGoldcoin=_perGoldcoin;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UIButton *locationButton; // @synthesize locationButton=_locationButton;
@property(retain, nonatomic) UIView *discountNumsLabelContainer; // @synthesize discountNumsLabelContainer=_discountNumsLabelContainer;
@property(retain, nonatomic) UILabel *discountNumsLabel; // @synthesize discountNumsLabel=_discountNumsLabel;
@property(retain, nonatomic) UILabel *discountLabel; // @synthesize discountLabel=_discountLabel;
@property(retain, nonatomic) UIButton *priceButton; // @synthesize priceButton=_priceButton;
@property(nonatomic) double baseViewHeight; // @synthesize baseViewHeight=_baseViewHeight;
@property(copy, nonatomic) CDUnknownBlockType headButtonDidSelectColsure; // @synthesize headButtonDidSelectColsure=_headButtonDidSelectColsure;
@property(copy, nonatomic) CDUnknownBlockType dismissCompeletionHandlerColsure; // @synthesize dismissCompeletionHandlerColsure=_dismissCompeletionHandlerColsure;
@property(copy, nonatomic) CDUnknownBlockType confirmButtonDidSelectColsure; // @synthesize confirmButtonDidSelectColsure=_confirmButtonDidSelectColsure;
@property(retain, nonatomic) YXLiveBorderBGView *tipView; // @synthesize tipView=_tipView;
@property(retain, nonatomic) UIButton *bgMask; // @synthesize bgMask=_bgMask;
@property(retain, nonatomic) UILabel *yzbNickNameLbl; // @synthesize yzbNickNameLbl=_yzbNickNameLbl;
@property(retain, nonatomic) UIImageView *yzbLogoImgView; // @synthesize yzbLogoImgView=_yzbLogoImgView;
@property(retain, nonatomic) UIView *yzbView; // @synthesize yzbView=_yzbView;
@property(nonatomic) _Bool isFromStory; // @synthesize isFromStory=_isFromStory;
@property(nonatomic) long long goldcoin; // @synthesize goldcoin=_goldcoin;
@property(copy, nonatomic) NSString *button_txt; // @synthesize button_txt=_button_txt;
@property(copy, nonatomic) NSString *layer_txt; // @synthesize layer_txt=_layer_txt;
@property(copy, nonatomic) NSString *scheme; // @synthesize scheme=_scheme;
@property(retain, nonatomic) NSDictionary *jsonDict; // @synthesize jsonDict=_jsonDict;
@property(readonly, nonatomic) NSString *btnChecked; // @synthesize btnChecked=_btnChecked;
@property(retain, nonatomic) NSString *yzbNickName; // @synthesize yzbNickName=_yzbNickName;
@property(retain, nonatomic) YXButton *confimButton; // @synthesize confimButton=_confimButton;
@property(retain, nonatomic) UILabel *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) UIImageView *genderImageView; // @synthesize genderImageView=_genderImageView;
@property(retain, nonatomic) UILabel *nickNameLabel; // @synthesize nickNameLabel=_nickNameLabel;
@property(retain, nonatomic) UIView *baseView; // @synthesize baseView=_baseView;
@property(retain, nonatomic) YXLiveUserView *userView; // @synthesize userView=_userView;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
- (void).cxx_destruct;
- (void)showUpdateAlert;
- (void)btnPleaseFollowClick:(id)arg1;
- (void)loadUI;
- (void)headButtonDidTap:(id)arg1;
- (void)headButtonDidSelect:(CDUnknownBlockType)arg1;
- (void)popWithAnimate:(_Bool)arg1;
- (void)dismissWithAnimate:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)bgMaskDidTap:(id)arg1;
- (void)dismissCompeletionHandler:(CDUnknownBlockType)arg1;
- (void)confirmButtonDidSelect:(CDUnknownBlockType)arg1;
- (void)updateLiveModel:(id)arg1 meetInfo:(id)arg2;
- (void)dismissMeetPanel:(id)arg1;
- (id)init;

@end

