//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBModelObject.h"

@class MMNoticeSettingButtonInfo, MMNoticeSettingTitleInfo, NSString;

@interface MMNoticeSettingInfo : WBModelObject
{
    MMNoticeSettingButtonInfo *_buttonInfo;
    long long _type;
    NSString *_group_id;
    NSString *_icon;
    NSString *_text;
    MMNoticeSettingTitleInfo *_titleInfo;
}

@property(retain, nonatomic) MMNoticeSettingTitleInfo *titleInfo; // @synthesize titleInfo=_titleInfo;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) NSString *group_id; // @synthesize group_id=_group_id;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) MMNoticeSettingButtonInfo *buttonInfo; // @synthesize buttonInfo=_buttonInfo;
- (void).cxx_destruct;
- (_Bool)updateWithDictionary:(id)arg1;

@end

