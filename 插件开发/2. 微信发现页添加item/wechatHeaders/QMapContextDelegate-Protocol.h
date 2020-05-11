//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSString, QMapContext, QTileRequestParam, TBIndoorBuilding;

@protocol QMapContextDelegate <NSObject>

@optional
- (void)mapContextMapLoadFinish:(QMapContext *)arg1;
- (void)mapContext:(QMapContext *)arg1 mapStatusChange:(int)arg2;
- (void)mapContext:(QMapContext *)arg1 saveTileData:(NSData *)arg2 withUrl:(NSString *)arg3;
- (void)mapContext:(QMapContext *)arg1 cancelDownloadTile:(QTileRequestParam *)arg2;
- (void)mapContext:(QMapContext *)arg1 downloadTile:(QTileRequestParam *)arg2;
- (void)mapContext:(QMapContext *)arg1 didChangeActiveBuilding:(TBIndoorBuilding *)arg2;
- (void)mapContextDidMapStatusChangedAfterDraw:(QMapContext *)arg1;
- (void)mapContextDidMapStatusChangedBeforeDraw:(QMapContext *)arg1;
@end

