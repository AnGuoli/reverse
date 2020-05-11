//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MMChatKey, NSArray, NSError, NSMutableArray, NSMutableDictionary;

@interface MMFetchMessagesInfo : NSObject
{
    _Bool _hasMore;
    _Bool _hasNewMore;
    _Bool _forceRefreshUI;
    _Bool _isFetchNewHistoryMsg;
    _Bool _isNewMember;
    _Bool _isAutoShowGroupTopView;
    int _offset;
    int _totalCount;
    MMChatKey *_chat;
    NSError *_error;
    NSMutableArray *_messages;
    long long _last_read_mid;
    NSArray *_importantMsgs;
    NSMutableDictionary *_customInfo;
    NSArray *_topItems;
}

+ (id)createWithChat:(id)arg1 error:(id)arg2 messages:(id)arg3 offset:(int)arg4 totalCount:(int)arg5 hasMore:(_Bool)arg6 hasNewMore:(_Bool)arg7 last_read_mid:(long long)arg8;
@property(nonatomic) _Bool isAutoShowGroupTopView; // @synthesize isAutoShowGroupTopView=_isAutoShowGroupTopView;
@property(nonatomic) _Bool isNewMember; // @synthesize isNewMember=_isNewMember;
@property(retain, nonatomic) NSArray *topItems; // @synthesize topItems=_topItems;
@property(retain, nonatomic) NSMutableDictionary *customInfo; // @synthesize customInfo=_customInfo;
@property(retain, nonatomic) NSArray *importantMsgs; // @synthesize importantMsgs=_importantMsgs;
@property(nonatomic) long long last_read_mid; // @synthesize last_read_mid=_last_read_mid;
@property(nonatomic) _Bool isFetchNewHistoryMsg; // @synthesize isFetchNewHistoryMsg=_isFetchNewHistoryMsg;
@property(nonatomic) _Bool forceRefreshUI; // @synthesize forceRefreshUI=_forceRefreshUI;
@property(nonatomic) _Bool hasNewMore; // @synthesize hasNewMore=_hasNewMore;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(nonatomic) int totalCount; // @synthesize totalCount=_totalCount;
@property(nonatomic) int offset; // @synthesize offset=_offset;
@property(retain, nonatomic) NSMutableArray *messages; // @synthesize messages=_messages;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) MMChatKey *chat; // @synthesize chat=_chat;
- (void).cxx_destruct;
- (void)dealloc;

@end

