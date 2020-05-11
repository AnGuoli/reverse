//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIBezierPath.h>

@class NSString;

@interface SVGABezierPath : UIBezierPath
{
    _Bool _displaying;
    NSString *_backValues;
}

@property(copy, nonatomic) NSString *backValues; // @synthesize backValues=_backValues;
@property(nonatomic) _Bool displaying; // @synthesize displaying=_displaying;
- (void).cxx_destruct;
- (struct CGPoint)argPoint:(struct CGPoint)arg1 relative:(_Bool)arg2;
- (double)argFloat:(double)arg1 relativeValue:(double)arg2;
- (void)operate:(id)arg1 args:(id)arg2;
- (id)createLayer;
- (void)setValues:(id)arg1;

@end

