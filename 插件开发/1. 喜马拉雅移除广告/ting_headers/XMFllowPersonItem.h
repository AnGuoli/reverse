//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XMBase/XMModel.h>

@class NSString;

@interface XMFllowPersonItem : XMModel
{
    _Bool _isSheld;
    NSString *_smallLogo;
    NSString *_nickname;
    long long _uid;
}

@property(nonatomic) _Bool isSheld; // @synthesize isSheld=_isSheld;
@property(nonatomic) long long uid; // @synthesize uid=_uid;
@property(retain, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(retain, nonatomic) NSString *smallLogo; // @synthesize smallLogo=_smallLogo;
- (void).cxx_destruct;

@end

