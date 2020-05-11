//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBModelObject.h"

@class NSString;

@interface WBShopTopic : WBModelObject
{
    NSString *_tid;
    NSString *_name;
    NSString *_desc;
    NSString *_img;
    NSString *_originalImageURL;
    NSString *_view_url;
    NSString *_channel;
    NSString *_status;
    NSString *_ctime;
    NSString *_screen_name;
    NSString *_avatar;
    NSString *_collect_status;
    NSString *_objectID;
    NSString *_url;
}

+ (_Bool)isValidForDictionary:(id)arg1;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *objectID; // @synthesize objectID=_objectID;
@property(retain, nonatomic) NSString *collect_status; // @synthesize collect_status=_collect_status;
@property(retain, nonatomic) NSString *avatar; // @synthesize avatar=_avatar;
@property(retain, nonatomic) NSString *screen_name; // @synthesize screen_name=_screen_name;
@property(retain, nonatomic) NSString *ctime; // @synthesize ctime=_ctime;
@property(retain, nonatomic) NSString *status; // @synthesize status=_status;
@property(retain, nonatomic) NSString *channel; // @synthesize channel=_channel;
@property(retain, nonatomic) NSString *view_url; // @synthesize view_url=_view_url;
@property(retain, nonatomic) NSString *originalImageURL; // @synthesize originalImageURL=_originalImageURL;
@property(retain, nonatomic) NSString *img; // @synthesize img=_img;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *tid; // @synthesize tid=_tid;
- (void).cxx_destruct;
- (id)dictionaryWithValues;
- (_Bool)updateWithDictionary:(id)arg1;

@end

