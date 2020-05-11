//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "NSCopying-Protocol.h"
#import "UITextViewDelegate-Protocol.h"
#import "WBStoryDraftStickerProtocol-Protocol.h"
#import "WBTextViewDelegate-Protocol.h"

@class NSMutableArray, NSString, UIFont, WBModelObject, WBStoryColorPickerModel, WBStoryLayoutManager, WBStoryTextView;
@protocol WBStoryDraftStickerViewModelProtocol, WBStoryTextStickerDelegate;

@interface WBStoryTextSticker : UIView <UITextViewDelegate, WBTextViewDelegate, NSCopying, WBStoryDraftStickerProtocol>
{
    _Bool _shouldUpdateCursor;
    WBModelObject<WBStoryDraftStickerViewModelProtocol> *_viewModel;
    WBStoryTextView *_textView;
    NSMutableArray *_contactArray;
    WBStoryColorPickerModel *_colorPickerModel;
    unsigned long long _textBackgroundStyle;
    id <WBStoryTextStickerDelegate> _delegate;
    WBStoryLayoutManager *_layoutManager;
}

@property(nonatomic) _Bool shouldUpdateCursor; // @synthesize shouldUpdateCursor=_shouldUpdateCursor;
@property(retain, nonatomic) WBStoryLayoutManager *layoutManager; // @synthesize layoutManager=_layoutManager;
@property(nonatomic) __weak id <WBStoryTextStickerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long textBackgroundStyle; // @synthesize textBackgroundStyle=_textBackgroundStyle;
@property(retain, nonatomic) WBStoryColorPickerModel *colorPickerModel; // @synthesize colorPickerModel=_colorPickerModel;
@property(retain, nonatomic) NSMutableArray *contactArray; // @synthesize contactArray=_contactArray;
@property(retain, nonatomic) WBStoryTextView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) WBModelObject<WBStoryDraftStickerViewModelProtocol> *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)textViewDidChangeSelection:(id)arg1;
- (_Bool)updateTextViewSelectedRange;
- (struct _NSRange)selectedText:(id)arg1 location:(unsigned long long)arg2;
- (void)textViewDidChange:(id)arg1;
- (void)textViewHeightChanged:(id)arg1;
- (void)textView:(id)arg1 willChangeHeight:(long long)arg2;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)removeUnderlineAtRange:(struct _NSRange)arg1;
- (void)setContact:(id)arg1 atRange:(struct _NSRange)arg2;
- (id)contactAtRange:(struct _NSRange)arg1;
- (_Bool)resignFirstResponder;
- (_Bool)isFirstResponder;
- (void)updateFrame;
- (void)setBounds:(struct CGRect)arg1;
- (void)extendTextViewWithSize:(struct CGSize)arg1;
- (void)setTextViewNeedsDisplay;
@property(retain, nonatomic) UIFont *font;
@property(nonatomic) long long textAlignment;
- (void)_updateColorForTextView;
- (void)setUnderlined:(_Bool)arg1 range:(struct _NSRange)arg2;
- (void)setup;
- (id)initWithViewModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

