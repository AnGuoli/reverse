//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PRLMTableViewWrapperDelegate-Protocol.h"
#import "WBNLFansRedPacketListCellDelegate-Protocol.h"
#import "WBNLRedPacketCountDownProtocol-Protocol.h"

@class NSArray, NSString, UITableView;
@protocol WBNLFansRedPacketListObjectDelegate;

@interface WBNLFansRedPacketListObject : NSObject <WBNLFansRedPacketListCellDelegate, PRLMTableViewWrapperDelegate, WBNLRedPacketCountDownProtocol>
{
    id <WBNLFansRedPacketListObjectDelegate> _delegate;
    NSArray *_dataArray;
    UITableView *_tableView;
}

@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSArray *dataArray; // @synthesize dataArray=_dataArray;
@property(nonatomic) __weak id <WBNLFansRedPacketListObjectDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)countDownWithIndexPath:(id)arg1;
- (void)countDownOnTableView;
- (void)tableViewCellSnatchBtnTouched:(int)arg1 withTag:(long long)arg2;
- (void)didTriggerLoadMoreInWrapper:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

