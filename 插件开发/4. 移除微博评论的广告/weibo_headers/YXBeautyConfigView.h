//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "YXBeautyConfigViewCellDelegate-Protocol.h"

@class NSMutableArray, NSObject, NSString, UIImageView, UITableView;
@protocol YXBeautyConfigViewDelegate;

@interface YXBeautyConfigView : UIView <UITableViewDataSource, UITableViewDelegate, YXBeautyConfigViewCellDelegate>
{
    NSMutableArray *_models;
    NSObject<YXBeautyConfigViewDelegate> *_delegate;
    UIView *_bgMaskView;
    UIImageView *_btmContainView;
    UITableView *_baseTableView;
}

+ (id)show:(id)arg1;
+ (id)beautyConfigViewInView:(id)arg1;
@property(retain, nonatomic) UITableView *baseTableView; // @synthesize baseTableView=_baseTableView;
@property(retain, nonatomic) UIImageView *btmContainView; // @synthesize btmContainView=_btmContainView;
@property(retain, nonatomic) UIView *bgMaskView; // @synthesize bgMaskView=_bgMaskView;
@property(nonatomic) __weak NSObject<YXBeautyConfigViewDelegate> *delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableArray *models; // @synthesize models=_models;
- (void).cxx_destruct;
- (void)dismissView;
- (void)initView;
- (void)beautyConfigViewCellSliderDidTouchUpInside:(id)arg1;
- (void)beautyConfigViewCell:(id)arg1 sliderDidChanged:(double)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

