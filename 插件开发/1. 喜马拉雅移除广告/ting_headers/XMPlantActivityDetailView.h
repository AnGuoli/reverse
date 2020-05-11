//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UILabel, UIViewController, XMPlantActivityModel;
@protocol XMPlantActivityDetailViewDelegate;

@interface XMPlantActivityDetailView : UIView
{
    id <XMPlantActivityDetailViewDelegate> _delegate;
    XMPlantActivityModel *_activityModel;
    UIButton *_cancelBtn;
    UIButton *_cancelTouchBtn;
    UILabel *_titleLabel;
    UIButton *_joinBtn;
    UIView *_hybirdView;
    double _firstY;
    UIViewController *_bgVc;
}

@property(nonatomic) __weak UIViewController *bgVc; // @synthesize bgVc=_bgVc;
@property(nonatomic) double firstY; // @synthesize firstY=_firstY;
@property(retain, nonatomic) UIView *hybirdView; // @synthesize hybirdView=_hybirdView;
@property(retain, nonatomic) UIButton *joinBtn; // @synthesize joinBtn=_joinBtn;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButton *cancelTouchBtn; // @synthesize cancelTouchBtn=_cancelTouchBtn;
@property(retain, nonatomic) UIButton *cancelBtn; // @synthesize cancelBtn=_cancelBtn;
@property(retain, nonatomic) XMPlantActivityModel *activityModel; // @synthesize activityModel=_activityModel;
@property(nonatomic) __weak id <XMPlantActivityDetailViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)hide;
- (void)show;
- (void)onJoinBtnClick:(id)arg1;
- (void)onCancelClick:(id)arg1;
- (void)layoutSubviews;
- (void)updateData:(id)arg1;
- (void)customInit;
- (void)onPan:(id)arg1;
- (id)initWithActivityModel:(id)arg1 bgVc:(id)arg2;

@end

