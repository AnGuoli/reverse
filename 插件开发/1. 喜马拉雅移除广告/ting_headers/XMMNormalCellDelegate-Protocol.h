//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class XMMNormalCell;

@protocol XMMNormalCellDelegate <NSObject>

@optional
- (void)normalCellDidTapFollowButton:(XMMNormalCell *)arg1;
- (void)normalCellDidTapSourceButton:(XMMNormalCell *)arg1;
- (void)normalCellDidTapHotCommentPraiseButton:(XMMNormalCell *)arg1;
- (void)normalCellDidTapHotCommentNickname:(XMMNormalCell *)arg1;
- (void)normalCellDidTapHotComment:(XMMNormalCell *)arg1;
- (void)normalCellDidTapShareButton:(XMMNormalCell *)arg1;
- (void)normalCellDidTapCommentButton:(XMMNormalCell *)arg1;
- (void)normalCellDidTapPraiseButton:(XMMNormalCell *)arg1;
- (void)normalCellDidTapMoreButton:(XMMNormalCell *)arg1;
- (void)normalCellDidTapAvatarImageView:(XMMNormalCell *)arg1;
@end

