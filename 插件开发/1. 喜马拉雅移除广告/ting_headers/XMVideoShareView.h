//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray, UILabel;

@interface XMVideoShareView : UIView
{
    UILabel *_tipLB;
    _Bool _isShow;
    NSMutableArray *_mArr;
    CDUnknownBlockType _shareViewTouchBlock;
    NSArray *_dataSource;
}

+ (double)videoShareViewWidth;
@property(retain, nonatomic) NSArray *dataSource; // @synthesize dataSource=_dataSource;
@property(copy, nonatomic) CDUnknownBlockType shareViewTouchBlock; // @synthesize shareViewTouchBlock=_shareViewTouchBlock;
@property(nonatomic) _Bool isShow; // @synthesize isShow=_isShow;
@property(retain, nonatomic) NSMutableArray *mArr; // @synthesize mArr=_mArr;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)shareViewGR:(id)arg1;
- (void)customInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)hideVideoShareView;
- (void)showVideoShareView;

@end

