//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UILabel, XMWebImageView;

@interface XMOnlineNobleBottomView : UIView
{
    CDUnknownBlockType _nobleOperateBlock;
    UIView *_line;
    XMWebImageView *_coverImageView;
    UILabel *_noticeLabel;
    UIButton *_actionBtn;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *actionBtn; // @synthesize actionBtn=_actionBtn;
@property(retain, nonatomic) UILabel *noticeLabel; // @synthesize noticeLabel=_noticeLabel;
@property(retain, nonatomic) XMWebImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
@property(retain, nonatomic) UIView *line; // @synthesize line=_line;
@property(copy, nonatomic) CDUnknownBlockType nobleOperateBlock; // @synthesize nobleOperateBlock=_nobleOperateBlock;
- (void)refreshContentBuyType:(long long)arg1 avatarUrl:(id)arg2;
- (void)onOperateDidClick:(id)arg1;
- (void)addLayouConstrant;
- (void)createSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

