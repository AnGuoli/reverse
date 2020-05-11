//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBXMixComponent.h"

@class NSString, WBVideoItem, WBXMixVideoController, WBXVideoView;

@interface WBXMixVideoComponent : WBXMixComponent
{
    WBVideoItem *videoItem;
    WBXMixVideoController *controller;
    WBXVideoView *videoView;
    NSString *src;
    unsigned long long initialTime;
    unsigned long long duration;
    _Bool controls;
    _Bool autoplay;
    _Bool loop;
    _Bool muted;
    _Bool pageGesture;
    unsigned long long direction;
    _Bool showProgress;
    _Bool showFullsreenBtn;
    _Bool showPlayBtn;
    _Bool showcenterPlayBtn;
    _Bool enableProgressGesture;
    NSString *objctFit;
}

- (void).cxx_destruct;
- (void)didTimeUpdate;
- (void)didEnded;
- (void)didPause;
- (void)didPlay;
- (void)timeUpdate;
- (void)ended;
- (void)pause;
- (void)updateAtrributes:(id)arg1 value:(id)arg2;
- (id)loadView;
- (void)play;
- (id)initWithRef:(id)arg1 type:(id)arg2 attributes:(id)arg3 events:(id)arg4 page:(id)arg5;

@end

