//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UILabel;
@protocol TBLiveSRShareChannelButtonDelegate;

@interface TBLiveSRShareChannelButton : UIView
{
    int _shareType;
    UIButton *_iconButton;
    UILabel *_titleLabel;
    id <TBLiveSRShareChannelButtonDelegate> _clickDelegate;
}

@property(nonatomic) __weak id <TBLiveSRShareChannelButtonDelegate> clickDelegate; // @synthesize clickDelegate=_clickDelegate;
- (void).cxx_destruct;
- (void)didClickButton:(id)arg1;
- (id)titleText;
- (void)setupIconButton;
- (void)setupSubViews;
- (id)initWithFrame:(struct CGRect)arg1 shareType:(int)arg2;

@end

