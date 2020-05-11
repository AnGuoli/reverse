//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMTableViewCell.h"

#import "UITextFieldDelegate-Protocol.h"

@class NSString, UIButton, UIImageView, UILabel, UITextField, UIView, XMPlayListEditModel, XMTableCellObject, XMWebImageView;

@interface XMPlayListEditCell : XMTableViewCell <UITextFieldDelegate>
{
    UILabel *_title;
    UIView *_bottomLine;
    UIButton *_selectedButton;
    XMWebImageView *_coverView;
    UIImageView *_arrow;
    UITextField *_textField;
    XMPlayListEditModel *_model;
    XMTableCellObject *_cellObj;
}

+ (double)tableView:(id)arg1 heightForCellObject:(id)arg2;
@property(retain, nonatomic) XMTableCellObject *cellObj; // @synthesize cellObj=_cellObj;
@property(retain, nonatomic) XMPlayListEditModel *model; // @synthesize model=_model;
@property(retain, nonatomic) UITextField *textField; // @synthesize textField=_textField;
@property(retain, nonatomic) UIImageView *arrow; // @synthesize arrow=_arrow;
@property(retain, nonatomic) XMWebImageView *coverView; // @synthesize coverView=_coverView;
@property(retain, nonatomic) UIButton *selectedButton; // @synthesize selectedButton=_selectedButton;
@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) UILabel *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)reloadCellWithCellObject:(id)arg1 tableViewDelegate:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

