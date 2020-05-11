//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSURL, XMAVPlayer, XMAlbumIntroRichTextCell, XMProcessBar;

@protocol XMAlbumIntroRichTextCellDelegate <NSObject>
- (void)sliderChange:(XMProcessBar *)arg1;
- (void)playButtonTap:(XMAlbumIntroRichTextCell *)arg1;
- (void)fullScreenButtonTap:(XMAlbumIntroRichTextCell *)arg1;
- (void)muteButtonTap:(XMAlbumIntroRichTextCell *)arg1;
- (XMAVPlayer *)playerOfView:(XMAlbumIntroRichTextCell *)arg1;
- (void)didTapPlayButton:(XMAlbumIntroRichTextCell *)arg1;
- (void)onMoreClickedWithTag:(long long)arg1;
- (void)richTextCell:(XMAlbumIntroRichTextCell *)arg1 onClickWithUrl:(NSURL *)arg2;
- (void)richTextImageSrcChanged;
- (void)updateRichCellHeight:(double)arg1 richCell:(XMAlbumIntroRichTextCell *)arg2;
@end

