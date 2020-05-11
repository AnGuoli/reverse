//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

@class CameraScanTabView, UIButton, UILabel, UIView;
@protocol CameraScanBaseContentViewDelegate;

@interface CameraScanBaseContentView : MMUIView
{
    id <CameraScanBaseContentViewDelegate> _delegate;
    UILabel *_centerLabel;
    UIButton *_closeButton;
    UILabel *_infoLabel;
    UIButton *_torchButton;
    UILabel *_torchLabel;
    UIView *_albumButtonWrapView;
    CameraScanTabView *_tabView;
}

@property(nonatomic) __weak CameraScanTabView *tabView; // @synthesize tabView=_tabView;
@property(nonatomic) __weak UIView *albumButtonWrapView; // @synthesize albumButtonWrapView=_albumButtonWrapView;
@property(nonatomic) __weak UILabel *torchLabel; // @synthesize torchLabel=_torchLabel;
@property(nonatomic) __weak UIButton *torchButton; // @synthesize torchButton=_torchButton;
@property(nonatomic) __weak UILabel *infoLabel; // @synthesize infoLabel=_infoLabel;
@property(nonatomic) __weak UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UILabel *centerLabel; // @synthesize centerLabel=_centerLabel;
@property(nonatomic) __weak id <CameraScanBaseContentViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (double)getTabViewHeight;
- (struct CGPoint)areaCenterAboveTabView;
- (struct CGSize)areaSizeAboveTabView;
- (void)layoutSubviews;
- (void)setCenterLabelHidden:(_Bool)arg1 bAnim:(_Bool)arg2;
- (void)setupCenterLabel:(id)arg1;
- (id)init;

@end

