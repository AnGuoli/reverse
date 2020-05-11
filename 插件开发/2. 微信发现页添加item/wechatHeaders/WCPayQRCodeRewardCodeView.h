//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

#import "UITextFieldDelegate-Protocol.h"

@class NSString, UIButton, UIImageView, UITextField, WCPayControlData;
@protocol WCPayQRCodeRewardCodeViewDelegate;

@interface WCPayQRCodeRewardCodeView : MMUIView <UITextFieldDelegate>
{
    id <WCPayQRCodeRewardCodeViewDelegate> _delegate;
    WCPayControlData *_controlData;
    long long _currentCodeDisplayMode;
    NSString *_inputContent;
    UIImageView *_codeImageView;
    UIImageView *_headImgView;
    UITextField *_textField;
    UIButton *_photoHitButton;
}

@property(retain, nonatomic) UIButton *photoHitButton; // @synthesize photoHitButton=_photoHitButton;
@property(retain, nonatomic) UITextField *textField; // @synthesize textField=_textField;
@property(retain, nonatomic) UIImageView *headImgView; // @synthesize headImgView=_headImgView;
@property(retain, nonatomic) UIImageView *codeImageView; // @synthesize codeImageView=_codeImageView;
@property(retain, nonatomic) NSString *inputContent; // @synthesize inputContent=_inputContent;
@property(nonatomic) long long currentCodeDisplayMode; // @synthesize currentCodeDisplayMode=_currentCodeDisplayMode;
@property(retain, nonatomic) WCPayControlData *controlData; // @synthesize controlData=_controlData;
@property(nonatomic) __weak id <WCPayQRCodeRewardCodeViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)confirmChangeToInputMode;
- (void)confirmChangeToHeadImgMode;
- (void)codeViewRemoveWordingFail;
- (void)codeViewRemovewordingSucc;
- (void)codeViewSetWordingFail;
- (void)codeViewSetWordingSucc;
- (void)changeToInputMode;
- (void)changeToHeadImgMode;
- (void)photoHitBtnClick;
- (_Bool)loadCacheCodeViewIfExist;
- (id)getSelfHeaderImageViewWithImgLen:(double)arg1;
- (void)updateAccessibility;
- (void)setupContentView;
- (id)initWithFrame:(struct CGRect)arg1 codeDelegate:(id)arg2 controlData:(id)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

