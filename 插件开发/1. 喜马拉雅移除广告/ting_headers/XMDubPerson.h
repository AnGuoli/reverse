//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMPerson.h"

@class XMSocialCommunityModel;

@interface XMDubPerson : XMPerson
{
    long long _dubTotalLike;
    long long _totalCount;
    XMSocialCommunityModel *_communityInfo;
}

@property(retain, nonatomic) XMSocialCommunityModel *communityInfo; // @synthesize communityInfo=_communityInfo;
@property(nonatomic) long long totalCount; // @synthesize totalCount=_totalCount;
@property(nonatomic) long long dubTotalLike; // @synthesize dubTotalLike=_dubTotalLike;
- (void).cxx_destruct;

@end

