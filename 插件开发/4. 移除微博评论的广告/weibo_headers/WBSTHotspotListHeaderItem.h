//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel, WBShortVideoTopicInfo;

@interface WBSTHotspotListHeaderItem : UIView
{
    UILabel *_contentLabel;
    CDUnknownBlockType _hotItemDidSelectedBlock;
    WBShortVideoTopicInfo *_topicInfo;
}

@property(retain, nonatomic) WBShortVideoTopicInfo *topicInfo; // @synthesize topicInfo=_topicInfo;
@property(copy, nonatomic) CDUnknownBlockType hotItemDidSelectedBlock; // @synthesize hotItemDidSelectedBlock=_hotItemDidSelectedBlock;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
- (void).cxx_destruct;
- (double)getWidthWithText:(id)arg1;
- (void)didSelectedHandle;
- (void)layoutSubviews;
- (id)initWithTopicInfo:(id)arg1;

@end

