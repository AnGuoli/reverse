//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSObject, UIImageView, UILabel;
@protocol YZBDownloadGuideViewDelegate;

@interface YZBDownloadGuideView : UIView
{
    NSObject<YZBDownloadGuideViewDelegate> *_delegate;
    UILabel *_title;
    UIImageView *_arrow;
}

+ (_Bool)isYZBInstalled;
@property(retain, nonatomic) UIImageView *arrow; // @synthesize arrow=_arrow;
@property(retain, nonatomic) UILabel *title; // @synthesize title=_title;
@property(nonatomic) __weak NSObject<YZBDownloadGuideViewDelegate> *delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)buttonDidClick:(id)arg1;
- (void)loadUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end

