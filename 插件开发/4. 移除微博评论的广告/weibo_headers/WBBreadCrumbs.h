//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface WBBreadCrumbs : NSObject
{
    NSString *_info;
    NSDate *_timestamp;
    double _shelfLife;
}

+ (id)crumbsWithInfo:(id)arg1 andShelfLife:(double)arg2;
@property double shelfLife; // @synthesize shelfLife=_shelfLife;
@property(retain) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) NSString *info; // @synthesize info=_info;
- (void).cxx_destruct;
- (id)description;
- (id)initWithInfo:(id)arg1 andShelfLife:(double)arg2;

@end

