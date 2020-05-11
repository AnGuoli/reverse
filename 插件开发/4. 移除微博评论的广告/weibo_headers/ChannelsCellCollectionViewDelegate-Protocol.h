//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "UICollectionViewDelegate-Protocol.h"

@class NSArray, NSIndexPath, WBChannelsCollectionView;

@protocol ChannelsCellCollectionViewDelegate <UICollectionViewDelegate>
- (void)dragCellCollectionView:(WBChannelsCollectionView *)arg1 newDataArrayAfterMove:(NSArray *)arg2;

@optional
- (void)dragCellCollectionView:(WBChannelsCollectionView *)arg1 moveCellFromIndexPath:(NSIndexPath *)arg2 toIndexPath:(NSIndexPath *)arg3;
- (void)dragCellCollectionViewCellEndMoving:(WBChannelsCollectionView *)arg1;
- (void)dragCellCollectionViewCellisMoving:(WBChannelsCollectionView *)arg1;
- (void)dragCellCollectionView:(WBChannelsCollectionView *)arg1 cellWillBeginMoveAtIndexPath:(NSIndexPath *)arg2;
- (void)dragCellWillBeginMove:(WBChannelsCollectionView *)arg1;
@end

