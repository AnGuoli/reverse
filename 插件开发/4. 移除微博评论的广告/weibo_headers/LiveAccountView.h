//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface LiveAccountView : UIView
{
    UIImageView *_avatarView;
    UILabel *_nameLabel;
    UILabel *_locationLabel;
    UILabel *_sepLabel;
    UILabel *_locationIconLabel;
}

+ (double)viewHeight;
@property(retain, nonatomic) UILabel *locationIconLabel; // @synthesize locationIconLabel=_locationIconLabel;
@property(retain, nonatomic) UILabel *sepLabel; // @synthesize sepLabel=_sepLabel;
@property(retain, nonatomic) UILabel *locationLabel; // @synthesize locationLabel=_locationLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *avatarView; // @synthesize avatarView=_avatarView;
- (void).cxx_destruct;
- (void)updateViewFrame;
- (void)updateLocation:(id)arg1;
- (void)updateAvatar:(id)arg1 name:(id)arg2 location:(id)arg3;
- (void)setupSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

