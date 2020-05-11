//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel, XMNewTrackBuyAlbumItem;

@interface XMCampInfoView : UIView
{
    XMNewTrackBuyAlbumItem *_trackBuyAlbumItem;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    UILabel *_serviceLabel;
    UILabel *_refundLabel;
    UILabel *_deadlineLabel;
    UILabel *_startDateLabel;
    UILabel *_deadlineContentLabel;
    UILabel *_startDateContentLabel;
    UIView *_backView;
    UIView *_separateLineView;
    UILabel *_boughtNumLabel;
    UIView *_lineView;
}

+ (double)heightForCampViewWithTrackBuyAlbumItem:(id)arg1;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UILabel *boughtNumLabel; // @synthesize boughtNumLabel=_boughtNumLabel;
@property(retain, nonatomic) UIView *separateLineView; // @synthesize separateLineView=_separateLineView;
@property(retain, nonatomic) UIView *backView; // @synthesize backView=_backView;
@property(retain, nonatomic) UILabel *startDateContentLabel; // @synthesize startDateContentLabel=_startDateContentLabel;
@property(retain, nonatomic) UILabel *deadlineContentLabel; // @synthesize deadlineContentLabel=_deadlineContentLabel;
@property(retain, nonatomic) UILabel *startDateLabel; // @synthesize startDateLabel=_startDateLabel;
@property(retain, nonatomic) UILabel *deadlineLabel; // @synthesize deadlineLabel=_deadlineLabel;
@property(retain, nonatomic) UILabel *refundLabel; // @synthesize refundLabel=_refundLabel;
@property(retain, nonatomic) UILabel *serviceLabel; // @synthesize serviceLabel=_serviceLabel;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) XMNewTrackBuyAlbumItem *trackBuyAlbumItem; // @synthesize trackBuyAlbumItem=_trackBuyAlbumItem;
- (void).cxx_destruct;
- (id)dateStrWithTimestamp:(double)arg1;
- (void)initUI;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;

@end

