//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "XMRAPicViewDelegate-Protocol.h"

@class NSArray, NSString, UIButton, UIImageView, UILabel, UIVisualEffectView, XMRAPicView, XMSoundItem, XMWebImageView;
@protocol XMNowPlayingPPTViewDelegate;

@interface XMNowPlayingPPTView : UIView <XMRAPicViewDelegate>
{
    XMSoundItem *_sound;
    id <XMNowPlayingPPTViewDelegate> _delegate;
    NSArray *_insetMArr;
    NSArray *_lyricMArr;
    XMRAPicView *_picView;
    XMWebImageView *_coverImageView;
    XMWebImageView *_coverBgView;
    UIImageView *_headCover;
    UILabel *_titleLB;
    UIView *_lyricBG;
    UILabel *_lyricLB;
    UIButton *_landscapeBtn;
    UIView *_blurBGView;
    XMWebImageView *_blurView;
    UIVisualEffectView *_effectview;
    XMWebImageView *_coverView;
}

@property(retain, nonatomic) XMWebImageView *coverView; // @synthesize coverView=_coverView;
@property(retain, nonatomic) UIVisualEffectView *effectview; // @synthesize effectview=_effectview;
@property(retain, nonatomic) XMWebImageView *blurView; // @synthesize blurView=_blurView;
@property(retain, nonatomic) UIView *blurBGView; // @synthesize blurBGView=_blurBGView;
@property(retain, nonatomic) UIButton *landscapeBtn; // @synthesize landscapeBtn=_landscapeBtn;
@property(retain, nonatomic) UILabel *lyricLB; // @synthesize lyricLB=_lyricLB;
@property(retain, nonatomic) UIView *lyricBG; // @synthesize lyricBG=_lyricBG;
@property(retain, nonatomic) UILabel *titleLB; // @synthesize titleLB=_titleLB;
@property(retain, nonatomic) UIImageView *headCover; // @synthesize headCover=_headCover;
@property(retain, nonatomic) XMWebImageView *coverBgView; // @synthesize coverBgView=_coverBgView;
@property(retain, nonatomic) XMWebImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
@property(retain, nonatomic) XMRAPicView *picView; // @synthesize picView=_picView;
@property(retain, nonatomic) NSArray *lyricMArr; // @synthesize lyricMArr=_lyricMArr;
@property(retain, nonatomic) NSArray *insetMArr; // @synthesize insetMArr=_insetMArr;
@property(nonatomic) __weak id <XMNowPlayingPPTViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) XMSoundItem *sound; // @synthesize sound=_sound;
- (void).cxx_destruct;
- (void)fullScreen;
- (id)coverMaskIVImage;
- (void)customInit;
- (void)XMRAPicViewOnChangeText:(id)arg1;
- (void)XMRAPicViewOnChangeImage:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

