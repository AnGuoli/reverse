//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBViewController.h"

#import "UIScrollViewDelegate-Protocol.h"
#import "WBALAssetPickerContextManagerDelegate-Protocol.h"
#import "WBArticleContentImageDatasource-Protocol.h"
#import "WBArticleImagePickViewDelegate-Protocol.h"
#import "WBComposeToolBarDelegate-Protocol.h"
#import "WBCoreTextViewDelegate-Protocol.h"
#import "WBTextEditorViewAutoScrollDelegate-Protocol.h"
#import "WBTextViewDelegate-Protocol.h"

@class NSString, NSTimer, UIImageView, UILabel, UIScrollView, WBALAssetPickerContextManager, WBArticle, WBArticleImagePickView, WBComposeToolbar, WBDoubleLineNavigationBarTitleView, WBTextEditorView, WBTextView;
@protocol WBArticleComposeViewControllerDelegate;

@interface WBArticleComposeViewController : WBViewController <WBTextViewDelegate, UIScrollViewDelegate, WBArticleImagePickViewDelegate, WBALAssetPickerContextManagerDelegate, WBComposeToolBarDelegate, WBCoreTextViewDelegate, WBTextEditorViewAutoScrollDelegate, WBArticleContentImageDatasource>
{
    UIScrollView *containerView;
    WBTextView *titleTextView;
    WBTextEditorView *contentTextView;
    WBArticleImagePickView *imagePickerView;
    WBDoubleLineNavigationBarTitleView *titleView;
    UILabel *wordCountLabel;
    UIImageView *wordCountBackground;
    UIImageView *separator;
    NSTimer *saveTimer;
    double keyBoardHeight;
    struct CGPoint savedScrollViewContentOffset;
    _Bool scrollViewDraging;
    WBArticle *_originArticle;
    _Bool contentModfied;
    struct {
        unsigned int pendingAttachmentUpdates:1;
        unsigned int setNeedsRelayoutViews:1;
    } _flags;
    _Bool _reEditMode;
    id <WBArticleComposeViewControllerDelegate> _delegate;
    WBArticle *_article;
    WBComposeToolbar *_composeToolbar;
    WBALAssetPickerContextManager *_coverImagePickerManager;
    WBALAssetPickerContextManager *_contentImagePickerManager;
}

@property(retain, nonatomic) WBALAssetPickerContextManager *contentImagePickerManager; // @synthesize contentImagePickerManager=_contentImagePickerManager;
@property(retain, nonatomic) WBALAssetPickerContextManager *coverImagePickerManager; // @synthesize coverImagePickerManager=_coverImagePickerManager;
@property(retain, nonatomic) WBComposeToolbar *composeToolbar; // @synthesize composeToolbar=_composeToolbar;
@property(retain, nonatomic) WBArticle *article; // @synthesize article=_article;
@property(nonatomic) _Bool reEditMode; // @synthesize reEditMode=_reEditMode;
@property(nonatomic) __weak id <WBArticleComposeViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)showErrorTips:(id)arg1 duration:(double)arg2;
- (void)showErrorTips:(id)arg1;
- (void)appWillTerminate:(id)arg1;
- (void)imageCacheManagerDidFailedToRestoreImageAssetNotification:(id)arg1;
- (void)articleImageAttachmentView:(id)arg1 didPressDeleteButtonForAttachment:(id)arg2;
- (void)_deleteImageAttachment:(id)arg1 targetRange:(struct _NSRange)arg2;
- (id)articleImageAttachmentView:(id)arg1 imageForAttachment:(id)arg2;
- (_Bool)coreTextView:(id)arg1 shouldInteractWithTextAttachment:(id)arg2;
- (id)coreTextView:(id)arg1 viewForTextAttachment:(id)arg2;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidBeginEditing:(id)arg1;
- (_Bool)coreTextView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)coreTextViewDidChange:(id)arg1;
- (void)coreTextViewDidBeginEditing:(id)arg1;
- (void)textEditorView:(id)arg1 autoscrollWithDeltaY:(double)arg2;
- (double)textEditorView:(id)arg1 distanceToYEdgeForTouchPoint:(struct CGPoint)arg2;
- (_Bool)textEditorView:(id)arg1 shouldPerformAutoscrollWithTouchPoint:(struct CGPoint)arg2;
- (void)WBALAssetPickerContextManagerCanceled:(id)arg1;
- (void)WBALAssetPickerContextManager:(id)arg1 finishedPickImageAttachments:(id)arg2;
- (void)articleImagePickViewImageDeleted:(id)arg1;
- (void)articleImagePickViewPickImage:(id)arg1;
- (void)articleImagePickViewImageChanged:(id)arg1;
- (void)finishPickingContentImages:(id)arg1;
- (void)startPickingContentImage;
- (void)coreTextViewDidTapBlank:(id)arg1;
- (void)composeToolBarDidSelectButton:(id)arg1 type:(unsigned long long)arg2;
- (void)_updateArticleAttachments;
- (void)setNeedsUpdateAttachments;
- (void)viewWillLayoutSubviews;
- (void)checkWordCountForTextView:(id)arg1;
- (void)scrollToTop;
- (void)closeKeyboard;
- (void)keyBoardChanged:(id)arg1;
- (void)setNeedsRelayoutViewsAnimated:(_Bool)arg1;
- (void)relayoutViewsAnimated:(_Bool)arg1;
- (void)comfirm:(id)arg1;
- (void)cancel:(id)arg1;
- (void)saveArticle:(id)arg1;
- (void)stopSaveTimer;
- (void)startSaveTimer;
- (void)restoreTextConentFromArticle:(id)arg1;
- (void)viewDidLoad;
- (id)initWithArticle:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

