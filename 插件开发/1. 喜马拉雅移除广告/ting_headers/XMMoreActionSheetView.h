//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, UIButton;

@interface XMMoreActionSheetView : UIView
{
    NSMutableArray *_actionCells;
    UIButton *_closeButton;
    UIView *_boxView;
}

@property(retain, nonatomic) UIView *boxView; // @synthesize boxView=_boxView;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) NSMutableArray *actionCells; // @synthesize actionCells=_actionCells;
- (void).cxx_destruct;
- (void)showMoreActionSheetWithItem:(id)arg1;
- (void)actionDidClick:(id)arg1;
- (void)closeButtonDidClick;
- (void)layoutSubviews;
- (id)setupActionCellWithItem:(id)arg1;
- (void)diMissAnimated:(_Bool)arg1;
- (void)onTap;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)showInView:(id)arg1;
- (void)addActionItem:(id)arg1;
- (void)dealloc;

@end

