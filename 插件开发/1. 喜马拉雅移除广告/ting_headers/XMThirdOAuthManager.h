//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface XMThirdOAuthManager : NSObject
{
    NSString *appScheme;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)shareInstance;
@property(retain, nonatomic) NSString *appScheme; // @synthesize appScheme;
- (void).cxx_destruct;
- (void)showRegisterViewCtrl;
- (void)showAuthorizeViewCtrl;
- (id)thirdPushNavigationController;
- (void)removeNotfication;
- (void)didUserLogin:(id)arg1;
- (void)handleURL:(id)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

