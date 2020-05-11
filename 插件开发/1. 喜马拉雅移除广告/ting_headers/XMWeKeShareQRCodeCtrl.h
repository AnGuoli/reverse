//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMWeKeBaseCtrl.h"

@class NSString, UILabel, UIView, XMWeKeLessonBase, XMWebImageButton, XMWebImageView;

@interface XMWeKeShareQRCodeCtrl : XMWeKeBaseCtrl
{
    _Bool _isShowingQRCode;
    XMWeKeLessonBase *_lesson;
    CDUnknownBlockType _shareCallback;
    UILabel *_topLabel;
    UILabel *_bottomLabel;
    XMWebImageView *_middleView;
    XMWebImageView *_coverImageView;
    UIView *_tempBackView;
    XMWebImageButton *_tempBtn1;
    XMWebImageButton *_tempBtn2;
    UIView *_bottomView;
    NSString *_inviteCardUrl;
    NSString *_inviteDesc;
    NSString *_lessonCover;
    NSString *_qrCodeUrl;
}

@property(nonatomic) _Bool isShowingQRCode; // @synthesize isShowingQRCode=_isShowingQRCode;
@property(retain, nonatomic) NSString *qrCodeUrl; // @synthesize qrCodeUrl=_qrCodeUrl;
@property(retain, nonatomic) NSString *lessonCover; // @synthesize lessonCover=_lessonCover;
@property(retain, nonatomic) NSString *inviteDesc; // @synthesize inviteDesc=_inviteDesc;
@property(retain, nonatomic) NSString *inviteCardUrl; // @synthesize inviteCardUrl=_inviteCardUrl;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) XMWebImageButton *tempBtn2; // @synthesize tempBtn2=_tempBtn2;
@property(retain, nonatomic) XMWebImageButton *tempBtn1; // @synthesize tempBtn1=_tempBtn1;
@property(retain, nonatomic) UIView *tempBackView; // @synthesize tempBackView=_tempBackView;
@property(retain, nonatomic) XMWebImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
@property(retain, nonatomic) XMWebImageView *middleView; // @synthesize middleView=_middleView;
@property(retain, nonatomic) UILabel *bottomLabel; // @synthesize bottomLabel=_bottomLabel;
@property(retain, nonatomic) UILabel *topLabel; // @synthesize topLabel=_topLabel;
@property(copy, nonatomic) CDUnknownBlockType shareCallback; // @synthesize shareCallback=_shareCallback;
@property(retain, nonatomic) XMWeKeLessonBase *lesson; // @synthesize lesson=_lesson;
- (void).cxx_destruct;
- (void)onTemplateBtnClick:(id)arg1;
- (void)requestLessonQRCodeWithLesson:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)imageFromUrlString:(id)arg1;
- (void)requestQRCodeImage;
- (void)clickRightButton:(id)arg1;
- (void)image:(id)arg1 didFinishSavingWithError:(id)arg2 contextInfo:(void *)arg3;
- (void)saveImageToLocal:(id)arg1;
- (void)updateQRCodeView;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end

