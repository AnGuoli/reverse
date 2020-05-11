//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface WBVideoMyVideoModel : NSObject
{
    NSString *_title;
    NSString *_imageName;
    unsigned long long _videoType;
    double _hight;
    unsigned long long _lineType;
    NSMutableArray *_items;
    long long _cachingCount;
}

@property(nonatomic) long long cachingCount; // @synthesize cachingCount=_cachingCount;
@property(retain, nonatomic) NSMutableArray *items; // @synthesize items=_items;
@property(nonatomic) unsigned long long lineType; // @synthesize lineType=_lineType;
@property(nonatomic) double hight; // @synthesize hight=_hight;
@property(readonly, nonatomic) unsigned long long videoType; // @synthesize videoType=_videoType;
@property(readonly, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)initWithTitle:(id)arg1 imageName:(id)arg2 videoType:(unsigned long long)arg3;

@end

