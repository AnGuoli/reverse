//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMBaseVC.h"

@class UIButton, UILabel, UIScrollView, XMOMYQRCodeModel, XMOMYQRCodeView, XMOMYQRCodeViewPresenter;

@interface XMOMYQRCodeViewController : XMBaseVC
{
    XMOMYQRCodeModel *_model;
    UIScrollView *_mainScrollView;
    XMOMYQRCodeView *_codeView;
    UIButton *_backButton;
    UILabel *_titleLabel;
    UIButton *_saveButton;
    XMOMYQRCodeViewPresenter *_presenter;
}

@property(retain, nonatomic) XMOMYQRCodeViewPresenter *presenter; // @synthesize presenter=_presenter;
@property(retain, nonatomic) UIButton *saveButton; // @synthesize saveButton=_saveButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
@property(retain, nonatomic) XMOMYQRCodeView *codeView; // @synthesize codeView=_codeView;
@property(retain, nonatomic) UIScrollView *mainScrollView; // @synthesize mainScrollView=_mainScrollView;
@property(retain, nonatomic) XMOMYQRCodeModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)p_updatePresenter;
- (void)p_makeConstraints;
- (void)p_setUI;
- (void)viewDidLoad;
- (id)init;
- (void)setTitle:(id)arg1;

@end

