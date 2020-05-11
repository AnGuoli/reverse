//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVPlayer;
@protocol EditVideoBGMPlayerDelegate;

@interface EditVideoBGMPlayer : NSObject
{
    _Bool _hasReadyToPlayObserver;
    id <EditVideoBGMPlayerDelegate> _delegate;
    AVPlayer *_player;
}

@property(nonatomic) _Bool hasReadyToPlayObserver; // @synthesize hasReadyToPlayObserver=_hasReadyToPlayObserver;
@property(retain, nonatomic) AVPlayer *player; // @synthesize player=_player;
@property(nonatomic) __weak id <EditVideoBGMPlayerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)downloadMusic:(id)arg1;
- (void)replayMusic;
- (void)onEditVideoBGMPlayerPlaytoEnd;
- (void)pause;
- (void)playMusic:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)removeCurrentItemReadyToPlayObserver;
- (void)addCurrentItemReadyToPlayObserver;
- (void)dealloc;

@end

