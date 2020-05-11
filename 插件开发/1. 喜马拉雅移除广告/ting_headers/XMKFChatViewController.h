//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMBaseVC.h"

#import "XMBaseVCProtocol-Protocol.h"

@class NSString, UIBarButtonItem, UIViewController;

@interface XMKFChatViewController : XMBaseVC <XMBaseVCProtocol>
{
    UIViewController *_ChatVC;
    UIBarButtonItem *_rightButtonItem;
    UIBarButtonItem *_leftButtonItem;
}

+ (void)pushFeedback:(id)arg1 isCheckConnectStatus:(_Bool)arg2 isAnimated:(_Bool)arg3;
@property(retain, nonatomic) UIBarButtonItem *leftButtonItem; // @synthesize leftButtonItem=_leftButtonItem;
@property(retain, nonatomic) UIBarButtonItem *rightButtonItem; // @synthesize rightButtonItem=_rightButtonItem;
@property(retain, nonatomic) UIViewController *ChatVC; // @synthesize ChatVC=_ChatVC;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (id)initWithSettingId:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) double heightOffset;
@property(nonatomic) _Bool hiddenTabbar;
@property(nonatomic) _Bool navigationBarHidden;
@property(readonly) Class superclass;

@end

