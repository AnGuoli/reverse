//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class WCCommentViewFB, WCUserComment;

@protocol WCCommentViewFBDelegate <NSObject>

@optional
- (void)onCommentViewEmotionViewSingleClicked:(WCUserComment *)arg1 withRect:(struct CGRect)arg2;
- (void)onFulltextBtnClick:(WCUserComment *)arg1;
- (void)onRestoreCommentCellView:(WCUserComment *)arg1;
- (void)onReloadCommentCellView:(WCUserComment *)arg1;
- (void)onCommentViewClicked:(WCCommentViewFB *)arg1;
@end

