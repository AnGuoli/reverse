//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MovieSDKDataBaseObject.h"

@class MovieSDKCinemaShowTimeCoupon, MovieSDKCinemaSubDesc, NSNumber, NSString;

@interface MovieSDKCinemaShowTimeShowInfo : MovieSDKDataBaseObject
{
    _Bool _is_current_filmid;
    NSString *_show_id;
    NSString *_weibo_filmid;
    NSString *_show_name;
    NSString *_poster;
    NSNumber *_duration;
    NSNumber *_action_type;
    NSNumber *_action_count;
    NSString *_action_desc;
    NSString *_scheme;
    MovieSDKCinemaShowTimeCoupon *_huibiao;
    MovieSDKCinemaSubDesc *_sub_desc;
}

@property(retain, nonatomic) MovieSDKCinemaSubDesc *sub_desc; // @synthesize sub_desc=_sub_desc;
@property(retain, nonatomic) MovieSDKCinemaShowTimeCoupon *huibiao; // @synthesize huibiao=_huibiao;
@property(nonatomic) _Bool is_current_filmid; // @synthesize is_current_filmid=_is_current_filmid;
@property(retain, nonatomic) NSString *scheme; // @synthesize scheme=_scheme;
@property(retain, nonatomic) NSString *action_desc; // @synthesize action_desc=_action_desc;
@property(retain, nonatomic) NSNumber *action_count; // @synthesize action_count=_action_count;
@property(retain, nonatomic) NSNumber *action_type; // @synthesize action_type=_action_type;
@property(retain, nonatomic) NSNumber *duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSString *poster; // @synthesize poster=_poster;
@property(retain, nonatomic) NSString *show_name; // @synthesize show_name=_show_name;
@property(retain, nonatomic) NSString *weibo_filmid; // @synthesize weibo_filmid=_weibo_filmid;
@property(retain, nonatomic) NSString *show_id; // @synthesize show_id=_show_id;
- (void).cxx_destruct;
- (_Bool)parser:(id)arg1;

@end

