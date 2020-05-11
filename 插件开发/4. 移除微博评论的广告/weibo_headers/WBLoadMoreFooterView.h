//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PRLMFooterView.h"

#import "WBAppLanguageObserver-Protocol.h"
#import "WBSkinning-Protocol.h"

@class NSString, UIButton;

@interface WBLoadMoreFooterView : PRLMFooterView <WBSkinning, WBAppLanguageObserver>
{
    UIButton *loadMoreButton;
    NSString *buttonTittle;
}

- (void).cxx_destruct;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;
- (void)dealloc;
- (void)refreshPromptText;
- (void)setPrlmState:(int)arg1;
- (void)appLanguageDidChange:(id)arg1;
- (id)localizedPromptText;
- (void)reloadUIElements;
- (void)reloadButtonAndActivityView;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (double)footerHeight;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

