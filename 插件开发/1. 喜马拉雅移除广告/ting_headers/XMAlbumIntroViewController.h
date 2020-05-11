//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMSubLevelViewController.h"

#import "XMAlbumIntroViewDelegate-Protocol.h"

@class NSDictionary, NSString, UIButton, XMAVPlayer, XMAlbumIntroView, XMAlbumItem;

@interface XMAlbumIntroViewController : XMSubLevelViewController <XMAlbumIntroViewDelegate>
{
    double _height;
    UIButton *_shareButton;
    XMAlbumItem *_albumItem;
    NSDictionary *_introVideo;
    XMAlbumIntroView *_albumInfoView;
    XMAVPlayer *_currentVideoPlayer;
}

@property(retain, nonatomic) XMAVPlayer *currentVideoPlayer; // @synthesize currentVideoPlayer=_currentVideoPlayer;
@property(retain, nonatomic) XMAlbumIntroView *albumInfoView; // @synthesize albumInfoView=_albumInfoView;
@property(retain, nonatomic) NSDictionary *introVideo; // @synthesize introVideo=_introVideo;
@property(retain, nonatomic) XMAlbumItem *albumItem; // @synthesize albumItem=_albumItem;
- (void).cxx_destruct;
- (id)playerOfView:(id)arg1;
- (void)didTapPlayButton:(id)arg1;
- (void)sliderChange:(id)arg1;
- (void)fullScreenButtonTap:(id)arg1;
- (void)muteButtonTap:(id)arg1;
- (void)playButtonTap:(id)arg1;
- (void)albumInfoCell:(id)arg1 openURL:(id)arg2;
- (void)setInfoViewPos:(double)arg1;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (_Bool)isPlaying;
- (_Bool)seekToTime:(double)arg1;
- (void)stop;
- (void)pause;
- (void)play;
- (void)onLivePlayerDidStart;
- (void)onDynamicVideoWillPlayNotification;
- (void)onSoundChatPlayNotify;
- (void)onWeKeEnterRoom;
- (void)appWillResignActive:(id)arg1;
- (void)onPlayerDidPlaying:(id)arg1;
- (void)onPlayerPausedOrPlaying:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

