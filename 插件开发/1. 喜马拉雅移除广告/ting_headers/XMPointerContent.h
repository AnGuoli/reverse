//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView, UILabel, XMProcessBar, XMTrackMarkModel;

@interface XMPointerContent : UIView
{
    UIView *_pointer;
    UILabel *_markTimeLB;
    UIButton *_deleteMarkTimeBtn;
    UIImageView *_arrowIV;
    _Bool _isBarrageCheckPointerStatus;
    CDUnknownBlockType _onClickAction;
    XMProcessBar *_progressBar;
    XMTrackMarkModel *_currentModel;
}

@property(retain, nonatomic) XMTrackMarkModel *currentModel; // @synthesize currentModel=_currentModel;
@property(retain, nonatomic) XMProcessBar *progressBar; // @synthesize progressBar=_progressBar;
@property(nonatomic) _Bool isBarrageCheckPointerStatus; // @synthesize isBarrageCheckPointerStatus=_isBarrageCheckPointerStatus;
@property(copy, nonatomic) CDUnknownBlockType onClickAction; // @synthesize onClickAction=_onClickAction;
- (void).cxx_destruct;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)showWithTrackMarkModel:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setMarkTimeLBText:(unsigned long long)arg1;
- (void)hidePointer;
- (void)updatePointerCenterX;
- (void)_checkPointerStatus;
- (void)checkPointerStatus;
- (void)deleteTrackMarkTime;
- (void)initUI;
- (id)initWithFrame:(struct CGRect)arg1 andProgressBar:(id)arg2;

@end

