//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ALiSecurityGuardBridge : NSObject
{
}

+ (int)putData:(id)arg1 forKey:(id)arg2;
+ (id)getData:(id)arg1;
+ (int)putString:(id)arg1 forKey:(id)arg2;
+ (id)getString:(id)arg1;
+ (id)analyzeItemId:(id)arg1;
+ (void)pInitialize:(CDUnknownBlockType)arg1;
+ (id)getAppKey;
+ (id)sGuardImageName;
+ (id)authCode;
+ (_Bool)isSecurityGuardAvaleable;

@end

