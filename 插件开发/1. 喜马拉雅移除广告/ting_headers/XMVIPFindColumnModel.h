//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, NSURL;

@interface XMVIPFindColumnModel : NSObject
{
    _Bool _isAuthorizedMember;
    long long _uid;
    NSString *_title;
    NSString *_subTitle;
    NSString *_nickname;
    NSMutableArray *_ownerTitle;
    NSURL *_bannerUrl;
    long long _memberProductId;
}

@property(nonatomic) long long memberProductId; // @synthesize memberProductId=_memberProductId;
@property(nonatomic) _Bool isAuthorizedMember; // @synthesize isAuthorizedMember=_isAuthorizedMember;
@property(retain, nonatomic) NSURL *bannerUrl; // @synthesize bannerUrl=_bannerUrl;
@property(retain, nonatomic) NSMutableArray *ownerTitle; // @synthesize ownerTitle=_ownerTitle;
@property(retain, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(retain, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long uid; // @synthesize uid=_uid;
- (void).cxx_destruct;
- (void)updatePropertiesFromDict:(id)arg1;
- (id)init;
- (void)dealloc;

@end

