//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSMutableArray, XMTableCellObject;
@protocol XMNowPlayingTagCellClickDelegate;

@interface XMNowPlayingTagCell : UITableViewCell
{
    NSMutableArray *_tagButtonArr;
    id <XMNowPlayingTagCellClickDelegate> _delegate;
    XMTableCellObject *_cellObject;
}

+ (double)tableView:(id)arg1 heightForCellObject:(id)arg2;
@property(retain, nonatomic) XMTableCellObject *cellObject; // @synthesize cellObject=_cellObject;
@property(nonatomic) __weak id <XMNowPlayingTagCellClickDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableArray *tagButtonArr; // @synthesize tagButtonArr=_tagButtonArr;
- (void).cxx_destruct;
- (void)reloadCellWithCellObject:(id)arg1 tableViewDelegate:(id)arg2;
- (void)buttonClickAction:(id)arg1;
- (id)getButtonWithTitle:(id)arg1 withAttach:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

