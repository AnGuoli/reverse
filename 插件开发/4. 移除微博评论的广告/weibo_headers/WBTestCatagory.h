//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WBTestCatagoryProtocol-Protocol.h"

@class NSString, UITableView;

@interface WBTestCatagory : NSObject <WBTestCatagoryProtocol>
{
    UITableView *_tableView;
}

+ (id)cata_1__LINE__;
+ (id)classMethods;
+ (id)instanceMethods;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (long long)getTableViewFrom:(id)arg1 to:(id)arg2 error:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

