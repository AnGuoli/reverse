//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface TBLiveRoomNumView : UIView
{
    UILabel *_roomNum;
    UIImageView *_logoView;
    UIView *_redbotView;
}

+ (struct CGSize)viewSize;
@property(retain, nonatomic) UIView *redbotView; // @synthesize redbotView=_redbotView;
@property(retain, nonatomic) UIImageView *logoView; // @synthesize logoView=_logoView;
@property(retain, nonatomic) UILabel *roomNum; // @synthesize roomNum=_roomNum;
- (void).cxx_destruct;
- (void)onTap;
- (void)refreshWithNum:(id)arg1 imageUrl:(id)arg2 enableClick:(_Bool)arg3;
- (void)addKeyAnimation;
- (void)setupInit;
- (id)initWithFrame:(struct CGRect)arg1;

@end

