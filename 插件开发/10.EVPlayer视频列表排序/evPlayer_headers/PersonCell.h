//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class MItem, PersonController, UIImageView, UILabel;

@interface PersonCell : UITableViewCell
{
    UILabel *_title;
    UILabel *_size;
    UILabel *_time;
    UIImageView *_edit_view;
    MItem *_item;
    PersonController *_parent;
}

+ (id)viewFromNIB;
@property(retain, nonatomic) PersonController *parent; // @synthesize parent=_parent;
@property(retain, nonatomic) MItem *item; // @synthesize item=_item;
@property(nonatomic) __weak UIImageView *edit_view; // @synthesize edit_view=_edit_view;
@property(nonatomic) __weak UILabel *time; // @synthesize time=_time;
@property(nonatomic) __weak UILabel *size; // @synthesize size=_size;
@property(nonatomic) __weak UILabel *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)longpress:(id)arg1;
- (void)setModel:(id)arg1 parent:(id)arg2;
- (void)setFrame:(struct CGRect)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end

