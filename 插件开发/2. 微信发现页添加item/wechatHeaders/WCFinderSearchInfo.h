//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, WCFinderContact;

@interface WCFinderSearchInfo : NSObject
{
    WCFinderContact *_contact;
    NSString *_normalNickName;
    NSMutableArray *_nameHightkeywords;
    NSString *_normalSignature;
    NSMutableArray *_signatureHightkeywords;
    unsigned long long _fansCount;
    unsigned long long _friendFollowCount;
}

+ (id)finderSearchInfo:(id)arg1;
@property(nonatomic) unsigned long long friendFollowCount; // @synthesize friendFollowCount=_friendFollowCount;
@property(nonatomic) unsigned long long fansCount; // @synthesize fansCount=_fansCount;
@property(retain, nonatomic) NSMutableArray *signatureHightkeywords; // @synthesize signatureHightkeywords=_signatureHightkeywords;
@property(retain, nonatomic) NSString *normalSignature; // @synthesize normalSignature=_normalSignature;
@property(retain, nonatomic) NSMutableArray *nameHightkeywords; // @synthesize nameHightkeywords=_nameHightkeywords;
@property(retain, nonatomic) NSString *normalNickName; // @synthesize normalNickName=_normalNickName;
@property(retain, nonatomic) WCFinderContact *contact; // @synthesize contact=_contact;
- (void).cxx_destruct;
- (void)processHighlightSignature:(id)arg1;
- (void)processHighlightNickName:(id)arg1;

@end

