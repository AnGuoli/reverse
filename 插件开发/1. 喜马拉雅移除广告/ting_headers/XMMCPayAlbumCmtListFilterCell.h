//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMTableViewCell.h"

@class NSString, UIImageView, UILabel, XMAlbumStarRatingView;

@interface XMMCPayAlbumCmtListFilterCell : XMTableViewCell
{
    _Bool _isSelected;
    NSString *_title;
    long long _currentLine;
    XMAlbumStarRatingView *_starRatingView;
    UILabel *_filterLB;
    UIImageView *_filterIV;
}

@property(retain, nonatomic) UIImageView *filterIV; // @synthesize filterIV=_filterIV;
@property(retain, nonatomic) UILabel *filterLB; // @synthesize filterLB=_filterLB;
@property(retain, nonatomic) XMAlbumStarRatingView *starRatingView; // @synthesize starRatingView=_starRatingView;
@property(nonatomic) long long currentLine; // @synthesize currentLine=_currentLine;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;

@end

