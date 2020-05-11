//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class WBMLQAActivePagePersonFollowView, WBMLQAActivePagePersonTitleButton, WBMLStrokeButton, WBMLVideoGradientControl;

@interface WBMLQAActivePagePersonView : UIView
{
    _Bool _followed;
    WBMLQAActivePagePersonTitleButton *_rewardButton;
    WBMLQAActivePagePersonTitleButton *_bountyButton;
    WBMLStrokeButton *_shareStrokButton;
    WBMLStrokeButton *_teamStrokButton;
    WBMLVideoGradientControl *_revivalButton;
    WBMLQAActivePagePersonFollowView *_followView;
    CDUnknownBlockType _tapAction;
    UIView *_verticalLine;
    UIView *_horizontalLine;
}

@property(retain, nonatomic) UIView *horizontalLine; // @synthesize horizontalLine=_horizontalLine;
@property(retain, nonatomic) UIView *verticalLine; // @synthesize verticalLine=_verticalLine;
@property(nonatomic) _Bool followed; // @synthesize followed=_followed;
@property(copy, nonatomic) CDUnknownBlockType tapAction; // @synthesize tapAction=_tapAction;
@property(retain, nonatomic) WBMLQAActivePagePersonFollowView *followView; // @synthesize followView=_followView;
@property(retain, nonatomic) WBMLVideoGradientControl *revivalButton; // @synthesize revivalButton=_revivalButton;
@property(retain, nonatomic) WBMLStrokeButton *teamStrokButton; // @synthesize teamStrokButton=_teamStrokButton;
@property(retain, nonatomic) WBMLStrokeButton *shareStrokButton; // @synthesize shareStrokButton=_shareStrokButton;
@property(retain, nonatomic) WBMLQAActivePagePersonTitleButton *bountyButton; // @synthesize bountyButton=_bountyButton;
@property(retain, nonatomic) WBMLQAActivePagePersonTitleButton *rewardButton; // @synthesize rewardButton=_rewardButton;
- (void).cxx_destruct;
- (void)buttonAction:(id)arg1;
- (void)layoutSubviews;
- (void)_addSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

