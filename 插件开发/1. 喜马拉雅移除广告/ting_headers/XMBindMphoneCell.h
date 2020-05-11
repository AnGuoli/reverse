//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMTableViewCell.h"

#import "UITextFieldDelegate-Protocol.h"

@class NSString, NSTimer, UIButton, UILabel, UITextField, UIView, XMBindMphoneModel, XMNSDataServerPostRequest, XMServerRequest, XMTableCellObject;

@interface XMBindMphoneCell : XMTableViewCell <UITextFieldDelegate>
{
    XMBindMphoneModel *_bindMphoneModel;
    NSString *_tokenStr;
    UILabel *_titleLB;
    UIView *_contentWhiteView;
    UITextField *_phoneTF;
    UITextField *_verifyCodeTF;
    UIView *_cutLine;
    UIButton *_verifyBtn;
    NSString *_lastPhoneText;
    XMTableCellObject *_cellObject;
    NSTimer *_downCountTimer;
    long long _downCount;
    XMServerRequest *_tokenRequest;
    XMNSDataServerPostRequest *_verifyCodeRequest;
}

+ (double)heightForBindMphoneCell;
+ (double)tableView:(id)arg1 heightForCellObject:(id)arg2;
@property(retain, nonatomic) XMNSDataServerPostRequest *verifyCodeRequest; // @synthesize verifyCodeRequest=_verifyCodeRequest;
@property(retain, nonatomic) XMServerRequest *tokenRequest; // @synthesize tokenRequest=_tokenRequest;
@property(nonatomic) long long downCount; // @synthesize downCount=_downCount;
@property(retain, nonatomic) NSTimer *downCountTimer; // @synthesize downCountTimer=_downCountTimer;
@property(retain, nonatomic) XMTableCellObject *cellObject; // @synthesize cellObject=_cellObject;
@property(copy, nonatomic) NSString *lastPhoneText; // @synthesize lastPhoneText=_lastPhoneText;
@property(retain, nonatomic) UIButton *verifyBtn; // @synthesize verifyBtn=_verifyBtn;
@property(retain, nonatomic) UIView *cutLine; // @synthesize cutLine=_cutLine;
@property(retain, nonatomic) UITextField *verifyCodeTF; // @synthesize verifyCodeTF=_verifyCodeTF;
@property(retain, nonatomic) UITextField *phoneTF; // @synthesize phoneTF=_phoneTF;
@property(retain, nonatomic) UIView *contentWhiteView; // @synthesize contentWhiteView=_contentWhiteView;
@property(retain, nonatomic) UILabel *titleLB; // @synthesize titleLB=_titleLB;
@property(copy, nonatomic) NSString *tokenStr; // @synthesize tokenStr=_tokenStr;
@property(retain, nonatomic) XMBindMphoneModel *bindMphoneModel; // @synthesize bindMphoneModel=_bindMphoneModel;
- (void).cxx_destruct;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (id)strForVerifyCodeTextField;
- (id)strForPhoneTextField;
- (id)strForPhoneTextFieldDecode;
- (void)ctrlResignFirstResponder;
- (void)getVerifyCode;
- (void)getRandomToken;
- (void)verifyBtnTouch:(id)arg1;
- (_Bool)basedSanityCheck;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)downCountTimerAction;
- (void)invalidateDownCountTimer;
- (void)reloadCellWithCellObject:(id)arg1 tableViewDelegate:(id)arg2;
- (void)textFieldValueDidBegin:(id)arg1;
- (void)phoneTFValueChange:(id)arg1;
- (void)updateVerifyBtnState:(_Bool)arg1;
- (void)layoutSubviews;
- (void)initSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

