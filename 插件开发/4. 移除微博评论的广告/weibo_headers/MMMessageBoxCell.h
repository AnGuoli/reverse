//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserTableViewCell.h"

@class UIImageView;

@interface MMMessageBoxCell : MMUserTableViewCell
{
    UIImageView *_muteView;
}

@property(retain, nonatomic) UIImageView *muteView; // @synthesize muteView=_muteView;
- (void).cxx_destruct;
- (void)dotViewDestory;
- (void)prepareForReuse;
- (double)_detailTextLabelWidth;
- (void)layoutSubviews;
- (void)setConversation:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

