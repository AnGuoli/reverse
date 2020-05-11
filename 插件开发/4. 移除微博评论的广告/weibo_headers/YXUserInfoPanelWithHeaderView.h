//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MASCompositeConstraint, NSMutableArray, UIImageView, YXUserInfoHeadView, YXUserInfoPanelView;

@interface YXUserInfoPanelWithHeaderView : UIView
{
    YXUserInfoPanelView *_panelView;
    YXUserInfoHeadView *_headView;
    UIImageView *_headViewBgImageView;
    UIImageView *_headViewBgWingImageView;
    MASCompositeConstraint *_regularConstraint;
    MASCompositeConstraint *_compactConstraint;
    NSMutableArray *_regularConstraints;
    NSMutableArray *_compactConstraints;
}

@property(retain, nonatomic) NSMutableArray *compactConstraints; // @synthesize compactConstraints=_compactConstraints;
@property(retain, nonatomic) NSMutableArray *regularConstraints; // @synthesize regularConstraints=_regularConstraints;
@property(retain, nonatomic) MASCompositeConstraint *compactConstraint; // @synthesize compactConstraint=_compactConstraint;
@property(retain, nonatomic) MASCompositeConstraint *regularConstraint; // @synthesize regularConstraint=_regularConstraint;
@property(retain, nonatomic) UIImageView *headViewBgWingImageView; // @synthesize headViewBgWingImageView=_headViewBgWingImageView;
@property(retain, nonatomic) UIImageView *headViewBgImageView; // @synthesize headViewBgImageView=_headViewBgImageView;
@property(retain, nonatomic) YXUserInfoHeadView *headView; // @synthesize headView=_headView;
@property(retain, nonatomic) YXUserInfoPanelView *panelView; // @synthesize panelView=_panelView;
- (void).cxx_destruct;
- (void)updateUserInfoViewHeight:(double)arg1;
- (void)configUserInfoViewConstraint;
- (id)init;

@end

