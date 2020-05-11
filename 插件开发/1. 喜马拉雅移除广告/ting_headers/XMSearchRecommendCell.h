//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSArray, NSMutableArray, UILabel;
@protocol XMSearchRecommendCellDelegate;

@interface XMSearchRecommendCell : UITableViewCell
{
    id <XMSearchRecommendCellDelegate> _delegate;
    UILabel *_titleLabel;
    NSMutableArray *_cardViews;
    NSArray *_cardModels;
}

+ (double)tableView:(id)arg1 heightForCellObject:(id)arg2;
@property(retain, nonatomic) NSArray *cardModels; // @synthesize cardModels=_cardModels;
@property(retain, nonatomic) NSMutableArray *cardViews; // @synthesize cardViews=_cardViews;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak id <XMSearchRecommendCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)reloadCellWithCellObject:(id)arg1 tableViewDelegate:(id)arg2;
- (void)buttonDidClick:(id)arg1;
- (void)setup;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

