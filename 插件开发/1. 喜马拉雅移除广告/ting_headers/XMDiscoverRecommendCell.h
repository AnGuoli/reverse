//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMMMomentCell.h"

@class UIButton;

@interface XMDiscoverRecommendCell : XMMMomentCell
{
    id _recommendDelegate;
    UIButton *_closeButton;
}

@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(nonatomic) __weak id recommendDelegate; // @synthesize recommendDelegate=_recommendDelegate;
- (void).cxx_destruct;
- (id)moreButton;
- (void)clickCloseButton:(id)arg1;
- (void)updateDataWithModel:(id)arg1;
- (void)didInitialize;

@end

