//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMSoundCommentCellLayout.h"

@class XMCommentUserInfoViewLayout, XMSoundComment;

@interface XMSoundCommentCellRootLayout : XMSoundCommentCellLayout
{
    XMCommentUserInfoViewLayout *_userInfoViewLayout;
}

+ (id)newLayout:(id)arg1 withLine:(_Bool)arg2 hideShare:(_Bool)arg3;
+ (id)newLayout:(id)arg1 withLine:(_Bool)arg2;
+ (id)newLayout:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) XMCommentUserInfoViewLayout *userInfoViewLayout; // @dynamic userInfoViewLayout;
- (struct CGSize)layout;
- (_Bool)isExpiredForSize:(struct CGSize)arg1 model:(id)arg2 config:(id)arg3;

// Remaining properties
@property(readonly, nonatomic) XMSoundComment *model; // @dynamic model;

@end

