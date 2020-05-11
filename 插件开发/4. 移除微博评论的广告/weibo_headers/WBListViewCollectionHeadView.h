//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

@class UIButton, UILabel;
@protocol WBListViewCollectionHeadViewDelegate;

@interface WBListViewCollectionHeadView : UICollectionReusableView
{
    id <WBListViewCollectionHeadViewDelegate> _delegate;
    UILabel *_titleLabel;
    UIButton *_editButton;
}

@property(retain, nonatomic) UIButton *editButton; // @synthesize editButton=_editButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak id <WBListViewCollectionHeadViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)hiddenTitleLabel:(_Bool)arg1;
- (void)hiddenEditButton:(_Bool)arg1;
- (void)setTitleLabelText:(id)arg1 buttonTitle:(id)arg2;
- (void)layoutSubviews;
- (void)setEditButtonTitle:(id)arg1;
- (void)setTitleLabelText:(id)arg1;
- (void)editButtonClick:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

