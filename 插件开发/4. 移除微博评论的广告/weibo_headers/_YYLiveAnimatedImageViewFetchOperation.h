//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class UIImage, YYLiveAnimatedImageView;
@protocol YYLiveAnimatedImage;

@interface _YYLiveAnimatedImageViewFetchOperation : NSOperation
{
    YYLiveAnimatedImageView *_view;
    unsigned long long _nextIndex;
    UIImage<YYLiveAnimatedImage> *_curImage;
}

@property(retain, nonatomic) UIImage<YYLiveAnimatedImage> *curImage; // @synthesize curImage=_curImage;
@property(nonatomic) unsigned long long nextIndex; // @synthesize nextIndex=_nextIndex;
@property(nonatomic) __weak YYLiveAnimatedImageView *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (void)main;

@end

