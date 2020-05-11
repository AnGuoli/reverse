//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBModelObject.h"

@class MMMessageFlowMainPicInfo, MMMessageFlowSharingShieldInfo, NSString, WBUser;

@interface MMNotceSettingNoticeItem : WBModelObject
{
    _Bool _setting;
    MMMessageFlowMainPicInfo *_mainPicInfo;
    WBUser *_mainUser;
    NSString *_title;
    NSString *_detail;
    MMMessageFlowSharingShieldInfo *_shieldInfo;
    NSString *_scheme;
    NSString *_oid;
}

@property(copy, nonatomic) NSString *oid; // @synthesize oid=_oid;
@property(nonatomic) _Bool setting; // @synthesize setting=_setting;
@property(retain, nonatomic) NSString *scheme; // @synthesize scheme=_scheme;
@property(retain, nonatomic) MMMessageFlowSharingShieldInfo *shieldInfo; // @synthesize shieldInfo=_shieldInfo;
@property(retain, nonatomic) NSString *detail; // @synthesize detail=_detail;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) WBUser *mainUser; // @synthesize mainUser=_mainUser;
@property(retain, nonatomic) MMMessageFlowMainPicInfo *mainPicInfo; // @synthesize mainPicInfo=_mainPicInfo;
- (void).cxx_destruct;
- (_Bool)updateWithDictionary:(id)arg1;

@end

