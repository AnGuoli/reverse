//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView;

@interface XMLiveTopGuideView : UIView
{
    CDUnknownBlockType _clickBlock;
    UIImageView *_imgView1;
    UIImageView *_imgView2;
    UIButton *_okBtn;
    struct CGPoint _continuePoint;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *okBtn; // @synthesize okBtn=_okBtn;
@property(retain, nonatomic) UIImageView *imgView2; // @synthesize imgView2=_imgView2;
@property(retain, nonatomic) UIImageView *imgView1; // @synthesize imgView1=_imgView1;
@property(nonatomic) struct CGPoint continuePoint; // @synthesize continuePoint=_continuePoint;
@property(copy, nonatomic) CDUnknownBlockType clickBlock; // @synthesize clickBlock=_clickBlock;
- (void)onGuideViewClick:(id)arg1;
- (void)onOkBtnClick;
- (void)showInView:(id)arg1 guidePoint1:(struct CGPoint)arg2 guidePoint2:(struct CGPoint)arg3 guideFinished:(CDUnknownBlockType)arg4;
- (void)customInit;
- (id)initWithFrame:(struct CGRect)arg1;

@end

