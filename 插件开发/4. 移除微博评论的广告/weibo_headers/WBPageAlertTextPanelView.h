//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBPageAlertPanelViewBase.h"

@class UILabel;

@interface WBPageAlertTextPanelView : WBPageAlertPanelViewBase
{
    UILabel *_textLabel;
    struct CGSize _textSize;
}

@property(nonatomic) struct CGSize textSize; // @synthesize textSize=_textSize;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
- (void).cxx_destruct;
- (double)heightConstrainedToWidth:(double)arg1;
- (void)layoutSubviews;
- (void)setAlertPanel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

