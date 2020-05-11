//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBLiveWeexOverlayView.h"

@class NSDictionary, UIImageView, UILabel;
@protocol LiveRoomMediaPlayerProtocol;

@interface TBLivePrepareOverlayView : TBLiveWeexOverlayView
{
    id <LiveRoomMediaPlayerProtocol> _mediaPlayerAdapter;
    NSDictionary *_mediaPlayerOptions;
    UIImageView *_coverView;
    UIImageView *_statusFlagView;
    UILabel *_absentReason;
}

@property(retain, nonatomic) UILabel *absentReason; // @synthesize absentReason=_absentReason;
@property(retain, nonatomic) UIImageView *statusFlagView; // @synthesize statusFlagView=_statusFlagView;
@property(retain, nonatomic) UIImageView *coverView; // @synthesize coverView=_coverView;
@property(retain, nonatomic) NSDictionary *mediaPlayerOptions; // @synthesize mediaPlayerOptions=_mediaPlayerOptions;
@property(retain, nonatomic) id <LiveRoomMediaPlayerProtocol> mediaPlayerAdapter; // @synthesize mediaPlayerAdapter=_mediaPlayerAdapter;
- (void).cxx_destruct;
- (void)playerViewFullScreenEvent:(id)arg1 data:(id)arg2;
- (void)refreshLandscapeViewLayout;
- (id)playerView;
- (void)setPrepareMediaPlayerViewCallback;
- (_Bool)showLiveMessInfo;
- (void)refreshWithData:(id)arg1;
- (void)setupSubViews:(_Bool)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 controller:(id)arg2;

@end

