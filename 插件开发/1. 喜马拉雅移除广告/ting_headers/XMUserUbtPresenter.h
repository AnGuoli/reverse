//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class XMUserViewController;

@interface XMUserUbtPresenter : NSObject
{
    XMUserViewController *_viewController;
}

@property(nonatomic) __weak XMUserViewController *viewController; // @synthesize viewController=_viewController;
- (void).cxx_destruct;
- (void)showCommentsModule;
- (void)postShareQRcodeState:(unsigned long long)arg1 platformType:(unsigned long long)arg2 subPlatformType:(unsigned long long)arg3;
- (void)postShareDataTrackState:(unsigned long long)arg1 platformType:(unsigned long long)arg2 subPlatformType:(unsigned long long)arg3;
- (id)personItem;

@end

