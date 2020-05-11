//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBUIControl.h"

@class NSShadow, NSString, UIColor, UIFont;

@interface WBStoryLabel : WBUIControl
{
    _Bool _hitTestForTextContent;
    NSString *_text;
    UIFont *_font;
    UIColor *_textColor;
    long long _textAlignment;
    NSShadow *_shadow;
    CDUnknownBlockType _drawFinishedBlock;
    struct CGRect _textContentRect;
}

@property(nonatomic) _Bool hitTestForTextContent; // @synthesize hitTestForTextContent=_hitTestForTextContent;
@property(copy, nonatomic) CDUnknownBlockType drawFinishedBlock; // @synthesize drawFinishedBlock=_drawFinishedBlock;
@property(nonatomic) struct CGRect textContentRect; // @synthesize textContentRect=_textContentRect;
@property(retain, nonatomic) NSShadow *shadow; // @synthesize shadow=_shadow;
@property(nonatomic) long long textAlignment; // @synthesize textAlignment=_textAlignment;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)currentDrawingUserInfo;
- (void)drawingDidFinishAsynchronously:(_Bool)arg1 success:(_Bool)arg2;
- (_Bool)drawInRect:(struct CGRect)arg1 withContext:(struct CGContext *)arg2 asynchronously:(_Bool)arg3 userInfo:(id)arg4;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

