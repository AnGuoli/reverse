//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBComposeElement.h"

@class NSString, WBComposeCheckElementView;

@interface WBComposeCheckElement : WBComposeElement
{
    _Bool _CheckOn;
    unsigned long long _checkType;
    NSString *_content;
}

@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(nonatomic) unsigned long long checkType; // @synthesize checkType=_checkType;
- (void).cxx_destruct;
- (void)checkboxButtonPressed:(id)arg1;
- (void)saveComposeDataToJob:(id)arg1;
- (void)setupWithJob:(id)arg1;
@property(nonatomic) _Bool CheckOn; // @synthesize CheckOn=_CheckOn;
- (_Bool)contentHasChangedFromDraft;
- (void)viewDidLoad;
- (id)defaultMap;
- (struct CGRect)viewInitFrame;
@property(readonly, nonatomic) WBComposeCheckElementView *checkElementView;
- (Class)viewClass;

@end

