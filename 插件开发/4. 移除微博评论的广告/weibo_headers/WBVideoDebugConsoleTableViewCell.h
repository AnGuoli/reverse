//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBTableViewCell.h"

@class WBVideoDebugConsoleTableViewCellContentView, WBVideoDebugLogItem;

@interface WBVideoDebugConsoleTableViewCell : WBTableViewCell
{
    WBVideoDebugLogItem *_logItem;
    WBVideoDebugConsoleTableViewCellContentView *_backingView;
}

+ (id)foregroundColorForItem:(id)arg1;
+ (id)backgroundColorForItem:(id)arg1;
+ (double)rowHeightOfDataObject:(id)arg1 tableView:(id)arg2;
@property(retain, nonatomic) WBVideoDebugConsoleTableViewCellContentView *backingView; // @synthesize backingView=_backingView;
@property(retain, nonatomic) WBVideoDebugLogItem *logItem; // @synthesize logItem=_logItem;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 userInfo:(id)arg3;

@end

