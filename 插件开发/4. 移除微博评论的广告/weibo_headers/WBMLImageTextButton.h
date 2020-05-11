//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class CALayer;

@interface WBMLImageTextButton : UIButton
{
    _Bool _enableOverlayLayer;
    unsigned long long _actionEvent;
    CALayer *_overlayLayer;
}

@property(retain, nonatomic) CALayer *overlayLayer; // @synthesize overlayLayer=_overlayLayer;
@property(nonatomic) unsigned long long actionEvent; // @synthesize actionEvent=_actionEvent;
@property(nonatomic) _Bool enableOverlayLayer; // @synthesize enableOverlayLayer=_enableOverlayLayer;
- (void).cxx_destruct;
- (void)setHighlighted:(_Bool)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

