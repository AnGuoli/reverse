//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSString, UIImageView, UIScrollView, XMBlurView;
@protocol XMRankingTagsViewDelegate;

@interface XMRankingTagsView : UIView <UIGestureRecognizerDelegate>
{
    NSArray *_categoryArray;
    id <XMRankingTagsViewDelegate> _delegate;
    NSMutableArray *_tagButtons;
    UIScrollView *_scrollView;
    XMBlurView *_blurView;
    UIImageView *_lineView;
}

@property(retain, nonatomic) UIImageView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) XMBlurView *blurView; // @synthesize blurView=_blurView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) NSMutableArray *tagButtons; // @synthesize tagButtons=_tagButtons;
@property(nonatomic) __weak id <XMRankingTagsViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *categoryArray; // @synthesize categoryArray=_categoryArray;
- (void).cxx_destruct;
- (void)didTap;
- (void)onTouchCancel:(id)arg1;
- (void)onTouchUp:(id)arg1;
- (void)onTouchDown:(id)arg1;
- (void)onSegment:(id)arg1;
- (id)tagButtonsView;
- (void)setSelectIndex:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1 categoryArray:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

