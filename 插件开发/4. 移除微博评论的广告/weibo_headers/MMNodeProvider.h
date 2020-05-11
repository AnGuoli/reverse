//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MINodeProvider-Protocol.h"

@class NSArray, NSMutableDictionary, NSString;
@protocol MINodeProviderHelper;

@interface MMNodeProvider : NSObject <MINodeProvider>
{
    int _errorCountLimit;
    int _expireSeconds;
    int _expiresIn;
    NSArray *_nodes;
    NSObject<MINodeProviderHelper> *_helper;
    NSMutableDictionary *_errorCount;
    unsigned long long _currentIndex;
}

@property(nonatomic) int expiresIn; // @synthesize expiresIn=_expiresIn;
@property(nonatomic) unsigned long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(retain, nonatomic) NSMutableDictionary *errorCount; // @synthesize errorCount=_errorCount;
@property(retain, nonatomic) NSObject<MINodeProviderHelper> *helper; // @synthesize helper=_helper;
@property(nonatomic) int expireSeconds; // @synthesize expireSeconds=_expireSeconds;
@property(nonatomic) int errorCountLimit; // @synthesize errorCountLimit=_errorCountLimit;
@property(retain, nonatomic) NSArray *nodes; // @synthesize nodes=_nodes;
- (void).cxx_destruct;
- (id)markFailure:(id)arg1;
- (id)node;
- (void)clear;
- (id)initWithHelper:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

