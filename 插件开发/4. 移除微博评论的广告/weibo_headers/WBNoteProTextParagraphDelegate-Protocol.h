//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"
#import "WBNoteProParagraphDelegate-Protocol.h"

@class NSAttributedString, UITextView, WBNoteProTextParagraph;

@protocol WBNoteProTextParagraphDelegate <WBNoteProParagraphDelegate, NSObject>
- (void)textViewCursorDidChange:(UITextView *)arg1;
- (void)textParagraphDidChangeSelection:(WBNoteProTextParagraph *)arg1;
- (void)textParagraphDidBeginEditing:(WBNoteProTextParagraph *)arg1;
- (void)textParagraphNeedConvertToUnorderList:(WBNoteProTextParagraph *)arg1;
- (void)textParagraphDidBackspaceAtHeader:(WBNoteProTextParagraph *)arg1;
- (NSAttributedString *)placeholderForContent;
- (_Bool)textParagraphIsTheOnlyParagraph;
@end

