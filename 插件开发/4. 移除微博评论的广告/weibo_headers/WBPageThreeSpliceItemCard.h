//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBPageCard.h"

@class NSString;

@interface WBPageThreeSpliceItemCard : WBPageCard
{
    _Bool _isBigPic;
    unsigned long long _itemType;
    NSString *_icon;
    NSString *_pic;
    NSString *_title;
    NSString *_desc;
}

+ (Class)viewClass;
@property(nonatomic) _Bool isBigPic; // @synthesize isBigPic=_isBigPic;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *pic; // @synthesize pic=_pic;
@property(retain, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(nonatomic) unsigned long long itemType; // @synthesize itemType=_itemType;
- (void).cxx_destruct;
- (_Bool)updateWithDictionary:(id)arg1;

@end

