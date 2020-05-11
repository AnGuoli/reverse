//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton;

@interface TBLiveSRMoreView : UIView
{
    CDUnknownBlockType _closeAction;
    _Bool _showRecord;
    UIButton *_recordBtn;
    UIButton *_reportBtn;
    UIButton *_linkLiveBtn;
    double _bottom;
    double _centerX;
}

@property(nonatomic) double centerX; // @synthesize centerX=_centerX;
@property(nonatomic) double bottom; // @synthesize bottom=_bottom;
@property(retain, nonatomic) UIButton *linkLiveBtn; // @synthesize linkLiveBtn=_linkLiveBtn;
@property(retain, nonatomic) UIButton *reportBtn; // @synthesize reportBtn=_reportBtn;
@property(retain, nonatomic) UIButton *recordBtn; // @synthesize recordBtn=_recordBtn;
- (void).cxx_destruct;
- (void)didTapView;
- (void)addLinkLiveBtn;
- (void)setupSubViews;
- (id)initWithFrame:(struct CGRect)arg1 centerX:(double)arg2 bottom:(double)arg3 showRecored:(_Bool)arg4 closeAction:(CDUnknownBlockType)arg5;

@end

