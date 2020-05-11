//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBModelObject.h"

@class NSString, UIColor, UIFont;

@interface WBScreenNameSurfixItem : WBModelObject
{
    _Bool _isAbbrivated;
    int _itemType;
    NSString *_text;
    NSString *_abbrivatedText;
    NSString *_scheme;
    UIColor *_color;
    UIFont *_font;
    struct _NSRange _range;
}

@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(nonatomic) struct _NSRange range; // @synthesize range=_range;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(nonatomic) _Bool isAbbrivated; // @synthesize isAbbrivated=_isAbbrivated;
@property(retain, nonatomic) NSString *scheme; // @synthesize scheme=_scheme;
@property(retain, nonatomic) NSString *abbrivatedText; // @synthesize abbrivatedText=_abbrivatedText;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) int itemType; // @synthesize itemType=_itemType;
- (void).cxx_destruct;
- (id)description;

@end

