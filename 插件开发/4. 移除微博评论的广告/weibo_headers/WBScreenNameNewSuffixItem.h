//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBModelObject.h"

@class NSArray, NSDictionary, NSString, UIColor;

@interface WBScreenNameNewSuffixItem : WBModelObject
{
    _Bool _enableTruncated;
    _Bool _isAbbrivated;
    int _itemType;
    int _iconType;
    NSString *_text;
    NSString *_remark;
    NSString *_finalText;
    NSString *_abbrivatedText;
    NSString *_scheme;
    NSArray *_icons;
    UIColor *_color;
    NSDictionary *_actionlog;
    unsigned long long _keepWordEndLength;
    struct _NSRange _range;
}

@property(nonatomic) _Bool isAbbrivated; // @synthesize isAbbrivated=_isAbbrivated;
@property(nonatomic) unsigned long long keepWordEndLength; // @synthesize keepWordEndLength=_keepWordEndLength;
@property(nonatomic) _Bool enableTruncated; // @synthesize enableTruncated=_enableTruncated;
@property(retain, nonatomic) NSDictionary *actionlog; // @synthesize actionlog=_actionlog;
@property(nonatomic) struct _NSRange range; // @synthesize range=_range;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(nonatomic) int iconType; // @synthesize iconType=_iconType;
@property(retain, nonatomic) NSArray *icons; // @synthesize icons=_icons;
@property(retain, nonatomic) NSString *scheme; // @synthesize scheme=_scheme;
@property(retain, nonatomic) NSString *abbrivatedText; // @synthesize abbrivatedText=_abbrivatedText;
@property(retain, nonatomic) NSString *finalText; // @synthesize finalText=_finalText;
@property(retain, nonatomic) NSString *remark; // @synthesize remark=_remark;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) int itemType; // @synthesize itemType=_itemType;
- (void).cxx_destruct;
- (_Bool)updateWithDictionary:(id)arg1;
- (id)description;

@end

