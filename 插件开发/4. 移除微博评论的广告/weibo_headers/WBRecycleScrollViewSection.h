//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WBRecycleScrollViewSection : NSObject
{
    double _rowsHeight;
    long long _numberOfRows;
    double *_rowHeights;
}

@property(readonly, nonatomic) double *rowHeights; // @synthesize rowHeights=_rowHeights;
@property(readonly, nonatomic) long long numberOfRows; // @synthesize numberOfRows=_numberOfRows;
@property(nonatomic) double rowsHeight; // @synthesize rowsHeight=_rowsHeight;
- (void)dealloc;
- (void)setNumberOfRows:(long long)arg1 withHeights:(double *)arg2;

@end

