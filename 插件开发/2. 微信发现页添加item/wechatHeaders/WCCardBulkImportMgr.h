//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBMessageObserverDelegate-Protocol.h"

@protocol WCCardBulkImportMgrDelegate;

@interface WCCardBulkImportMgr : MMObject <PBMessageObserverDelegate>
{
    id <WCCardBulkImportMgrDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)handleImportBulkCardResp:(id)arg1 Event:(unsigned int)arg2;
- (void)handleGetBulkCardResp:(id)arg1 Event:(unsigned int)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)importBulkCard:(id)arg1;
- (void)getBulkCard:(id)arg1;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

@end

