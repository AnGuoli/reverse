//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface XMBindMphoneAlertItem : NSObject
{
    _Bool _isVerify;
    _Bool _isBuy;
    long long _type;
    NSString *_m_phone;
    NSString *_oldNickname;
    NSString *_oldAvatar;
    NSString *_neoNickname;
    NSString *_neoAvatar;
    NSString *_warmPrompt;
    NSString *_checkKey;
}

@property(copy, nonatomic) NSString *checkKey; // @synthesize checkKey=_checkKey;
@property(copy, nonatomic) NSString *warmPrompt; // @synthesize warmPrompt=_warmPrompt;
@property(nonatomic) _Bool isBuy; // @synthesize isBuy=_isBuy;
@property(nonatomic) _Bool isVerify; // @synthesize isVerify=_isVerify;
@property(copy, nonatomic) NSString *neoAvatar; // @synthesize neoAvatar=_neoAvatar;
@property(copy, nonatomic) NSString *neoNickname; // @synthesize neoNickname=_neoNickname;
@property(copy, nonatomic) NSString *oldAvatar; // @synthesize oldAvatar=_oldAvatar;
@property(copy, nonatomic) NSString *oldNickname; // @synthesize oldNickname=_oldNickname;
@property(copy, nonatomic) NSString *m_phone; // @synthesize m_phone=_m_phone;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)updateDateWithDic:(id)arg1;
- (void)dealloc;

@end

