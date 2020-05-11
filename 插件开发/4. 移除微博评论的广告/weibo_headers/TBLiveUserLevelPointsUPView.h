//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel;

@interface TBLiveUserLevelPointsUPView : UIView
{
    int _userLevel;
    UILabel *_points;
    UILabel *_title;
    UILabel *_trigger;
}

@property(retain, nonatomic) UILabel *trigger; // @synthesize trigger=_trigger;
@property(retain, nonatomic) UILabel *title; // @synthesize title=_title;
@property(retain, nonatomic) UILabel *points; // @synthesize points=_points;
@property(nonatomic) int userLevel; // @synthesize userLevel=_userLevel;
- (void).cxx_destruct;
- (void)refreshWithData:(long long)arg1 title:(id)arg2 trigger:(id)arg3;
- (void)addGradientLayer:(unsigned long long)arg1 endHexValue:(unsigned long long)arg2;
- (void)addColor:(long long)arg1;
- (void)setupViews;
- (id)initWithUserLevel:(struct CGRect)arg1 level:(int)arg2;

@end

