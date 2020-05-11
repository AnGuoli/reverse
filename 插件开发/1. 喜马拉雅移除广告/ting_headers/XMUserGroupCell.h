//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIButton, UILabel, UIView, XMGroupTalkingItem;
@protocol XMUserGroupDelegate;

@interface XMUserGroupCell : UITableViewCell
{
    double _typeButtonWdith;
    XMGroupTalkingItem *_group;
    id <XMUserGroupDelegate> _delegate;
    UIView *_backView;
    UIButton *_typeButton;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    UILabel *_memberLabel;
    UIButton *_statusButton;
}

@property(retain, nonatomic) UIButton *statusButton; // @synthesize statusButton=_statusButton;
@property(retain, nonatomic) UILabel *memberLabel; // @synthesize memberLabel=_memberLabel;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButton *typeButton; // @synthesize typeButton=_typeButton;
@property(retain, nonatomic) UIView *backView; // @synthesize backView=_backView;
@property(nonatomic) __weak id <XMUserGroupDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) XMGroupTalkingItem *group; // @synthesize group=_group;
- (void).cxx_destruct;
- (void)p_clickStatusButton:(id)arg1;
- (void)p_setUI;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

