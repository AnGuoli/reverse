//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSString, UITableView, XMPlayListModel;

@interface XMPlayListIntroPop : UIView <UITableViewDelegate, UITableViewDataSource>
{
    UIView *_contentView;
    UITableView *_listView;
    XMPlayListModel *_model;
    double _ContentViewTop;
}

@property(nonatomic) double ContentViewTop; // @synthesize ContentViewTop=_ContentViewTop;
@property(retain, nonatomic) XMPlayListModel *model; // @synthesize model=_model;
@property(retain, nonatomic) UITableView *listView; // @synthesize listView=_listView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)show;
- (void)customInit;
- (id)initWithPlayListModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

