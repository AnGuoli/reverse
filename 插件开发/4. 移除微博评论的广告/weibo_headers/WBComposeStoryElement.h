//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBComposeElement.h"

@class WBStoryItemSegment;

@interface WBComposeStoryElement : WBComposeElement
{
    WBStoryItemSegment *_segment;
}

@property(retain, nonatomic) WBStoryItemSegment *segment; // @synthesize segment=_segment;
- (void).cxx_destruct;
- (_Bool)contentHasChangedFromDraft;
- (void)viewDidLoad;
- (void)setupWithJob:(id)arg1;
- (void)saveComposeDataToJob:(id)arg1;
- (id)defaultMap;
- (struct CGRect)viewInitFrame;
- (unsigned long long)characterCount;
- (id)storyElementView;
- (Class)viewClass;

@end

