//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UILabel.h>

@class UIColor;

@interface WBStrokeLabel : UILabel
{
    UIColor *_outlineColor;
    double _outlineWidth;
}

@property(nonatomic) double outlineWidth; // @synthesize outlineWidth=_outlineWidth;
@property(retain, nonatomic) UIColor *outlineColor; // @synthesize outlineColor=_outlineColor;
- (void).cxx_destruct;
- (void)drawTextInRect:(struct CGRect)arg1;

@end

