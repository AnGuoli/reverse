//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray, WBAPMMonitorViewLayouter;

@interface WBAPMDataDisplayView : UIView
{
    NSArray *_viewModels;
    WBAPMMonitorViewLayouter *_layouter;
    NSMutableArray *_actionArray;
}

+ (void)dismiss;
+ (id)sharedView;
+ (void)showInView:(id)arg1;
+ (void)updateViewModels:(id)arg1;
@property(retain, nonatomic) NSMutableArray *actionArray; // @synthesize actionArray=_actionArray;
@property(retain, nonatomic) WBAPMMonitorViewLayouter *layouter; // @synthesize layouter=_layouter;
@property(retain, nonatomic) NSArray *viewModels; // @synthesize viewModels=_viewModels;
- (void).cxx_destruct;
- (void)testCaseBtnClick:(id)arg1;
- (void)addTestCaseWithTitles:(id)arg1 actions:(id)arg2;
- (void)_dismiss;
- (void)_updateWithViewModels:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

