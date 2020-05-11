//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBModelObject.h"

@class NSString;

@interface WBPhotoRecommendUser : WBModelObject
{
    NSString *_userID;
    NSString *_screen_name;
    NSString *_profile_image_url;
    NSString *_avatar_hd;
    NSString *_url;
    long long _verified_type;
    long long _verified_type_ext;
}

@property(nonatomic) long long verified_type_ext; // @synthesize verified_type_ext=_verified_type_ext;
@property(nonatomic) long long verified_type; // @synthesize verified_type=_verified_type;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *avatar_hd; // @synthesize avatar_hd=_avatar_hd;
@property(copy, nonatomic) NSString *profile_image_url; // @synthesize profile_image_url=_profile_image_url;
@property(copy, nonatomic) NSString *screen_name; // @synthesize screen_name=_screen_name;
@property(copy, nonatomic) NSString *userID; // @synthesize userID=_userID;
- (void).cxx_destruct;
- (_Bool)updateWithDictionary:(id)arg1;

@end

