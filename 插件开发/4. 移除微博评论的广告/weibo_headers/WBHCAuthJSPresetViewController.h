//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBHCAuthBaseViewController.h"

@class UIButton, UIImageView, UILabel;

@interface WBHCAuthJSPresetViewController : WBHCAuthBaseViewController
{
    CDUnknownBlockType _finishBlock;
    CDUnknownBlockType _cancelBlock;
    UILabel *_titleLabel;
    UILabel *_descriptionLabel;
    UIImageView *_imageView;
    UIButton *_nextButton;
}

- (void).cxx_destruct;
- (void)nextButtonPressed:(id)arg1;
- (void)backButtonPressed:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)moduleID;
- (id)initWithFinishBlock:(CDUnknownBlockType)arg1 cancelBlock:(CDUnknownBlockType)arg2;

@end

