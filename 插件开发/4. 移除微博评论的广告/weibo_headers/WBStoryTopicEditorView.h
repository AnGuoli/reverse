//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBStoryOverlayViewBase.h"

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "WBStoryKeyboardObserverDelegate-Protocol.h"
#import "WBStoryTopicEditToolBarDelegate-Protocol.h"
#import "WBStoryTopicStickerDelegate-Protocol.h"

@class NSString, UILabel, UIPanGestureRecognizer, UIView, WBStoryFullScreenDarkGradientView, WBStoryKeyboardObserver, WBStoryTopicEditToolBar, WBStoryTopicSticker;
@protocol WBStoryTopicEditorViewDelegate;

@interface WBStoryTopicEditorView : WBStoryOverlayViewBase <WBStoryKeyboardObserverDelegate, UIGestureRecognizerDelegate, WBStoryTopicStickerDelegate, WBStoryTopicEditToolBarDelegate>
{
    struct CGRect _cachedKeyboardFrame;
    struct CGPoint _originalCenter;
    struct CGAffineTransform _originalTransform;
    struct {
        unsigned int ignoreOrigianlFrame:1;
        unsigned int isPanning:1;
    } _flags;
    id <WBStoryTopicEditorViewDelegate> _delegate;
    WBStoryTopicSticker *_topicSticker;
    UILabel *_titleLabel;
    WBStoryFullScreenDarkGradientView *_topGradientView;
    UIView *_backgroundView;
    WBStoryTopicEditToolBar *_editToolBar;
    UIPanGestureRecognizer *_panGesture;
    WBStoryKeyboardObserver *_keyboardObserver;
    WBStoryTopicSticker *_originalTopicSticker;
}

@property(retain, nonatomic) WBStoryTopicSticker *originalTopicSticker; // @synthesize originalTopicSticker=_originalTopicSticker;
@property(retain, nonatomic) WBStoryKeyboardObserver *keyboardObserver; // @synthesize keyboardObserver=_keyboardObserver;
@property(retain, nonatomic) UIPanGestureRecognizer *panGesture; // @synthesize panGesture=_panGesture;
@property(retain, nonatomic) WBStoryTopicEditToolBar *editToolBar; // @synthesize editToolBar=_editToolBar;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) WBStoryFullScreenDarkGradientView *topGradientView; // @synthesize topGradientView=_topGradientView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) WBStoryTopicSticker *topicSticker; // @synthesize topicSticker=_topicSticker;
@property(nonatomic) __weak id <WBStoryTopicEditorViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)storyTopicEditToolBarDidCancel:(id)arg1;
- (void)storyTopicEditToolBarDidFinish:(id)arg1;
- (void)storyTopicEditToolBar:(id)arg1 didSelectTopic:(id)arg2;
- (void)storyTopicStickerDidPressReturn:(id)arg1;
- (void)storyTopicStickerDidChange:(id)arg1;
- (void)keyboardObserver:(id)arg1 keyboardFrameWillChangeWithBeginFrame:(struct CGRect)arg2 endFrame:(struct CGRect)arg3 duration:(double)arg4 curve:(long long)arg5;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)handlePanGesture:(id)arg1;
- (void)gestureRecognizerDidEnd;
- (void)gestureRecognizerDidStart;
- (void)delegateEditCanceled;
- (void)cancelEdit;
- (void)delegateEditFinished;
- (void)finishEdit;
- (void)updateWithCurretTopicSticker;
- (void)resetTopicSticker;
- (void)creatNewTopicSticker;
- (void)hideSubviews;
- (void)resetSubviews;
- (void)viewDidDisappear;
- (void)viewWillDisappear;
- (void)viewDidAppear;
- (void)viewWillAppear;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

