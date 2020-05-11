//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSDictionary, WBPageInfoLargeVideoView;

@interface WBPageInfoMediaContentView : UIView
{
    WBPageInfoLargeVideoView *_containerView;
    NSDictionary *_contentViewAnalysisParameters;
}

@property(retain, nonatomic) NSDictionary *contentViewAnalysisParameters; // @synthesize contentViewAnalysisParameters=_contentViewAnalysisParameters;
@property(nonatomic) __weak WBPageInfoLargeVideoView *containerView; // @synthesize containerView=_containerView;
- (void).cxx_destruct;
- (void)mediaPlayerViewDidRemove:(id)arg1;
- (void)mediaPlayerViewDidAttach:(id)arg1;
- (void)updateViewWithPageInfo:(id)arg1;
- (void)playButtonPressed:(id)arg1;

@end

