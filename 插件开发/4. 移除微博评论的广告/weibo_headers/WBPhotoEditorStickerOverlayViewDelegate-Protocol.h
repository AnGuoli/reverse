//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UITapGestureRecognizer, WBStickerView;

@protocol WBPhotoEditorStickerOverlayViewDelegate <NSObject>
- (void)stickerBecomeActiveByUser:(WBStickerView *)arg1;
- (void)stickerFinishedEditing:(WBStickerView *)arg1;
- (void)stickerDeleted:(WBStickerView *)arg1;

@optional
- (void)stickerViewDidTapped:(WBStickerView *)arg1;
- (void)stickerTapedBlankSpace:(UITapGestureRecognizer *)arg1;
- (struct CGRect)stickerViewDisplayRect;
- (void)stickerViewDidTouchEnd:(WBStickerView *)arg1;
- (void)stickerViewDidTouchBegin:(WBStickerView *)arg1;
@end

