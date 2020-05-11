//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBViewController.h"

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"
#import "WBComposeElementDelegate-Protocol.h"
#import "WBQueueJobDelegate-Protocol.h"

@class CAGradientLayer, NSMutableArray, NSString, UIButton, UILabel, UIScrollView, UITextField, UIView, WBComposeImagesElement, WBComposeImagesElementView, WBComposeTextElement, WBComposeTextElementView, WBComposeTitleTextElement, WBComposeTitleTextElementView, WBProgressHUD, WBSendProductJob, WBShopDivideCommissionView, WBShopProduct, WBShopStepTipView, WBShopTopLinkView;

@interface WBShopEditProductViewController : WBViewController <WBComposeElementDelegate, UIScrollViewDelegate, UITextFieldDelegate, WBQueueJobDelegate, UIGestureRecognizerDelegate>
{
    double _keyboardHeight;
    _Bool _isProductLoading;
    WBShopProduct *_urlProduct;
    NSString *_fromPic;
    NSMutableArray *_selectedProductFromPic;
    UIButton *_publishBtn;
    CAGradientLayer *_gradientLayer;
    WBShopTopLinkView *_linkView;
    UIScrollView *_containerView;
    UIView *_imageElementBgView;
    WBComposeTitleTextElement *_titleElement;
    WBComposeTextElement *_textElement;
    WBComposeImagesElement *_imagesElement;
    WBComposeImagesElementView *_imagesElementView;
    WBComposeTextElementView *_textElementView;
    WBComposeTitleTextElementView *_titleElementView;
    UIView *_priceView;
    UITextField *_priceField;
    WBProgressHUD *_progress;
    UILabel *_characterCountLabel;
    WBShopStepTipView *_tipView;
    WBShopDivideCommissionView *_divideCommissonView;
    UILabel *_divideCommissonLabel;
    long long _imageDownloadCount;
    unsigned long long _loadingImageCount;
    unsigned long long _loadingFailedImageCount;
    WBSendProductJob *_productJob;
}

@property(retain, nonatomic) WBSendProductJob *productJob; // @synthesize productJob=_productJob;
@property(nonatomic) _Bool isProductLoading; // @synthesize isProductLoading=_isProductLoading;
@property(nonatomic) unsigned long long loadingFailedImageCount; // @synthesize loadingFailedImageCount=_loadingFailedImageCount;
@property(nonatomic) unsigned long long loadingImageCount; // @synthesize loadingImageCount=_loadingImageCount;
@property(nonatomic) long long imageDownloadCount; // @synthesize imageDownloadCount=_imageDownloadCount;
@property(retain, nonatomic) UILabel *divideCommissonLabel; // @synthesize divideCommissonLabel=_divideCommissonLabel;
@property(retain, nonatomic) WBShopDivideCommissionView *divideCommissonView; // @synthesize divideCommissonView=_divideCommissonView;
@property(retain, nonatomic) WBShopStepTipView *tipView; // @synthesize tipView=_tipView;
@property(retain, nonatomic) UILabel *characterCountLabel; // @synthesize characterCountLabel=_characterCountLabel;
@property(retain, nonatomic) WBProgressHUD *progress; // @synthesize progress=_progress;
@property(retain, nonatomic) UITextField *priceField; // @synthesize priceField=_priceField;
@property(retain, nonatomic) UIView *priceView; // @synthesize priceView=_priceView;
@property(retain, nonatomic) WBComposeTitleTextElementView *titleElementView; // @synthesize titleElementView=_titleElementView;
@property(retain, nonatomic) WBComposeTextElementView *textElementView; // @synthesize textElementView=_textElementView;
@property(retain, nonatomic) WBComposeImagesElementView *imagesElementView; // @synthesize imagesElementView=_imagesElementView;
@property(retain, nonatomic) WBComposeImagesElement *imagesElement; // @synthesize imagesElement=_imagesElement;
@property(retain, nonatomic) WBComposeTextElement *textElement; // @synthesize textElement=_textElement;
@property(retain, nonatomic) WBComposeTitleTextElement *titleElement; // @synthesize titleElement=_titleElement;
@property(retain, nonatomic) UIView *imageElementBgView; // @synthesize imageElementBgView=_imageElementBgView;
@property(retain, nonatomic) UIScrollView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) WBShopTopLinkView *linkView; // @synthesize linkView=_linkView;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) UIButton *publishBtn; // @synthesize publishBtn=_publishBtn;
@property(retain, nonatomic) NSMutableArray *selectedProductFromPic; // @synthesize selectedProductFromPic=_selectedProductFromPic;
@property(copy, nonatomic) NSString *fromPic; // @synthesize fromPic=_fromPic;
@property(retain, nonatomic) WBShopProduct *urlProduct; // @synthesize urlProduct=_urlProduct;
- (void).cxx_destruct;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)checkFinish:(long long)arg1;
- (void)imageDownloadComplete:(id)arg1 count:(long long)arg2 imageUrl:(id)arg3;
- (void)downloadImages:(id)arg1;
- (void)loadProduct;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textFieldShouldEndEditing:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)orientationChanged:(id)arg1;
- (void)keyboardFrameWillChange:(id)arg1;
- (void)keyboardDidChangeFrameNotification:(id)arg1;
- (void)keyboardDidShowNotification:(id)arg1;
- (void)keyboardWillHideNotification:(id)arg1;
- (void)keyboardWillShowNotification:(id)arg1;
- (void)updateCharacterCountLabel:(id)arg1;
- (id)baseViewControllerForComposeElement:(id)arg1;
- (id)composeElement:(id)arg1 composeValueForKey:(id)arg2;
- (void)changeContainerViewOffset;
- (void)composeElementContentDidChanged:(id)arg1;
- (void)jobSendFinished:(id)arg1;
- (void)setEditViewStatusWithEditStatus:(_Bool)arg1;
- (void)tapContainerView;
- (void)sendButtonPressed;
- (_Bool)checkCanSend;
- (void)showEditTips:(id)arg1 duration:(double)arg2;
- (void)setPublishBtnStatus;
- (_Bool)hadEdit;
- (void)cancelAction:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

