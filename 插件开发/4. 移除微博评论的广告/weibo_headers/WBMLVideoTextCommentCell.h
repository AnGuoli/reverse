//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBMLVideoCommentCellBase.h"

@class UILabel;

@interface WBMLVideoTextCommentCell : WBMLVideoCommentCellBase
{
    UILabel *_nameLabel;
    UILabel *_contentLabel;
}

+ (double)rowHeightOfDataObject:(id)arg1 tableView:(id)arg2;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)updateCellData;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

