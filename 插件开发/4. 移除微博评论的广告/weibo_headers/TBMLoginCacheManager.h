//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock, NSMutableArray;

@interface TBMLoginCacheManager : NSObject
{
    _Bool _hasHandledJumpBack;
    _Bool _isLogining;
    _Bool _hasJumpOut;
    CDUnknownBlockType _userCancledLogin;
    NSLock *_loginLock;
    NSMutableArray *_firstHandlers;
    NSMutableArray *_secondHandlers;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableArray *secondHandlers; // @synthesize secondHandlers=_secondHandlers;
@property(retain, nonatomic) NSMutableArray *firstHandlers; // @synthesize firstHandlers=_firstHandlers;
@property(nonatomic) _Bool hasJumpOut; // @synthesize hasJumpOut=_hasJumpOut;
@property(retain) NSLock *loginLock; // @synthesize loginLock=_loginLock;
@property(copy, nonatomic) CDUnknownBlockType userCancledLogin; // @synthesize userCancledLogin=_userCancledLogin;
@property _Bool isLogining; // @synthesize isLogining=_isLogining;
@property(nonatomic) _Bool hasHandledJumpBack; // @synthesize hasHandledJumpBack=_hasHandledJumpBack;
- (void).cxx_destruct;
- (void)TBM_applicationDidBecomeActive:(id)arg1;
- (void)TBM_applicationWillResignActive:(id)arg1;
- (void)unlock;
- (_Bool)tryLock;
- (void)removeAllHandlers;
- (id)getFailureHandlers;
- (id)getSuccessHandlers;
- (id)getSecondHandler;
- (id)getFirstHandler;
- (void)cacheHandlerWithFirstHandler:(id)arg1 SecondHandler:(id)arg2;
- (id)init;

@end

