//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@protocol XMLiveDropViewDelegate;

@interface XMLiveDropView : UIView
{
    id <XMLiveDropViewDelegate> _delegate;
    UIView *_baseView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *baseView; // @synthesize baseView=_baseView;
@property(nonatomic) __weak id <XMLiveDropViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)hide;
- (void)onDropViewClick;
- (void)onStartLiveClick;
- (void)onMyLiveBtnClick;
- (void)showUnder:(id)arg1;
- (void)customInit;
- (id)initWithFrame:(struct CGRect)arg1;

@end

