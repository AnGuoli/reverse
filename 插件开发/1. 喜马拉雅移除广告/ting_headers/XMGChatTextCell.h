//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMGChatBaseCell.h"

@class YYLabel;

@interface XMGChatTextCell : XMGChatBaseCell
{
    YYLabel *_contentLabel;
}

@property(retain, nonatomic) YYLabel *contentLabel; // @synthesize contentLabel=_contentLabel;
- (void).cxx_destruct;
- (void)copy:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)openUrlString:(id)arg1;
- (void)processUrlString:(id)arg1;
- (void)processEmojiString:(id)arg1;
- (void)processATagString:(id)arg1;
- (id)genAttributedString;
- (void)remakeConstraintsForMe;
- (void)remakeConstraintsForOther;
- (void)setItem:(id)arg1;
- (void)customInit;

@end

