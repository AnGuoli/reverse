//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView, UILabel;

@interface XMMPMInterceptView : UIView
{
    CDUnknownBlockType _affirmBlock;
    CDUnknownBlockType _setBlock;
    UIImageView *_statusIV;
    UILabel *_title;
    UIButton *_affirmBtn;
    UIButton *_setBtn;
    UIView *_touchDownAffirmLayer;
    UIView *_touchDownSetLayer;
    unsigned long long _interceptType;
}

@property(nonatomic) unsigned long long interceptType; // @synthesize interceptType=_interceptType;
@property(retain, nonatomic) UIView *touchDownSetLayer; // @synthesize touchDownSetLayer=_touchDownSetLayer;
@property(retain, nonatomic) UIView *touchDownAffirmLayer; // @synthesize touchDownAffirmLayer=_touchDownAffirmLayer;
@property(retain, nonatomic) UIButton *setBtn; // @synthesize setBtn=_setBtn;
@property(retain, nonatomic) UIButton *affirmBtn; // @synthesize affirmBtn=_affirmBtn;
@property(retain, nonatomic) UILabel *title; // @synthesize title=_title;
@property(retain, nonatomic) UIImageView *statusIV; // @synthesize statusIV=_statusIV;
@property(copy, nonatomic) CDUnknownBlockType setBlock; // @synthesize setBlock=_setBlock;
@property(copy, nonatomic) CDUnknownBlockType affirmBlock; // @synthesize affirmBlock=_affirmBlock;
- (void).cxx_destruct;
- (void)onSetBtnUpOutside;
- (void)onSetBtnDown;
- (void)onSetBtn;
- (void)onAffirmBtnUpOutside;
- (void)onAffirmBtnDown;
- (void)onAffirmBtn;
- (id)initWithInterceptType:(unsigned long long)arg1;

@end

