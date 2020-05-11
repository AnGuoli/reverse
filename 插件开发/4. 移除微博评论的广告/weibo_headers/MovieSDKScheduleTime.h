//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIImageView, UILabel;

@interface MovieSDKScheduleTime : UIView
{
    _Bool _isOnSale;
    _Bool _hasTomorrowTag;
    UILabel *_beginTimeLabel;
    UILabel *_endTimeLabel;
    UIImageView *_tomorrowView;
    NSString *_beginTime;
    NSString *_endTime;
}

@property(nonatomic) _Bool hasTomorrowTag; // @synthesize hasTomorrowTag=_hasTomorrowTag;
@property(nonatomic) _Bool isOnSale; // @synthesize isOnSale=_isOnSale;
@property(retain, nonatomic) NSString *endTime; // @synthesize endTime=_endTime;
@property(retain, nonatomic) NSString *beginTime; // @synthesize beginTime=_beginTime;
@property(retain, nonatomic) UIImageView *tomorrowView; // @synthesize tomorrowView=_tomorrowView;
@property(retain, nonatomic) UILabel *endTimeLabel; // @synthesize endTimeLabel=_endTimeLabel;
@property(retain, nonatomic) UILabel *beginTimeLabel; // @synthesize beginTimeLabel=_beginTimeLabel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)init;

@end

