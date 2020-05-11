//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIColor, UIImageView, UILabel;
@protocol XMNewPosterBottomViewDelegate;

@interface XMCommentPosterBottomView : UIView
{
    _Bool _shadowHidden;
    long long _direction;
    double _radian;
    UIColor *_bgColor;
    UIImageView *_shadowImage;
    UIView *_containerView;
    UIButton *_wxSessionButton;
    UIButton *_wxTimelineButton;
    UILabel *_wxSessionLabel;
    UILabel *_wxTimelineLabel;
    id <XMNewPosterBottomViewDelegate> _delegate;
}

@property(nonatomic) __weak id <XMNewPosterBottomViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UILabel *wxTimelineLabel; // @synthesize wxTimelineLabel=_wxTimelineLabel;
@property(retain, nonatomic) UILabel *wxSessionLabel; // @synthesize wxSessionLabel=_wxSessionLabel;
@property(retain, nonatomic) UIButton *wxTimelineButton; // @synthesize wxTimelineButton=_wxTimelineButton;
@property(retain, nonatomic) UIButton *wxSessionButton; // @synthesize wxSessionButton=_wxSessionButton;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UIImageView *shadowImage; // @synthesize shadowImage=_shadowImage;
@property(nonatomic) _Bool shadowHidden; // @synthesize shadowHidden=_shadowHidden;
@property(retain, nonatomic) UIColor *bgColor; // @synthesize bgColor=_bgColor;
@property(nonatomic) double radian; // @synthesize radian=_radian;
@property(nonatomic) long long direction; // @synthesize direction=_direction;
- (void).cxx_destruct;
- (void)onWXTimelineButtonClicked:(id)arg1;
- (void)onWXSessionButtonClicked:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

