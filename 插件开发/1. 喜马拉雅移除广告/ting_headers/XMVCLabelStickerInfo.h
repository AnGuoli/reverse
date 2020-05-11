//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMVCStickerInfo.h"

@class NSString;

@interface XMVCLabelStickerInfo : XMVCStickerInfo
{
    unsigned int _textColor;
    NSString *_text;
    double _fontSize;
    NSString *_fontPath;
    NSString *_fontName;
    NSString *_fontDisplayName;
    double _orignMaxWidth;
}

@property(nonatomic) double orignMaxWidth; // @synthesize orignMaxWidth=_orignMaxWidth;
@property(copy, nonatomic) NSString *fontDisplayName; // @synthesize fontDisplayName=_fontDisplayName;
@property(copy, nonatomic) NSString *fontName; // @synthesize fontName=_fontName;
@property(copy, nonatomic) NSString *fontPath; // @synthesize fontPath=_fontPath;
@property(nonatomic) double fontSize; // @synthesize fontSize=_fontSize;
@property(nonatomic) unsigned int textColor; // @synthesize textColor=_textColor;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)scale:(double)arg1;
@property(readonly, nonatomic) double scale;
- (_Bool)isEmpty;
- (id)init;

@end

