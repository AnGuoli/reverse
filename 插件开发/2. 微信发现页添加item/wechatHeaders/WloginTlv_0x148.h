//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WloginTlv.h"

@class NSString;

@interface WloginTlv_0x148 : WloginTlv
{
    NSString *sAppName;
    unsigned int dwSSOVer;
    unsigned int dwAppId;
    unsigned int dwSubAppId;
    NSString *sAppVer;
    NSString *sAppSig;
}

@property(copy) NSString *sAppSig; // @synthesize sAppSig;
@property(copy) NSString *sAppVer; // @synthesize sAppVer;
@property unsigned int dwSubAppId; // @synthesize dwSubAppId;
@property unsigned int dwAppId; // @synthesize dwAppId;
@property unsigned int dwSSOVer; // @synthesize dwSSOVer;
@property(copy) NSString *sAppName; // @synthesize sAppName;
- (void)dealloc;
- (int)encode:(id)arg1;

@end

