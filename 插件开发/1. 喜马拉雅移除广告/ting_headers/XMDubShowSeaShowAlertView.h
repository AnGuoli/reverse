//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMBaseAlert.h"

@class NSString, UIButton, UIImage, UIImageView, UILabel, UIView;

@interface XMDubShowSeaShowAlertView : XMBaseAlert
{
    CDUnknownBlockType _openAlert;
    UIView *_convView;
    UIImageView *_convImgV;
    UILabel *_titleLabel;
    UIButton *_gotoRecord;
    UIButton *_closeBtn;
    UIImage *_image;
    NSString *_titleStr;
}

@property(retain, nonatomic) NSString *titleStr; // @synthesize titleStr=_titleStr;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) UIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(retain, nonatomic) UIButton *gotoRecord; // @synthesize gotoRecord=_gotoRecord;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *convImgV; // @synthesize convImgV=_convImgV;
@property(retain, nonatomic) UIView *convView; // @synthesize convView=_convView;
@property(copy, nonatomic) CDUnknownBlockType openAlert; // @synthesize openAlert=_openAlert;
- (void).cxx_destruct;
- (id)beziForMask2;
- (id)beziForMask1;
- (void)p_handleGotoRecord;
- (void)setupSubviews;
- (void)initUI;
- (id)initWithImage:(id)arg1 title:(id)arg2;

@end

