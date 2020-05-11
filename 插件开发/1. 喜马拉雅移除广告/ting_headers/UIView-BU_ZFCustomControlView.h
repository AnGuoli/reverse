//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@protocol BU_ZFPlayerControlViewDelagate;

@interface UIView (BU_ZFCustomControlView)
- (_Bool)buzf_showSlideProgress;
- (void)buzf_setShouldAutoRotate:(_Bool)arg1;
- (void)buzf_playerCellPlay;
- (void)buzf_playerBottomShrinkPlay;
- (void)buzf_playerItemStatusFailed:(id)arg1;
- (void)buzf_playerSetProgress:(double)arg1;
- (void)buzf_playerCurrentTime:(long long)arg1 totalTime:(long long)arg2 sliderValue:(double)arg3;
- (void)buzf_playerDraggedEnd;
- (void)buzf_playerDraggedTime:(long long)arg1 totalTime:(long long)arg2 isForward:(_Bool)arg3 hasPreview:(_Bool)arg4;
- (void)buzf_playerDraggedTime:(long long)arg1 sliderImage:(id)arg2;
- (void)buzf_playerActivity:(_Bool)arg1;
- (void)buzf_playerLockBtnState:(_Bool)arg1;
- (void)buzf_playerPlayBtnState:(_Bool)arg1;
- (void)buzf_playerResolutionArray:(id)arg1;
- (void)buzf_playerDownloadBtnState:(_Bool)arg1;
- (void)buzf_playerPlayEnd;
- (void)buzf_playerItemPlaying;
- (void)buzf_playerCancelAutoFadeOutControlView;
- (void)buzf_playerResetControlView;
- (void)buzf_playerHideControlView;
- (void)buzf_playerShowControlView;
- (void)buzf_playerShowOrHideControlView;
- (void)buzf_playerModel:(id)arg1;
@property(nonatomic) __weak id <BU_ZFPlayerControlViewDelagate> buzf_delegate;
@end

