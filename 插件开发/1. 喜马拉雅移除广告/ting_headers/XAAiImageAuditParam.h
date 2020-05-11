//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "XMMANativeMethodParamProtocol-Protocol.h"

@class NSString;

@interface XAAiImageAuditParam : NSObject <XMMANativeMethodParamProtocol>
{
    NSString *_service;
    NSString *_api;
    id _stringMap;
    id _fileMap;
}

@property(retain, nonatomic) id fileMap; // @synthesize fileMap=_fileMap;
@property(retain, nonatomic) id stringMap; // @synthesize stringMap=_stringMap;
@property(copy, nonatomic) NSString *api; // @synthesize api=_api;
@property(copy, nonatomic) NSString *service; // @synthesize service=_service;
- (void).cxx_destruct;
- (_Bool)isValidate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

