//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface XMInmobiAdItem : NSObject
{
    NSString *_imgurl;
    NSString *_landingURL;
    NSArray *_click_trackers;
    NSArray *_render_trackers;
    NSArray *_loaded_trackers;
}

+ (id)parseInmobiItemFromDic:(id)arg1;
@property(retain, nonatomic) NSArray *loaded_trackers; // @synthesize loaded_trackers=_loaded_trackers;
@property(retain, nonatomic) NSArray *render_trackers; // @synthesize render_trackers=_render_trackers;
@property(retain, nonatomic) NSArray *click_trackers; // @synthesize click_trackers=_click_trackers;
@property(copy, nonatomic) NSString *landingURL; // @synthesize landingURL=_landingURL;
@property(copy, nonatomic) NSString *imgurl; // @synthesize imgurl=_imgurl;
- (void).cxx_destruct;
- (void)dealloc;

@end

