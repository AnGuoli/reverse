//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBFCLBaseCell.h"

#import "WBStatusHeaderNoPayQuestionTitleViewDelegate-Protocol.h"

@class NSString, WBStatusHeaderNoPayQuestionTitleView;
@protocol WBStatusHeaderNoPayQuestionTitleViewDelegate;

@interface WBContentNoPayCell : WBFCLBaseCell <WBStatusHeaderNoPayQuestionTitleViewDelegate>
{
    WBStatusHeaderNoPayQuestionTitleView *_titleView;
}

+ (double)cellHeightWithTitle:(id)arg1 info:(id)arg2 withWidth:(double)arg3;
@property(retain, nonatomic) WBStatusHeaderNoPayQuestionTitleView *titleView; // @synthesize titleView=_titleView;
- (void).cxx_destruct;
- (void)setupCellData:(id)arg1;
- (void)headerNoPayQuestionTitleView:(id)arg1 answerButtonDidPressed:(id)arg2;
- (void)headerNoPayQuestionTitleView:(id)arg1 mainButtonDidPressed:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <WBStatusHeaderNoPayQuestionTitleViewDelegate> delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

