//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface XMXLogBusiness : NSObject
{
    NSString *_currentXLogIndentifier;
}

+ (id)shareInstance;
@property(retain, nonatomic) NSString *currentXLogIndentifier; // @synthesize currentXLogIndentifier=_currentXLogIndentifier;
- (void).cxx_destruct;
- (id)joinDictKeysAndValue:(id)arg1;
- (void)recordRequestLog:(id)arg1 params:(id)arg2 cookie:(id)arg3 requestTime:(double)arg4 responseTime:(double)arg5 responseCode:(long long)arg6 responseString:(id)arg7;
- (void)resetXLogIndentifier;
- (id)xlogIndentifier;
- (id)getUUid;
- (id)init;

@end

