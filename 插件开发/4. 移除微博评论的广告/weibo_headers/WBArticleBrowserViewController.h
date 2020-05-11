//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBBasicWebViewController.h"

#import "UIScrollViewDelegate-Protocol.h"
#import "WBArticleFloatTipsViewDelegate-Protocol.h"

@class NSString, WBArticleFloatTipsView, WBBrowserArticle, WBBrowserArticleEngine;
@protocol ArticleBrowserViewControllerDelegate;

@interface WBArticleBrowserViewController : WBBasicWebViewController <UIScrollViewDelegate, WBArticleFloatTipsViewDelegate>
{
    _Bool _isTipViewRemoveFromSuperview;
    WBBrowserArticle *_browserArticle;
    id <ArticleBrowserViewControllerDelegate> _delegate;
    WBBrowserArticleEngine *_browserArticleEngine;
    NSString *_objectID;
    NSString *_mid;
    NSString *_act_id;
    WBArticleFloatTipsView *_tipView;
}

@property(nonatomic) _Bool isTipViewRemoveFromSuperview; // @synthesize isTipViewRemoveFromSuperview=_isTipViewRemoveFromSuperview;
@property(retain, nonatomic) WBArticleFloatTipsView *tipView; // @synthesize tipView=_tipView;
@property(copy, nonatomic) NSString *act_id; // @synthesize act_id=_act_id;
@property(copy, nonatomic) NSString *mid; // @synthesize mid=_mid;
@property(copy, nonatomic) NSString *objectID; // @synthesize objectID=_objectID;
@property(retain, nonatomic) WBBrowserArticleEngine *browserArticleEngine; // @synthesize browserArticleEngine=_browserArticleEngine;
@property(nonatomic) __weak id <ArticleBrowserViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WBBrowserArticle *browserArticle; // @synthesize browserArticle=_browserArticle;
- (void).cxx_destruct;
- (void)endFullScreen:(id)arg1;
- (void)dealloc;
- (void)operation_tipViewRemoveFromSuperView;
- (void)deleteButtonClicked:(id)arg1;
- (void)tapGestureRecognizer:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)layoutViews;
- (_Bool)displaysLoadingProgressBar;
- (_Bool)_shouldShowMoreMenu;
- (_Bool)wb_webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)updateNavigationItemAndToolBarWithArticle:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithURL:(id)arg1 objectID:(id)arg2 mblogID:(id)arg3;
- (id)init;
- (void)performAnalysisActionWithCode:(id)arg1 andExtParam:(id)arg2;
- (void)likeItemAction:(id)arg1;
- (void)commentItemAction:(id)arg1;
- (void)likeButtonClicked:(id)arg1;
- (void)commentButtonClicked:(id)arg1;
- (void)repostButtonClicked:(id)arg1;
- (void)updateToolBarWithArticle:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

