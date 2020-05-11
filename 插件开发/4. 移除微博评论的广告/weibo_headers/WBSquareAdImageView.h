//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBImageView.h"

@protocol WBSquareAdImageViewDelegate;

@interface WBSquareAdImageView : WBImageView
{
    _Bool _automaticStopPlayWhenComplete;
    id <WBSquareAdImageViewDelegate> _delegate;
}

@property(nonatomic) __weak id <WBSquareAdImageViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool automaticStopPlayWhenComplete; // @synthesize automaticStopPlayWhenComplete=_automaticStopPlayWhenComplete;
- (void).cxx_destruct;
- (void)gifPlayerDidStopPlay:(id)arg1;
- (void)startAnimation;

@end

