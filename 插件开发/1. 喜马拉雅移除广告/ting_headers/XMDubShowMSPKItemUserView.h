//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel, XMDubShowMSPKItemUserModel, XMWebImageView;

@interface XMDubShowMSPKItemUserView : UIView
{
    XMDubShowMSPKItemUserModel *_model;
    UIView *_backgroundColorView;
    XMWebImageView *_avaterImageView;
    UILabel *_nickName;
}

@property(retain, nonatomic) UILabel *nickName; // @synthesize nickName=_nickName;
@property(retain, nonatomic) XMWebImageView *avaterImageView; // @synthesize avaterImageView=_avaterImageView;
@property(retain, nonatomic) UIView *backgroundColorView; // @synthesize backgroundColorView=_backgroundColorView;
@property(retain, nonatomic) XMDubShowMSPKItemUserModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)customInit;
- (id)initWithFrame:(struct CGRect)arg1;

@end

