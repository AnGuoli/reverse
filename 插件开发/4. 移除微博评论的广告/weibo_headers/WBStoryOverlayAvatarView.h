//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class WBStoryItemSegment, WBStoryUserView, WBVVSAvatarView;

@interface WBStoryOverlayAvatarView : UIControl
{
    WBStoryItemSegment *_segment;
    WBStoryUserView *_userView;
    WBVVSAvatarView *_liveUserView;
}

@property(retain, nonatomic) WBVVSAvatarView *liveUserView; // @synthesize liveUserView=_liveUserView;
@property(retain, nonatomic) WBStoryUserView *userView; // @synthesize userView=_userView;
@property(retain, nonatomic) WBStoryItemSegment *segment; // @synthesize segment=_segment;
- (void).cxx_destruct;
- (void)stopAnimateAvatarIfNeed;
- (void)startAnimateAvatarIfNeed;
- (void)updateWithstatus:(id)arg1;
- (void)updateWithSegment:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

