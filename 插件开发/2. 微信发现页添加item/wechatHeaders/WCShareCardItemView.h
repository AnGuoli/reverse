//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

@class NSArray, NSString, UIView, WCShareCardData;

@interface WCShareCardItemView : MMUIView
{
    _Bool _bForCard;
    NSArray *_shareCardList;
    WCShareCardData *_curDisplayShareCard;
    UIView *_cardBgView;
    UIView *_coverView;
    UIView *_cardBgContainerView;
    NSString *_shareUsernameText;
}

+ (id)genLocalCityEmptyTipsCellContentView;
+ (double)LocalCityShareCardEmptyTipsHeight;
+ (double)ShareCardGatherViewHeight;
- (void).cxx_destruct;
- (void)setHighlighted:(_Bool)arg1;
- (id)genTagItemViewWithTagItem:(id)arg1;
- (id)genNewItemView;
- (id)genTagListView;
- (id)genLogoView;
- (id)genCardBgView;
- (_Bool)genShareUserNameAndDetectIfMoreThan2ShareUsr;
- (void)initViewForShareCard;
- (void)layoutSubviews;
- (id)initWithShareCard:(id)arg1;

@end

