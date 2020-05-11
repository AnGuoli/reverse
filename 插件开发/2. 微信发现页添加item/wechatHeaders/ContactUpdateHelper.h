//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IStrangerContactMgrExt-Protocol.h"

@class NSString;

@interface ContactUpdateHelper : NSObject <IStrangerContactMgrExt>
{
    NSString *_m_moduleName;
    NSString *_m_userName;
    CDUnknownBlockType _m_block;
}

@property(copy, nonatomic) CDUnknownBlockType m_block; // @synthesize m_block=_m_block;
@property(retain, nonatomic) NSString *m_userName; // @synthesize m_userName=_m_userName;
@property(retain, nonatomic) NSString *m_moduleName; // @synthesize m_moduleName=_m_moduleName;
- (void).cxx_destruct;
- (void)onStrangerContactUpdateForbidden:(id)arg1;
- (void)onStrangerContactUpdated:(id)arg1 Contact:(id)arg2;
- (void)clearBlock;
- (void)updateStangerContact;
- (_Bool)strangerContactToBlock;
- (_Bool)normalContactToBlock;
- (void)startWithUserName:(id)arg1 onUpdate:(CDUnknownBlockType)arg2;
- (id)initWithModuleName:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

