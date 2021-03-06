//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMDubShowPlayingPane.h"

#import "UINavigationControllerDelegate-Protocol.h"

@class NSString, UIButton, UINavigationController, XMSoundItem;

@interface XMDubShowPlayingCommentView : XMDubShowPlayingPane <UINavigationControllerDelegate>
{
    UINavigationController *_navigationController;
    CDUnknownBlockType _updateCommentCount;
    XMSoundItem *_soundItem;
    UIButton *_backButton;
}

@property(retain, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
@property(retain, nonatomic) XMSoundItem *soundItem; // @synthesize soundItem=_soundItem;
@property(copy, nonatomic) CDUnknownBlockType updateCommentCount; // @synthesize updateCommentCount=_updateCommentCount;
@property(retain, nonatomic) UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
- (void).cxx_destruct;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)clickBackButton:(id)arg1;
- (void)onDubCmtDetailMove:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)dismiss;
- (void)show;
- (void)initSubviews;
- (id)initWithSoundItem:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

