//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIButton, UILabel, UIView, XMWebImageView;

@interface XMNowPlayingEBookCell : UITableViewCell
{
    XMWebImageView *_novelImageView;
    UILabel *_novelTitleLabel;
    UILabel *_descLabel;
    UILabel *_authorLabel;
    UIButton *_readBtn;
    UIView *_line;
}

+ (double)tableView:(id)arg1 heightForCellObject:(id)arg2;
@property(retain, nonatomic) UIView *line; // @synthesize line=_line;
@property(retain, nonatomic) UIButton *readBtn; // @synthesize readBtn=_readBtn;
@property(retain, nonatomic) UILabel *authorLabel; // @synthesize authorLabel=_authorLabel;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *novelTitleLabel; // @synthesize novelTitleLabel=_novelTitleLabel;
@property(retain, nonatomic) XMWebImageView *novelImageView; // @synthesize novelImageView=_novelImageView;
- (void).cxx_destruct;
- (void)reloadCellWithCellObject:(id)arg1 tableViewDelegate:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

