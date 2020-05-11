//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable, UIView, WBVideoPlayerLog, WBViewController;
@protocol WBVideoPlayerSourceView;

@interface WBVideoLogInfoCollector : NSObject
{
    NSMapTable *_vcPlaybackLogMap;
    WBViewController *_lastLogCreatedViewController;
    WBViewController *_playbackViewController;
    WBVideoPlayerLog *_logCommitedDuringScheme;
    UIView<WBVideoPlayerSourceView> *_schemeFromSourceView;
}

+ (id)sharedCollector;
@property(nonatomic) __weak UIView<WBVideoPlayerSourceView> *schemeFromSourceView; // @synthesize schemeFromSourceView=_schemeFromSourceView;
@property(retain, nonatomic) WBVideoPlayerLog *logCommitedDuringScheme; // @synthesize logCommitedDuringScheme=_logCommitedDuringScheme;
@property(nonatomic) __weak WBViewController *playbackViewController; // @synthesize playbackViewController=_playbackViewController;
@property(nonatomic) __weak WBViewController *lastLogCreatedViewController; // @synthesize lastLogCreatedViewController=_lastLogCreatedViewController;
@property(retain, nonatomic) NSMapTable *vcPlaybackLogMap; // @synthesize vcPlaybackLogMap=_vcPlaybackLogMap;
- (void).cxx_destruct;
- (_Bool)checkShouldUploadPlayerLogWithVC:(id)arg1;
- (void)playerWillGoToAnotherPage:(id)arg1;
- (void)playerLogDidTransfer:(id)arg1;
- (void)playerLogDidCommit:(id)arg1;
- (void)playerLogDidCreate:(id)arg1;
- (void)viewControllerStateDidChange:(id)arg1;
- (id)init;

@end

