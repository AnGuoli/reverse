//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBComposeElement.h"

#import "WBStarRatingViewDelegate-Protocol.h"

@class NSArray, NSString, WBComposeRatingElementView;

@interface WBComposeRatingElement : WBComposeElement <WBStarRatingViewDelegate>
{
    float _draftScore;
    _Bool _disable;
    float _score;
    NSString *_ratingObjectId;
    NSArray *_ratingTitles;
}

@property(retain, nonatomic) NSArray *ratingTitles; // @synthesize ratingTitles=_ratingTitles;
@property(nonatomic) float score; // @synthesize score=_score;
@property(copy, nonatomic) NSString *ratingObjectId; // @synthesize ratingObjectId=_ratingObjectId;
@property(nonatomic) _Bool disable; // @synthesize disable=_disable;
- (void).cxx_destruct;
- (_Bool)contentChangeEffectsDraft;
- (void)starRatingView:(id)arg1 didClearRatingFrom:(double)arg2;
- (void)starRatingView:(id)arg1 didChangeRatingTo:(double)arg2;
- (void)saveComposeDataToJob:(id)arg1;
- (void)setupWithJob:(id)arg1;
- (void)viewDidLoad;
- (_Bool)contentHasChangedFromDraft;
- (_Bool)contenthasChangedFromDefault;
- (_Bool)hasContent;
- (id)defaultMap;
- (struct CGRect)viewInitFrame;
@property(readonly, nonatomic) WBComposeRatingElementView *ratingElementView;
- (Class)viewClass;
- (unsigned long long)characterCount;
- (id)initWithDictionary:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

