//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMMBaseView.h"

@class UIButton, UIView;

@interface XMMAnswerToolBar : XMMBaseView
{
    UIView *_line;
    id _delegate;
    UIButton *_answerButton;
}

@property(retain, nonatomic) UIButton *answerButton; // @synthesize answerButton=_answerButton;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)clickAnswerButton:(id)arg1;
- (void)layoutSubviews;
- (void)didInitialize;

@end

