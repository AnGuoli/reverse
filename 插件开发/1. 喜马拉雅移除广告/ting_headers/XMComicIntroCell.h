//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMTableViewCell.h"

#import "UITextViewDelegate-Protocol.h"
#import "UIWebViewDelegate-Protocol.h"

@class NSString, UIButton, UIView, XMTableCellObject, YYLabel;

@interface XMComicIntroCell : XMTableViewCell <UITextViewDelegate, UIWebViewDelegate>
{
    YYLabel *_introlabel;
    UIButton *_foldButton;
    unsigned long long _htmlHash;
    UIView *_line;
    XMTableCellObject *_cellObject;
    NSString *_htmlTemplate;
}

+ (double)tableView:(id)arg1 heightForCellObject:(id)arg2;
@property(retain, nonatomic) NSString *htmlTemplate; // @synthesize htmlTemplate=_htmlTemplate;
@property(retain, nonatomic) XMTableCellObject *cellObject; // @synthesize cellObject=_cellObject;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)arg1;
- (void)foldAction:(id)arg1;
- (void)addTextAttachment:(id)arg1 attributedString:(id)arg2;
- (void)reloadCellWithCellObject:(id)arg1 tableViewDelegate:(id)arg2;
- (void)onClick;
- (void)layoutSubviews;
- (void)customInit;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

