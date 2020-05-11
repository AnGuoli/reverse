//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HeaderHandleProtocol-Protocol.h"

@class HomeViewHeaderManager, NSString, WBFeedGroup, WBGroupInfoCardView;

@interface WBFeedGroupInfoHandler : NSObject <HeaderHandleProtocol>
{
    WBGroupInfoCardView *groupInfoView;
    WBFeedGroup *currentGroup;
    HomeViewHeaderManager *_headerManager;
}

@property(nonatomic) __weak HomeViewHeaderManager *headerManager; // @synthesize headerManager=_headerManager;
- (void).cxx_destruct;
- (_Bool)holdEvents:(id)arg1;
- (_Bool)responseEvents:(id)arg1;
- (CDStruct_b2a2dcfe)headerConfig;
- (unsigned long long)headerViewState;
- (id)showView;
- (void)groupInfoAction;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

