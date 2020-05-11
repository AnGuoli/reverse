//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBModelObject.h"

#import "WBSharingObject-Protocol.h"

@class NSString, WBStoryAggregateCardInfo, WBTimelinePageInfo, WBTimelineURL;

@interface WBStoryAggregateShareInfo : WBModelObject <WBSharingObject>
{
    WBStoryAggregateCardInfo *_cardInfo;
    NSString *_shareText;
}

@property(copy, nonatomic) NSString *shareText; // @synthesize shareText=_shareText;
@property(retain, nonatomic) WBStoryAggregateCardInfo *cardInfo; // @synthesize cardInfo=_cardInfo;
- (void).cxx_destruct;
- (id)composeJobPropertiesWithComposeElement:(id)arg1;
- (id)composeJobParametersWithComposeElement:(id)arg1;
@property(readonly, nonatomic) WBTimelineURL *miniCard;
- (long long)extraMessageType;
- (id)extraMessageID;
@property(readonly, nonatomic) WBTimelinePageInfo *sharingPageInfo;
@property(readonly, nonatomic) long long composeSharingType;
- (_Bool)updateWithDictionary:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) unsigned long long contentLength;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) long long extraMessageUid;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *pageUrl;
@property(readonly, nonatomic) _Bool removable;
@property(readonly) Class superclass;

@end

