//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITextViewDelegate-Protocol.h"

@class NSString, UIButton, UIImageView, UILabel, UITextView, ULSLiveQuestionAvatarView;
@protocol ULSLiveResponseQuestionViewDelegate;

@interface ULSLiveResponseQuestionView : UIView <UITextViewDelegate>
{
    _Bool _speaking;
    id <ULSLiveResponseQuestionViewDelegate> _delegate;
    long long _questionId;
    ULSLiveQuestionAvatarView *_anchorView;
    ULSLiveQuestionAvatarView *_questionerView;
    UITextView *_questionTextView;
    UIImageView *_animateView;
    UIImageView *_backGroundImage;
    UILabel *_anchorLabel;
    UILabel *_questionerLabel;
    UIButton *_closeButton;
}

@property(nonatomic) __weak UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UILabel *questionerLabel; // @synthesize questionerLabel=_questionerLabel;
@property(retain, nonatomic) UILabel *anchorLabel; // @synthesize anchorLabel=_anchorLabel;
@property(retain, nonatomic) UIImageView *backGroundImage; // @synthesize backGroundImage=_backGroundImage;
@property(retain, nonatomic) UIImageView *animateView; // @synthesize animateView=_animateView;
@property(nonatomic) _Bool speaking; // @synthesize speaking=_speaking;
@property(retain, nonatomic) UITextView *questionTextView; // @synthesize questionTextView=_questionTextView;
@property(retain, nonatomic) ULSLiveQuestionAvatarView *questionerView; // @synthesize questionerView=_questionerView;
@property(retain, nonatomic) ULSLiveQuestionAvatarView *anchorView; // @synthesize anchorView=_anchorView;
@property(nonatomic) long long questionId; // @synthesize questionId=_questionId;
@property(nonatomic) __weak id <ULSLiveResponseQuestionViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)stopSpeaking;
- (void)startSpeaking;
- (void)closeButtonAction:(id)arg1;
- (void)showQuestionIsShowCloseButton:(_Bool)arg1 answerHeadUrl:(id)arg2 questionHeadUrl:(id)arg3 question:(id)arg4 answerNickname:(id)arg5 questionNickname:(id)arg6;
- (void)showQuestionHideCloseButton:(_Bool)arg1 question:(id)arg2;
- (void)createUser;
- (void)setupSubView;
- (id)getAttributedStringWithString:(id)arg1 image:(id)arg2;
- (void)tapgesture:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

