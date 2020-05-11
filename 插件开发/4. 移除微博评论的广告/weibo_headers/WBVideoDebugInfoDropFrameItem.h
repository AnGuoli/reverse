//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBVideoDebugInfoPlaybackEventBasedTextItem.h"

#import "WBVideoDebugInfoTimelineEventListener-Protocol.h"

@class NSString, WBFAsset, WBVideoDebugInfoTimeline;

@interface WBVideoDebugInfoDropFrameItem : WBVideoDebugInfoPlaybackEventBasedTextItem <WBVideoDebugInfoTimelineEventListener>
{
    WBVideoDebugInfoTimeline *_timeline;
}

+ (id)title;
@property(retain, nonatomic) WBVideoDebugInfoTimeline *timeline; // @synthesize timeline=_timeline;
- (void).cxx_destruct;
- (void)debugInfoTimeline:(id)arg1 didUpdateCurrentTime:(double)arg2;
- (id)currentTextValue;
@property(readonly, nonatomic) WBFAsset *currentAsset;
- (id)initWithDebugInfoContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

