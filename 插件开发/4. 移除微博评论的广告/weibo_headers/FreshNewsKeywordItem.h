//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView, WBFreshNewsKeywordData;
@protocol FreshNewsKeywordItemDelegate;

@interface FreshNewsKeywordItem : UIView
{
    UIButton *_mainButton;
    WBFreshNewsKeywordData *_keywordData;
    id <FreshNewsKeywordItemDelegate> _delegate;
    UIImageView *_contentBgImageView;
    UIButton *_deleteButton;
    unsigned long long _state;
}

@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(retain, nonatomic) UIButton *deleteButton; // @synthesize deleteButton=_deleteButton;
@property(retain, nonatomic) UIImageView *contentBgImageView; // @synthesize contentBgImageView=_contentBgImageView;
@property(nonatomic) id <FreshNewsKeywordItemDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WBFreshNewsKeywordData *keywordData; // @synthesize keywordData=_keywordData;
@property(retain, nonatomic) UIButton *mainButton; // @synthesize mainButton=_mainButton;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)deleteBtnClick:(id)arg1;
- (void)mainBtnClick:(id)arg1;
- (id)createImageWithColor:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

