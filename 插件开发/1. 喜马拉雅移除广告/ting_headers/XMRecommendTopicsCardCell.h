//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UIImageView, UILabel, UIView, XMMomentReferenceInfo;

@interface XMRecommendTopicsCardCell : UICollectionViewCell
{
    _Bool _isMore;
    XMMomentReferenceInfo *_item;
    UIImageView *_coverImageView;
    UIView *_backView;
    UILabel *_topicLabel;
    UILabel *_titleLabel;
    UIView *_middleLine;
    UILabel *_subTitleLabel;
}

@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UIView *middleLine; // @synthesize middleLine=_middleLine;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UILabel *topicLabel; // @synthesize topicLabel=_topicLabel;
@property(retain, nonatomic) UIView *backView; // @synthesize backView=_backView;
@property(retain, nonatomic) UIImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
@property(nonatomic) _Bool isMore; // @synthesize isMore=_isMore;
@property(retain, nonatomic) XMMomentReferenceInfo *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;

@end

