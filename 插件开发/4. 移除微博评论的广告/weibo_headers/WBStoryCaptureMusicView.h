//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBStoryOverlayViewBase.h"

#import "WBStoryCameraManagerStateListener-Protocol.h"
#import "WBStoryMusicEditViewControllerDelegate-Protocol.h"
#import "WBStoryMusicPickerViewDelegate-Protocol.h"
#import "WBStorySaveProgressHUDViewDelegate-Protocol.h"

@class AVAudioPlayer, NSString, UIView, WBStoryMusicItem;
@protocol WBCameraProtocol, WBStoryCaptureMusicViewDelegate, WBStoryMusicPickerActionDelegate;

@interface WBStoryCaptureMusicView : WBStoryOverlayViewBase <WBStoryMusicPickerViewDelegate, WBStoryCameraManagerStateListener, WBStoryMusicEditViewControllerDelegate, WBStorySaveProgressHUDViewDelegate>
{
    _Bool _musicNeedCut;
    _Bool _playingByUser;
    _Bool _needSelectDefaultMusicItem;
    _Bool _needResumeAudioStreamPlayer;
    NSString *_defaultMusicID;
    WBStoryMusicItem *_selectedItem;
    id <WBCameraProtocol> _cameraManager;
    WBStoryMusicItem *_defaultMusicItem;
    unsigned long long _businessType;
    id <WBStoryCaptureMusicViewDelegate> _delegate;
    UIView<WBStoryMusicPickerActionDelegate> *_pickerView;
    WBStoryMusicItem *_playingItem;
    WBStoryMusicItem *_pendingItem;
    AVAudioPlayer *_audioPlayer;
}

@property(nonatomic) _Bool needResumeAudioStreamPlayer; // @synthesize needResumeAudioStreamPlayer=_needResumeAudioStreamPlayer;
@property(nonatomic) _Bool needSelectDefaultMusicItem; // @synthesize needSelectDefaultMusicItem=_needSelectDefaultMusicItem;
@property(nonatomic) _Bool playingByUser; // @synthesize playingByUser=_playingByUser;
@property(retain, nonatomic) AVAudioPlayer *audioPlayer; // @synthesize audioPlayer=_audioPlayer;
@property(retain, nonatomic) WBStoryMusicItem *pendingItem; // @synthesize pendingItem=_pendingItem;
@property(retain, nonatomic) WBStoryMusicItem *playingItem; // @synthesize playingItem=_playingItem;
@property(retain, nonatomic) UIView<WBStoryMusicPickerActionDelegate> *pickerView; // @synthesize pickerView=_pickerView;
@property(nonatomic) __weak id <WBStoryCaptureMusicViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long businessType; // @synthesize businessType=_businessType;
@property(retain, nonatomic) WBStoryMusicItem *defaultMusicItem; // @synthesize defaultMusicItem=_defaultMusicItem;
@property(nonatomic) __weak id <WBCameraProtocol> cameraManager; // @synthesize cameraManager=_cameraManager;
@property(retain, nonatomic) WBStoryMusicItem *selectedItem; // @synthesize selectedItem=_selectedItem;
@property(retain, nonatomic) NSString *defaultMusicID; // @synthesize defaultMusicID=_defaultMusicID;
@property(nonatomic) _Bool musicNeedCut; // @synthesize musicNeedCut=_musicNeedCut;
- (void).cxx_destruct;
- (void)keyWindowDidChangeNotifi:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)removeObservers;
- (void)addObservers;
- (void)musicPickerViewWillEditMusic;
- (void)musicPickerViewShouldPausePlayerIfNeed;
- (void)musicPickerViewDidDismiss:(id)arg1;
- (void)musicPickerView:(id)arg1 didSelectMusicItem:(id)arg2;
- (void)musicPickerView:(id)arg1 didTapMusicItem:(id)arg2;
- (void)resume;
- (void)pause;
- (void)play:(id)arg1 time:(double)arg2 rate:(double)arg3 loop:(_Bool)arg4;
- (void)setPlayingItem:(id)arg1 time:(double)arg2 rate:(double)arg3 loop:(_Bool)arg4;
- (void)resetAudioSession:(CDUnknownBlockType)arg1;
- (void)configAudioSession;
- (void)resumeOtherAudioPlayerIfNeeded;
- (void)stopOtherAudioPlayer;
- (void)reset;
- (void)viewWillDisappear;
- (void)viewWillAppear;
- (double)hiddenAnimationDuration;
- (double)displayAnimationDuration;
- (void)delegateDidEndLoading;
- (void)delegateDidStartLoading;
- (void)storySaveProgressHUDViewDidCancel:(id)arg1;
- (void)storyMusicEditViewController:(id)arg1 didSelectedMusisItem:(id)arg2;
- (void)setupPickerViewIfNeeded;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

