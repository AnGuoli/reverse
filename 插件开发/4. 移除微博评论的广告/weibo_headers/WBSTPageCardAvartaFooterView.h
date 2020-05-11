//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBSTPageCardFooterBaseView.h"

#import "WBSTPageCardFooterContainerDelegate-Protocol.h"

@class NSString, UIControl, UILabel, WBContentImageView, WBPageSingleStoryCard, WBStoryUserView;

@interface WBSTPageCardAvartaFooterView : WBSTPageCardFooterBaseView <WBSTPageCardFooterContainerDelegate>
{
    WBContentImageView *_attitudeView;
    UILabel *_attitudeLabel;
    WBStoryUserView *_ownerView;
    UILabel *_ownerNameLabel;
    WBPageSingleStoryCard *_singleCard;
    UIControl *_inProfileControl;
}

@property(retain, nonatomic) UIControl *inProfileControl; // @synthesize inProfileControl=_inProfileControl;
@property(retain, nonatomic) WBPageSingleStoryCard *singleCard; // @synthesize singleCard=_singleCard;
@property(retain, nonatomic) UILabel *ownerNameLabel; // @synthesize ownerNameLabel=_ownerNameLabel;
@property(retain, nonatomic) WBStoryUserView *ownerView; // @synthesize ownerView=_ownerView;
@property(retain, nonatomic) UILabel *attitudeLabel; // @synthesize attitudeLabel=_attitudeLabel;
@property(retain, nonatomic) WBContentImageView *attitudeView; // @synthesize attitudeView=_attitudeView;
- (void).cxx_destruct;
- (id)actionButtons;
- (void)updateSingleCard:(id)arg1;
- (void)enterProfile;
- (void)layoutSubviews;
- (double)maxHeight;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

