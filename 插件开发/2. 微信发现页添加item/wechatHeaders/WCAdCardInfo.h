//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSString, WCAdCardBtnInfo, WCAdRatingCardInfo;

@interface WCAdCardInfo : NSObject <NSCoding>
{
    NSString *title;
    NSString *description;
    WCAdRatingCardInfo *adRatingCardInfo;
    WCAdCardBtnInfo *adCardBtnInfo;
}

@property(retain, nonatomic) WCAdCardBtnInfo *adCardBtnInfo; // @synthesize adCardBtnInfo;
@property(retain, nonatomic) WCAdRatingCardInfo *adRatingCardInfo; // @synthesize adRatingCardInfo;
@property(retain, nonatomic) NSString *description; // @synthesize description;
@property(retain, nonatomic) NSString *title; // @synthesize title;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

