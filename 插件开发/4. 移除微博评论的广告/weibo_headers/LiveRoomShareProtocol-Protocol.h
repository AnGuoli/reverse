//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class LiveRoomController, NSDictionary, NSString, UIViewController;

@protocol LiveRoomShareProtocol <NSObject>

@optional
- (void)shareMillionBabyLiveRoom:(UIViewController *)arg1 params:(NSDictionary *)arg2;
- (void)shareRecordVideo:(LiveRoomController *)arg1 params:(NSDictionary *)arg2;
- (void)updateServerShareUrl:(NSString *)arg1;
- (void)share:(LiveRoomController *)arg1 type:(long long)arg2 params:(NSDictionary *)arg3 completion:(void (^)(_Bool))arg4;
@end

