//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBModelObject.h"

@class NSAttributedString, NSString;

@interface WBNoteParagraphInfo : WBModelObject
{
    _Bool _isLastOne;
    long long _style;
    NSString *_imageUrl;
    NSAttributedString *_attributedText;
    double _height;
    NSString *_imageDescription;
}

+ (id)objectWithDictionary:(id)arg1;
@property(copy, nonatomic) NSString *imageDescription; // @synthesize imageDescription=_imageDescription;
@property(nonatomic) double height; // @synthesize height=_height;
@property(copy, nonatomic) NSAttributedString *attributedText; // @synthesize attributedText=_attributedText;
@property(copy, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(nonatomic) _Bool isLastOne; // @synthesize isLastOne=_isLastOne;
@property(nonatomic) long long style; // @synthesize style=_style;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (_Bool)updateWithDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

