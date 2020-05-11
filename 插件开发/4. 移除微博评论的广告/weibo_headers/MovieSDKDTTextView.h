//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "HighlightTextGroupDelegate-Protocol.h"

@class MovieSDKHighlightTextGroupAttribute, NSAttributedString, NSMutableAttributedString, NSMutableDictionary, NSMutableParagraphStyle, NSMutableString, NSString, UIColor, UIFont;

@interface MovieSDKDTTextView : UIView <HighlightTextGroupDelegate>
{
    NSMutableAttributedString *_attributedString;
    NSMutableString *_text;
    struct CGRect _textRect;
    struct __CTFrame *_ctFrameRef;
    MovieSDKHighlightTextGroupAttribute *_touchingAttr;
    UIFont *_font;
    UIColor *_textColor;
    NSMutableParagraphStyle *_paragraphStyle;
    long long _numberOfLines;
    double _lastLineTailSpace;
    NSAttributedString *_lastLineTailString;
    long long _textLine;
    NSMutableDictionary *_attributes;
    struct UIEdgeInsets _contentInset;
}

@property(retain, nonatomic) NSMutableDictionary *attributes; // @synthesize attributes=_attributes;
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
@property(nonatomic) long long textLine; // @synthesize textLine=_textLine;
@property(retain, nonatomic) NSAttributedString *lastLineTailString; // @synthesize lastLineTailString=_lastLineTailString;
@property(nonatomic) double lastLineTailSpace; // @synthesize lastLineTailSpace=_lastLineTailSpace;
@property(nonatomic) long long numberOfLines; // @synthesize numberOfLines=_numberOfLines;
@property(retain, nonatomic) NSMutableParagraphStyle *paragraphStyle; // @synthesize paragraphStyle=_paragraphStyle;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
- (void).cxx_destruct;
- (void)onClicked:(id)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)getHighLightTextGroupAttrAtPoint:(const struct CGPoint *)arg1;
- (struct _NSRange)closestPositionToPoint:(struct CGPoint)arg1;
- (void)drawRect:(struct CGRect)arg1 radio:(double)arg2 onContext:(struct CGContext *)arg3;
- (void)drawRect:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
@property(retain, nonatomic) NSString *text;
@property(retain, nonatomic) NSMutableAttributedString *attributedText;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

