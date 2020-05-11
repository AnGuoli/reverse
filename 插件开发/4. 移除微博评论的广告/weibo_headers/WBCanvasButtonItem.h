//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBModelObject.h"

@class NSDictionary, NSString;

@interface WBCanvasButtonItem : WBModelObject
{
    float _marginTop;
    float _marginBottom;
    float _marginRight;
    float _marginLeft;
    NSString *_btnText;
    NSString *_btnTextColor;
    long long _btnTextSize;
    NSString *_bgImage;
    NSString *_bgColor;
    NSString *_btnScheme;
    NSDictionary *_btnActLog;
}

@property(retain, nonatomic) NSDictionary *btnActLog; // @synthesize btnActLog=_btnActLog;
@property(nonatomic) float marginLeft; // @synthesize marginLeft=_marginLeft;
@property(nonatomic) float marginRight; // @synthesize marginRight=_marginRight;
@property(nonatomic) float marginBottom; // @synthesize marginBottom=_marginBottom;
@property(nonatomic) float marginTop; // @synthesize marginTop=_marginTop;
@property(retain, nonatomic) NSString *btnScheme; // @synthesize btnScheme=_btnScheme;
@property(retain, nonatomic) NSString *bgColor; // @synthesize bgColor=_bgColor;
@property(retain, nonatomic) NSString *bgImage; // @synthesize bgImage=_bgImage;
@property(nonatomic) long long btnTextSize; // @synthesize btnTextSize=_btnTextSize;
@property(retain, nonatomic) NSString *btnTextColor; // @synthesize btnTextColor=_btnTextColor;
@property(retain, nonatomic) NSString *btnText; // @synthesize btnText=_btnText;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (_Bool)updateWithDictionary:(id)arg1;

@end

