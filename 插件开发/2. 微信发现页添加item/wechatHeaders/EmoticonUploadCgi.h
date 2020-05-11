//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "EmojiUploadCgiDelegate-Protocol.h"

@class EmoticonUploadInfoObj, NSMutableSet, NSString;
@protocol EmoticonUploadCgiDelegate;

@interface EmoticonUploadCgi : MMObject <EmojiUploadCgiDelegate>
{
    unsigned long long m_requestStartTime;
    unsigned int _m_startPos;
    unsigned int _m_totalLen;
    EmoticonUploadInfoObj *m_uploadInfoObj;
    id <EmoticonUploadCgiDelegate> _delegate;
    NSString *_m_md5;
    NSMutableSet *_cgiSets;
}

@property(retain, nonatomic) NSMutableSet *cgiSets; // @synthesize cgiSets=_cgiSets;
@property(retain, nonatomic) NSString *m_md5; // @synthesize m_md5=_m_md5;
@property(nonatomic) unsigned int m_totalLen; // @synthesize m_totalLen=_m_totalLen;
@property(nonatomic) unsigned int m_startPos; // @synthesize m_startPos=_m_startPos;
@property(nonatomic) __weak id <EmoticonUploadCgiDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) EmoticonUploadInfoObj *uploadInfoObj; // @synthesize uploadInfoObj=m_uploadInfoObj;
- (void).cxx_destruct;
- (void)onEmojiUploadBufferCgiFinished:(id)arg1 isSuccess:(_Bool)arg2 isEnd:(_Bool)arg3 activityId:(id)arg4;
- (void)callFailedDelegateWithReason:(unsigned long long)arg1;
- (_Bool)internalRequestWithReuseCgi:(id)arg1;
- (_Bool)startRequest;
- (_Bool)isActive;
- (id)initWithUploadInfoObj:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

