//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MovieSDKDataBaseObject.h"

@class NSArray, NSString;

@interface MovieSDKStartupData : MovieSDKDataBaseObject
{
    NSArray *_ad;
    NSString *_http_static_resource;
    NSString *_homepage_url;
    NSString *_publish_url;
    NSString *_videopoll_url;
    NSString *_poll_url;
}

@property(retain, nonatomic) NSString *poll_url; // @synthesize poll_url=_poll_url;
@property(retain, nonatomic) NSString *videopoll_url; // @synthesize videopoll_url=_videopoll_url;
@property(retain, nonatomic) NSString *publish_url; // @synthesize publish_url=_publish_url;
@property(retain, nonatomic) NSString *homepage_url; // @synthesize homepage_url=_homepage_url;
@property(retain, nonatomic) NSString *http_static_resource; // @synthesize http_static_resource=_http_static_resource;
@property(retain, nonatomic) NSArray *ad; // @synthesize ad=_ad;
- (void).cxx_destruct;
- (_Bool)parser:(id)arg1;

@end

