//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, WBMLVideoMessageModel, WBMLVideoModalsContainerView;
@protocol WBMLVideoStickyOptionBottomViewDelegate;

@interface WBMLVideoStickyOptionBottomView : UIView
{
    id <WBMLVideoStickyOptionBottomViewDelegate> _delegate;
    WBMLVideoMessageModel *_liveComment;
    WBMLVideoModalsContainerView *_containerView;
    UIButton *_stickyButton;
    UIButton *_cancelButton;
}

@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UIButton *stickyButton; // @synthesize stickyButton=_stickyButton;
@property(nonatomic) __weak WBMLVideoModalsContainerView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) WBMLVideoMessageModel *liveComment; // @synthesize liveComment=_liveComment;
@property(nonatomic) __weak id <WBMLVideoStickyOptionBottomViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)createButtonWithTitle:(id)arg1;
- (void)cancelButtonPressed:(id)arg1;
- (void)stickyButtonPressed:(id)arg1;
- (void)layoutSubviews;
- (id)init;

@end

