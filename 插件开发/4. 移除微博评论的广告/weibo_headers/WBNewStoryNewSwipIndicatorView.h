//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "WBStorySwipIndicatorViewProtocol-Protocol.h"

@class NSString, UIButton, WBSlideGradientColorView;
@protocol WBStorySwipIndicatorViewDelegate;

@interface WBNewStoryNewSwipIndicatorView : UIView <WBStorySwipIndicatorViewProtocol>
{
    NSString *_supportNum;
    NSString *_viewersNum;
    NSString *_commentsNum;
    id <WBStorySwipIndicatorViewDelegate> _delegate;
    unsigned long long _segmentInfoDisplayType;
    unsigned long long _segmentInfoFocusType;
    UIButton *_commentsBtn;
    UIButton *_likesBtn;
    UIButton *_watchsBtn;
    UIView *_bottomLine;
    UIButton *_dismissBtn;
    WBSlideGradientColorView *_slider;
    long long _index;
}

@property(nonatomic) long long index; // @synthesize index=_index;
@property(retain, nonatomic) WBSlideGradientColorView *slider; // @synthesize slider=_slider;
@property(retain, nonatomic) UIButton *dismissBtn; // @synthesize dismissBtn=_dismissBtn;
@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) UIButton *watchsBtn; // @synthesize watchsBtn=_watchsBtn;
@property(retain, nonatomic) UIButton *likesBtn; // @synthesize likesBtn=_likesBtn;
@property(retain, nonatomic) UIButton *commentsBtn; // @synthesize commentsBtn=_commentsBtn;
@property(nonatomic) unsigned long long segmentInfoFocusType; // @synthesize segmentInfoFocusType=_segmentInfoFocusType;
@property(nonatomic) unsigned long long segmentInfoDisplayType; // @synthesize segmentInfoDisplayType=_segmentInfoDisplayType;
@property(nonatomic) __weak id <WBStorySwipIndicatorViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *commentsNum; // @synthesize commentsNum=_commentsNum;
@property(retain, nonatomic) NSString *viewersNum; // @synthesize viewersNum=_viewersNum;
@property(retain, nonatomic) NSString *supportNum; // @synthesize supportNum=_supportNum;
- (void).cxx_destruct;
- (long long)indexWithType:(unsigned long long)arg1;
- (void)allButtonReset;
- (void)dismissButtonPressed:(id)arg1;
- (void)watchButtonPressed:(id)arg1;
- (void)likebuttonPressed:(id)arg1;
- (void)commentButtonPressed:(id)arg1;
- (void)updateSliderBarColorWithOffset:(double)arg1;
- (void)moveSliderBarWithOffset:(double)arg1;
- (void)layoutSubviews;
- (void)updateViewsVisible;
- (void)moveSliderToFocusType:(unsigned long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1 segDisplayInfoType:(unsigned long long)arg2 segeFocusType:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

