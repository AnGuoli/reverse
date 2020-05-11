//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBTableView.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSMutableDictionary, NSString, UIButton, UIColor, UIView, WBCustomActionSheetItem, WBUnifiedActionSheetCancelButton;

@interface WBUnifiedActionSheet : WBTableView <UITableViewDataSource, UITableViewDelegate>
{
    double startOffset;
    double startContainerViewTop;
    double startime;
    double dismissToplineY;
    double allDisplayTopLineY;
    _Bool _blurEffect;
    _Bool _hasHandledCloseAction;
    long long _sheetStyle;
    UIColor *_blurEffectColor;
    UIColor *_cancelButtonBackgroundColor;
    UIColor *_cancelButtonHighlightedBackgroundColor;
    UIColor *_cancelButtonTitleColor;
    CDUnknownBlockType _unDimHandler;
    WBCustomActionSheetItem *_selectedItem;
    NSMutableDictionary *_items;
    UIView *_contentView;
    WBUnifiedActionSheetCancelButton *_cancelButton;
    UIView *_popupView;
    CDUnknownBlockType _completionHandler;
    UIButton *_containerView;
}

@property(nonatomic) __weak UIButton *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) _Bool hasHandledCloseAction; // @synthesize hasHandledCloseAction=_hasHandledCloseAction;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(nonatomic) __weak UIView *popupView; // @synthesize popupView=_popupView;
@property(retain, nonatomic) WBUnifiedActionSheetCancelButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) NSMutableDictionary *items; // @synthesize items=_items;
@property(retain, nonatomic) WBCustomActionSheetItem *selectedItem; // @synthesize selectedItem=_selectedItem;
@property(copy, nonatomic) CDUnknownBlockType unDimHandler; // @synthesize unDimHandler=_unDimHandler;
@property(retain, nonatomic) UIColor *cancelButtonTitleColor; // @synthesize cancelButtonTitleColor=_cancelButtonTitleColor;
@property(retain, nonatomic) UIColor *cancelButtonHighlightedBackgroundColor; // @synthesize cancelButtonHighlightedBackgroundColor=_cancelButtonHighlightedBackgroundColor;
@property(retain, nonatomic) UIColor *cancelButtonBackgroundColor; // @synthesize cancelButtonBackgroundColor=_cancelButtonBackgroundColor;
@property(copy, nonatomic) UIColor *blurEffectColor; // @synthesize blurEffectColor=_blurEffectColor;
@property(nonatomic) _Bool blurEffect; // @synthesize blurEffect=_blurEffect;
@property(nonatomic) long long sheetStyle; // @synthesize sheetStyle=_sheetStyle;
- (void).cxx_destruct;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)doAnimation:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dismissCompletionOperation;
- (void)dismissWithAnimation:(_Bool)arg1;
- (void)dismiss;
- (void)didSelectedItem:(id)arg1;
- (void)cancel:(id)arg1;
- (double)actionSheetContentHeight;
- (void)configSubview:(id)arg1;
- (double)maxAllowedHeight:(struct CGSize)arg1;
- (double)defaultTableViewBaseInsetTop;
- (void)showInViewController:(id)arg1 withUnDimHandler:(CDUnknownBlockType)arg2 withImage:(id)arg3;
- (void)showInViewController:(id)arg1 withUnDimHandler:(CDUnknownBlockType)arg2;
- (void)showInViewController:(id)arg1;
- (void)showWithUnDimHandler:(CDUnknownBlockType)arg1;
- (void)show;
- (void)handleCloseAction:(id)arg1;
- (void)addCancelButtonWithTitle:(id)arg1 atSection:(long long)arg2 selected:(CDUnknownBlockType)arg3;
- (void)addCancelButtonWithTitle:(id)arg1 atSection:(long long)arg2;
- (void)addContentView:(id)arg1 atSection:(long long)arg2;
- (void)addActionSheetItem:(id)arg1 atSection:(long long)arg2 atIndex:(id)arg3;
- (void)addDragIndicatorHeaderAtSection:(unsigned long long)arg1;
- (id)init;
- (void)setBackgroundColor:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

