//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class UIActivityIndicatorView;

@interface WKChatStatusButton : UIButton
{
    UIActivityIndicatorView *_indicatorView;
    long long _status;
}

@property(nonatomic) long long status; // @synthesize status=_status;
- (void).cxx_destruct;
@property(retain, nonatomic) UIActivityIndicatorView *indicatorView;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

