//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView;
@protocol WBVideoCachingEditToolbarDelegate;

@interface WBVideoCachingEditToolbar : UIView
{
    id <WBVideoCachingEditToolbarDelegate> _delegate;
    long long _selectedItemCount;
    long long _allItemCount;
    UIImageView *_shadowView;
    UIImageView *_separatorView;
    UIImageView *_backgroundView;
    UIButton *_selectAllButton;
    UIButton *_deleteSelectedButton;
}

@property(retain, nonatomic) UIButton *deleteSelectedButton; // @synthesize deleteSelectedButton=_deleteSelectedButton;
@property(retain, nonatomic) UIButton *selectAllButton; // @synthesize selectAllButton=_selectAllButton;
@property(retain, nonatomic) UIImageView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIImageView *separatorView; // @synthesize separatorView=_separatorView;
@property(retain, nonatomic) UIImageView *shadowView; // @synthesize shadowView=_shadowView;
@property(nonatomic) long long allItemCount; // @synthesize allItemCount=_allItemCount;
@property(nonatomic) long long selectedItemCount; // @synthesize selectedItemCount=_selectedItemCount;
@property(nonatomic) __weak id <WBVideoCachingEditToolbarDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)isSelectAll;
- (void)clearSelectionAction:(id)arg1;
- (void)selectAllAction:(id)arg1;
- (void)layoutSubviews;
- (void)updateSelectedItemCount;
- (id)_createTemplateButton;
- (id)initWithFrame:(struct CGRect)arg1;

@end

