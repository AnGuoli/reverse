//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray;

@interface WBPageCardProfileBadgeView : UIView
{
    NSArray *_badges;
    long long _maxNumberLine;
}

+ (double)heightOfBadgeView:(id)arg1 maxNumberLine:(long long)arg2 limitWidth:(double)arg3;
@property(nonatomic) long long maxNumberLine; // @synthesize maxNumberLine=_maxNumberLine;
@property(retain, nonatomic) NSArray *badges; // @synthesize badges=_badges;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

