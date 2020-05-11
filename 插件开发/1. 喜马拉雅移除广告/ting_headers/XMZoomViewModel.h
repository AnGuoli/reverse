//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL, UIImage;

@interface XMZoomViewModel : NSObject
{
    long long _status;
    long long _remainDays;
    NSURL *_imageUrl;
    NSURL *_originUrl;
    UIImage *_image;
    UIImage *_origin;
    NSURL *_assetUrl;
    UIImage *_thumbnail;
    UIImage *_assetImage;
}

@property(retain, nonatomic) UIImage *assetImage; // @synthesize assetImage=_assetImage;
@property(retain, nonatomic) UIImage *thumbnail; // @synthesize thumbnail=_thumbnail;
@property(retain, nonatomic) NSURL *assetUrl; // @synthesize assetUrl=_assetUrl;
@property(retain, nonatomic) UIImage *origin; // @synthesize origin=_origin;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) NSURL *originUrl; // @synthesize originUrl=_originUrl;
@property(retain, nonatomic) NSURL *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(nonatomic) long long remainDays; // @synthesize remainDays=_remainDays;
@property(nonatomic) long long status; // @synthesize status=_status;
- (void).cxx_destruct;

@end

