//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, WCFinderFeedDetailRootCommentCell;

@protocol WCFinderFeedDetailRootCommentCellDelegate <NSObject>

@optional
- (void)onClickSubCommentWeChat:(NSString *)arg1;
- (void)onClickSubCommentFinder:(NSString *)arg1;
- (void)rootCommentCell:(WCFinderFeedDetailRootCommentCell *)arg1 clickTextViewAtSection:(unsigned long long)arg2;
- (void)rootCommentCell:(WCFinderFeedDetailRootCommentCell *)arg1 clickCommentRepostAtSection:(unsigned long long)arg2;
- (void)rootCommentCell:(WCFinderFeedDetailRootCommentCell *)arg1 clickAvatarAtSection:(unsigned long long)arg2;
- (void)rootCommentCell:(WCFinderFeedDetailRootCommentCell *)arg1 longPressAtSection:(unsigned long long)arg2;
- (void)rootCommentCell:(WCFinderFeedDetailRootCommentCell *)arg1 clickFullRefContentTextAtSection:(unsigned long long)arg2 isExpand:(_Bool)arg3;
- (void)rootCommentCell:(WCFinderFeedDetailRootCommentCell *)arg1 clickFullTextAtSection:(unsigned long long)arg2 isExpand:(_Bool)arg3;
- (void)rootCommentCell:(WCFinderFeedDetailRootCommentCell *)arg1 likeCommentSection:(unsigned long long)arg2;
@end

