//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, NSURL;

@interface XMWeKePopUpView : UIView
{
    NSString *_title;
    NSURL *_imageUrl;
    UIView *_popBaseView;
    UIView *_popView;
}

@property(retain, nonatomic) UIView *popView; // @synthesize popView=_popView;
@property(retain, nonatomic) UIView *popBaseView; // @synthesize popBaseView=_popBaseView;
@property(retain, nonatomic) NSURL *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)onPopBaseViewClick:(id)arg1;
- (void)onPopBtnClick:(id)arg1;
- (void)dismiss;
- (void)show;

@end

