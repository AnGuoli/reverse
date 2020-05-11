//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, TrackPOIItem;

@protocol ITrackRoomMgrExt <NSObject>

@optional
- (void)OnTrackRoomStateDidChangedTo:(int)arg1;
- (void)OnHeadingChanged:(double)arg1;
- (void)OnTrackRoomError:(int)arg1 Message:(NSString *)arg2;
- (void)OnGetRoomPOI:(TrackPOIItem *)arg1;
- (void)OnExitTrackRoom;
- (void)OnRefreshTrackRoom:(NSArray *)arg1 Type:(int)arg2;
- (void)OnJoinTrackRoomOK:(NSString *)arg1;
- (void)OnOpenTrackRoom:(NSString *)arg1;
- (void)OnSta;
@end

