//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView, UILabel;

@interface XMRecCreateAlbumTipView : UIView
{
    CDUnknownBlockType _handleClose;
    UILabel *_tipLabel;
    UIView *_tipLabelBKV;
    UIImageView *_tangleView;
    UIButton *_closeButton;
}

@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIImageView *tangleView; // @synthesize tangleView=_tangleView;
@property(retain, nonatomic) UIView *tipLabelBKV; // @synthesize tipLabelBKV=_tipLabelBKV;
@property(retain, nonatomic) UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(copy, nonatomic) CDUnknownBlockType handleClose; // @synthesize handleClose=_handleClose;
- (void).cxx_destruct;
- (void)p_handleCloseAction;
- (void)customInit;
- (id)initWithFrame:(struct CGRect)arg1;

@end

