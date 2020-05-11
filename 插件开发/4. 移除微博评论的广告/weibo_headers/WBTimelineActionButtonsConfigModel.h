//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBModelObject.h"

@class NSString, UIColor, UIImage;

@interface WBTimelineActionButtonsConfigModel : WBModelObject
{
    UIColor *_textColor;
    UIColor *_textDisableColor;
    UIColor *_backgroundColor;
    UIImage *_backgroundHighlightedImage;
    NSString *_retweetIcon;
    NSString *_retweetDisableIcon;
    NSString *_commentIcon;
    NSString *_commentDisableIcon;
    NSString *_shareIcon;
    NSString *_shareDisableIcon;
}

@property(copy, nonatomic) NSString *shareDisableIcon; // @synthesize shareDisableIcon=_shareDisableIcon;
@property(copy, nonatomic) NSString *shareIcon; // @synthesize shareIcon=_shareIcon;
@property(copy, nonatomic) NSString *commentDisableIcon; // @synthesize commentDisableIcon=_commentDisableIcon;
@property(copy, nonatomic) NSString *commentIcon; // @synthesize commentIcon=_commentIcon;
@property(copy, nonatomic) NSString *retweetDisableIcon; // @synthesize retweetDisableIcon=_retweetDisableIcon;
@property(copy, nonatomic) NSString *retweetIcon; // @synthesize retweetIcon=_retweetIcon;
@property(retain, nonatomic) UIImage *backgroundHighlightedImage; // @synthesize backgroundHighlightedImage=_backgroundHighlightedImage;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) UIColor *textDisableColor; // @synthesize textDisableColor=_textDisableColor;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
- (void).cxx_destruct;
- (id)blackBackgroundHighlightedImage;
- (id)whitebackgroundHighlightedImage;
- (id)initWithStyle:(unsigned long long)arg1;

@end

