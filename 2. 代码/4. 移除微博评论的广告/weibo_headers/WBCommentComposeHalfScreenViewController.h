//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBComposeHalfScreenViewController.h"

#import "WBDirectionalGroupMessageViewControllerDelegate-Protocol.h"
#import "WBQueueJobDelegate-Protocol.h"

@class NSString, UINavigationController, WBComment, WBContactEngine, WBNoticeAttitude, WBStatus;

@interface WBCommentComposeHalfScreenViewController : WBComposeHalfScreenViewController <WBDirectionalGroupMessageViewControllerDelegate, WBQueueJobDelegate>
{
    _Bool _needCheckMediaCommentAuth;
    WBContactEngine *contactEngine;
    UINavigationController *presentNav;
    _Bool _allowComment;
    _Bool _isDark;
    int _relationShip;
    int _commentPrivilege;
    WBStatus *_oriStatus;
    WBComment *_oriComment;
    WBNoticeAttitude *_oriAttitude;
    long long _requestType;
    long long _statusType;
    NSString *_errorText;
    NSString *_commentWarning;
}

+ (long long)compositionType;
@property(nonatomic) _Bool isDark; // @synthesize isDark=_isDark;
@property(copy, nonatomic) NSString *commentWarning; // @synthesize commentWarning=_commentWarning;
@property(copy, nonatomic) NSString *errorText; // @synthesize errorText=_errorText;
@property(nonatomic) int commentPrivilege; // @synthesize commentPrivilege=_commentPrivilege;
@property(nonatomic) int relationShip; // @synthesize relationShip=_relationShip;
@property(nonatomic, getter=isAllowComment) _Bool allowComment; // @synthesize allowComment=_allowComment;
@property(nonatomic) long long statusType; // @synthesize statusType=_statusType;
@property(nonatomic) long long requestType; // @synthesize requestType=_requestType;
@property(retain, nonatomic) WBNoticeAttitude *oriAttitude; // @synthesize oriAttitude=_oriAttitude;
@property(retain, nonatomic) WBComment *oriComment; // @synthesize oriComment=_oriComment;
@property(retain, nonatomic) WBStatus *oriStatus; // @synthesize oriStatus=_oriStatus;
- (void).cxx_destruct;
- (void)handleTopWebVCGoBack;
- (id)_videoItemWithStatus:(id)arg1;
- (void)_updateCommentJobDanmakuInfoWithStatus:(id)arg1;
- (id)cmtNick;
- (id)cmtID;
- (id)blogNick;
- (id)statusUserID;
- (id)statusOriMid;
- (id)statusID;
- (void)navigationBarLeftButtonPressed;
- (void)directionalGroupMessageView:(id)arg1 didSelectGroup:(id)arg2 inController:(id)arg3;
- (void)sendComment;
- (void)prepareJobForSaving;
- (void)jobSendFinished:(id)arg1;
- (_Bool)canPostNow;
- (void)sendButtonPressed;
- (void)addonsView:(id)arg1 didSelectAddon:(id)arg2;
- (void)addonViewRefreshAddons;
- (void)composeToolBarDidSelectButton:(id)arg1 type:(unsigned long long)arg2;
- (id)commentJob;
- (Class)jobClass;
- (void)createJobIfNeed;
- (void)setupWithCurrentJob;
- (unsigned long long)composeToolbarType;
- (void)dealloc;
- (void)setDarkModeNavigationBar;
- (void)layoutContentViews:(_Bool)arg1 duration:(double)arg2 curve:(long long)arg3;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)initComposeDatas;
- (id)initWithComment:(id)arg1;
- (id)initWithComment:(id)arg1 isDark:(_Bool)arg2;
- (id)initWithAttitude:(id)arg1;
- (id)initWithStatus:(id)arg1;
- (id)initWithStatus:(id)arg1 isDark:(_Bool)arg2;
- (id)initWithJob:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

