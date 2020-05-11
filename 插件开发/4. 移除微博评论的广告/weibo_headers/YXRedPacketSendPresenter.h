//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSHashTable, NSMutableArray, NSString;
@protocol YXRedPacketSendPresenterDelegate;

@interface YXRedPacketSendPresenter : NSObject
{
    _Bool _isHasTrueLoveGroup;
    _Bool _isNoticeWorld;
    _Bool _isOpenTime;
    _Bool _isCoverTag;
    id <YXRedPacketSendPresenterDelegate> _delegate;
    NSString *_scid;
    NSString *_anchorId;
    NSString *_giftId;
    NSString *_giftName;
    long long _sourceType;
    NSDictionary *_configDict;
    long long _currencyType;
    long long _grabType;
    unsigned long long _redPacketType;
    NSMutableArray *_moneyOptions;
    NSString *_redPackTitle;
    long long _num_start;
    long long _num_end;
    long long _moneyLimit;
    long long _openTime;
    long long _money_start;
    long long _coverMoneyLimit;
    long long _command_start;
    long long _command_end;
    NSString *_command_defaultCommentWord;
    NSHashTable *_listeners;
}

@property(retain, nonatomic) NSHashTable *listeners; // @synthesize listeners=_listeners;
@property(copy, nonatomic) NSString *command_defaultCommentWord; // @synthesize command_defaultCommentWord=_command_defaultCommentWord;
@property(nonatomic) long long command_end; // @synthesize command_end=_command_end;
@property(nonatomic) long long command_start; // @synthesize command_start=_command_start;
@property(nonatomic) _Bool isCoverTag; // @synthesize isCoverTag=_isCoverTag;
@property(nonatomic) _Bool isOpenTime; // @synthesize isOpenTime=_isOpenTime;
@property(nonatomic) _Bool isNoticeWorld; // @synthesize isNoticeWorld=_isNoticeWorld;
@property(nonatomic) long long coverMoneyLimit; // @synthesize coverMoneyLimit=_coverMoneyLimit;
@property(nonatomic) long long money_start; // @synthesize money_start=_money_start;
@property(nonatomic) long long openTime; // @synthesize openTime=_openTime;
@property(nonatomic) long long moneyLimit; // @synthesize moneyLimit=_moneyLimit;
@property(nonatomic) long long num_end; // @synthesize num_end=_num_end;
@property(nonatomic) long long num_start; // @synthesize num_start=_num_start;
@property(retain, nonatomic) NSString *redPackTitle; // @synthesize redPackTitle=_redPackTitle;
@property(retain, nonatomic) NSMutableArray *moneyOptions; // @synthesize moneyOptions=_moneyOptions;
@property(nonatomic) _Bool isHasTrueLoveGroup; // @synthesize isHasTrueLoveGroup=_isHasTrueLoveGroup;
@property(nonatomic) unsigned long long redPacketType; // @synthesize redPacketType=_redPacketType;
@property(nonatomic) long long grabType; // @synthesize grabType=_grabType;
@property(nonatomic) long long currencyType; // @synthesize currencyType=_currencyType;
@property(retain, nonatomic) NSDictionary *configDict; // @synthesize configDict=_configDict;
@property(nonatomic) long long sourceType; // @synthesize sourceType=_sourceType;
@property(copy, nonatomic) NSString *giftName; // @synthesize giftName=_giftName;
@property(copy, nonatomic) NSString *giftId; // @synthesize giftId=_giftId;
@property(copy, nonatomic) NSString *anchorId; // @synthesize anchorId=_anchorId;
@property(copy, nonatomic) NSString *scid; // @synthesize scid=_scid;
@property(nonatomic) __weak id <YXRedPacketSendPresenterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_enumerateListeners:(CDUnknownBlockType)arg1;
- (void)delegateRedPacketSendError:(id)arg1;
- (void)delegateRedPacketSendFailure:(long long)arg1;
- (void)delegateRedPacketSendSuccess:(id)arg1;
- (void)delegateGetRedPacketConfigFailure;
- (void)delegateGetRedPacketConfigSuccess;
- (id)numberFromString:(id)arg1;
- (void)upadteConfigInfo;
- (void)sendRedPacket:(id)arg1;
- (void)getRedPacketResourceCallBack:(CDUnknownBlockType)arg1;
- (void)getRedPacketConfig;
- (void)removeListnener:(id)arg1;
- (void)addListnener:(id)arg1;
- (void)dealloc;
- (id)initWithCurrencyType:(long long)arg1;

@end

