//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "OSSCredentialProvider-Protocol.h"

@class NSString;

@interface OSSCustomSignerCredentialProvider : NSObject <OSSCredentialProvider>
{
    CDUnknownBlockType _signContent;
}

@property(copy, nonatomic) CDUnknownBlockType signContent; // @synthesize signContent=_signContent;
- (void).cxx_destruct;
- (id)sign:(id)arg1 error:(id *)arg2;
- (id)initWithImplementedSigner:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

