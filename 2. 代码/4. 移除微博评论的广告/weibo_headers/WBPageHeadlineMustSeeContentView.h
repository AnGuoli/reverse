//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "WBVideoPlayerSourceView-Protocol.h"

@class CAGradientLayer, NSDictionary, NSOrderedSet, NSString, WBStatus, WBTimelineAttributedText, WBTimelineAttributedTextView, WBTimelinePageInfo, WBTimelineRankListSubCellImageView;
@protocol WBMediaPlaybackItem;

@interface WBPageHeadlineMustSeeContentView : UIView <WBVideoPlayerSourceView>
{
    WBStatus *_status;
    long long _descType;
    WBTimelineRankListSubCellImageView *_coverView;
    WBTimelineAttributedTextView *_titleView;
    WBTimelineAttributedText *_titleText;
    WBTimelineAttributedTextView *_nameView;
    WBTimelineAttributedText *_nameLabelText;
    WBTimelineAttributedTextView *_subtitleView;
    WBTimelineAttributedText *_subtitleText;
    WBTimelineAttributedTextView *_durationView;
    WBTimelineAttributedText *_durationLabelText;
    CAGradientLayer *_coverViewGradientLayer;
    UIView *_durationBackgroundView;
    UIView *_maskView;
}

+ (id)timelineContentWithStatus:(id)arg1;
+ (id)pictureForPageInfo:(id)arg1;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) UIView *durationBackgroundView; // @synthesize durationBackgroundView=_durationBackgroundView;
@property(retain, nonatomic) CAGradientLayer *coverViewGradientLayer; // @synthesize coverViewGradientLayer=_coverViewGradientLayer;
@property(retain, nonatomic) WBTimelineAttributedText *durationLabelText; // @synthesize durationLabelText=_durationLabelText;
@property(retain, nonatomic) WBTimelineAttributedTextView *durationView; // @synthesize durationView=_durationView;
@property(retain, nonatomic) WBTimelineAttributedText *subtitleText; // @synthesize subtitleText=_subtitleText;
@property(retain, nonatomic) WBTimelineAttributedTextView *subtitleView; // @synthesize subtitleView=_subtitleView;
@property(retain, nonatomic) WBTimelineAttributedText *nameLabelText; // @synthesize nameLabelText=_nameLabelText;
@property(retain, nonatomic) WBTimelineAttributedTextView *nameView; // @synthesize nameView=_nameView;
@property(retain, nonatomic) WBTimelineAttributedText *titleText; // @synthesize titleText=_titleText;
@property(retain, nonatomic) WBTimelineAttributedTextView *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) WBTimelineRankListSubCellImageView *coverView; // @synthesize coverView=_coverView;
@property(nonatomic) long long descType; // @synthesize descType=_descType;
@property(retain, nonatomic) WBStatus *status; // @synthesize status=_status;
- (void).cxx_destruct;
- (id)coverImageUrl;
- (double)videoDuration;
- (id)getUserDisplayname:(id)arg1;
- (id)subtitle;
- (id)nameString;
- (id)title;
- (void)layoutSubviews;
- (void)updateUIElements;
- (id)initWithFrame:(struct CGRect)arg1;
- (unsigned long long)wbvideo_sceneType;
@property(readonly, nonatomic) _Bool videoPlayer_disablePresentSimulateAnimation;
@property(readonly, nonatomic) _Bool videoPlayer_shouldUseJumpToParam;
@property(readonly, nonatomic) WBStatus *mediaPlaybackStatus;
- (id)mediaPlaybackPlaceholderWithLoadedStatus:(_Bool *)arg1;
- (id)mediaPlaybackPlaceholderImageURL;
@property(readonly, nonatomic) _Bool supportsInlineMediaPlayback;
@property(readonly, nonatomic) id <WBMediaPlaybackItem> mediaPlaybackItem;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *mediaAutoPlayContextID;
@property(readonly, nonatomic) _Bool mediaAutoPlayIgnoresPlaybackItemsPolicy;
@property(readonly, nonatomic) WBTimelinePageInfo *mediaPlaybackAnalysisPageInfo;
@property(readonly, nonatomic) NSDictionary *mediaPlaybackExtraLogParameters;
@property(readonly, nonatomic) NSDictionary *sourceViewExtraLogParameters;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSOrderedSet *videoPlayer_additionalExternalPluginKeys;
@property(readonly, nonatomic) NSOrderedSet *videoPlayer_additionalExternalPluginKeysForInstreamContent;
@property(readonly, nonatomic) _Bool videoPlayer_clickLogEnable;
@property(readonly, nonatomic) _Bool videoPlayer_disablesAutomaticallyReplay;
@property(readonly, nonatomic) _Bool videoPlayer_disablesResourceCache;
@property(readonly, nonatomic) _Bool videoPlayer_gifVideo;
@property(readonly, nonatomic) long long videoPlayer_mutePreference;
@property(readonly, nonatomic) _Bool videoPlayer_shouldEnterFullScreen;
@property(readonly, nonatomic) _Bool videoPlayer_shouldShowTitle;
@property(readonly, nonatomic) NSString *videoPlayer_targetScheme;
@property(readonly, nonatomic) _Bool videoPlayer_videoTimelineDisabled;
@property(nonatomic) struct CGRect videoplayer_contentsRect;

@end

