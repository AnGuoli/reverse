//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class FLAnimatedImageView, UIButton, UILabel, UIView, XMLiveRoomDressModel;
@protocol XMLiveRoomDressCellDelegate;

@interface XMLiveRoomDressCell : UICollectionViewCell
{
    id <XMLiveRoomDressCellDelegate> _delegate;
    XMLiveRoomDressModel *_dressModel;
    UIButton *_usedTagView;
    UIButton *_recentDressTimeLabel;
    FLAnimatedImageView *_imageView;
    UILabel *_numberLabel;
    UILabel *_nameLabel;
    UILabel *_detailLabel;
    UIView *_alphaMaskView;
    UIButton *_activeBtn;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *activeBtn; // @synthesize activeBtn=_activeBtn;
@property(retain, nonatomic) UIView *alphaMaskView; // @synthesize alphaMaskView=_alphaMaskView;
@property(retain, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UILabel *numberLabel; // @synthesize numberLabel=_numberLabel;
@property(retain, nonatomic) FLAnimatedImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIButton *recentDressTimeLabel; // @synthesize recentDressTimeLabel=_recentDressTimeLabel;
@property(retain, nonatomic) UIButton *usedTagView; // @synthesize usedTagView=_usedTagView;
@property(retain, nonatomic) XMLiveRoomDressModel *dressModel; // @synthesize dressModel=_dressModel;
@property(nonatomic) __weak id <XMLiveRoomDressCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)updateDressModel:(id)arg1 type:(unsigned long long)arg2;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)onReactiveClicked:(id)arg1;
- (void)addCustomedSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

