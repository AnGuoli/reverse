//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface XMLiveAnchorFinishTopView : UIView
{
    UIImageView *_coverImgView;
    UILabel *_nameLabel;
    UILabel *_fmLabel;
    UILabel *_incomeDetail;
    UILabel *_durationTitle;
    UILabel *_durationDetail;
    UILabel *_countTitle;
    UILabel *_countDetail;
    UILabel *_commentsTitle;
    UILabel *_commentsDetail;
    UILabel *_fansIncreaseTitle;
    UILabel *_fansIncreaseDetail;
    UILabel *_giftRankTitle;
    UIImageView *_lineView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UILabel *giftRankTitle; // @synthesize giftRankTitle=_giftRankTitle;
@property(retain, nonatomic) UILabel *fansIncreaseDetail; // @synthesize fansIncreaseDetail=_fansIncreaseDetail;
@property(retain, nonatomic) UILabel *fansIncreaseTitle; // @synthesize fansIncreaseTitle=_fansIncreaseTitle;
@property(retain, nonatomic) UILabel *commentsDetail; // @synthesize commentsDetail=_commentsDetail;
@property(retain, nonatomic) UILabel *commentsTitle; // @synthesize commentsTitle=_commentsTitle;
@property(retain, nonatomic) UILabel *countDetail; // @synthesize countDetail=_countDetail;
@property(retain, nonatomic) UILabel *countTitle; // @synthesize countTitle=_countTitle;
@property(retain, nonatomic) UILabel *durationDetail; // @synthesize durationDetail=_durationDetail;
@property(retain, nonatomic) UILabel *durationTitle; // @synthesize durationTitle=_durationTitle;
@property(retain, nonatomic) UILabel *incomeDetail; // @synthesize incomeDetail=_incomeDetail;
@property(retain, nonatomic) UILabel *fmLabel; // @synthesize fmLabel=_fmLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *coverImgView; // @synthesize coverImgView=_coverImgView;
- (void)showContent:(id)arg1;
- (void)addSubviewLayoutConstrants;
- (void)createSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

