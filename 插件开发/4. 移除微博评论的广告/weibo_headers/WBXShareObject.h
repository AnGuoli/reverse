//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBModelObject.h"

#import "WBSharingObject-Protocol.h"

@class NSDictionary, NSString, UIImage, WBTimelinePageInfo, WBTimelineURL;

@interface WBXShareObject : WBModelObject <WBSharingObject>
{
    NSString *_objectId;
    NSString *_title;
    NSString *_summary;
    NSString *_url;
    NSString *_shareStyle;
    UIImage *_shareImage;
    NSString *_shareImagePath;
    NSDictionary *_analysisParameters;
    NSString *_customText;
}

@property(retain, nonatomic) NSString *customText; // @synthesize customText=_customText;
@property(retain, nonatomic) NSDictionary *analysisParameters; // @synthesize analysisParameters=_analysisParameters;
@property(retain, nonatomic) NSString *shareImagePath; // @synthesize shareImagePath=_shareImagePath;
@property(retain, nonatomic) UIImage *shareImage; // @synthesize shareImage=_shareImage;
@property(copy, nonatomic) NSString *shareStyle; // @synthesize shareStyle=_shareStyle;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *summary; // @synthesize summary=_summary;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *objectId; // @synthesize objectId=_objectId;
- (void).cxx_destruct;
- (void)readImageFromRelativePath:(id)arg1;
- (void)mergeDataFrom:(id)arg1;
- (_Bool)updateWithJSONDictionary:(id)arg1;
- (_Bool)updateWithDictionary:(id)arg1;
- (id)extraMessageID;
- (long long)extraMessageType;
- (id)composeJobParametersWithComposeElement:(id)arg1;
- (id)sharingTextConent;
@property(readonly, nonatomic) WBTimelinePageInfo *sharingPageInfo;
@property(readonly, nonatomic) long long composeSharingType;

// Remaining properties
@property(readonly, nonatomic) unsigned long long contentLength;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) long long extraMessageUid;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) WBTimelineURL *miniCard;
@property(readonly, nonatomic) NSString *pageUrl;
@property(readonly, nonatomic) _Bool removable;
@property(readonly) Class superclass;

@end

