//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMWeKeChatCell.h"

@class UILabel, WKMessageView, XMWeKeMsgContentView;

@interface XMWeKeTextChatCell : XMWeKeChatCell
{
    XMWeKeMsgContentView *mcontentView;
    WKMessageView *_messageView;
    UILabel *_contentLabel;
}

@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) WKMessageView *messageView; // @synthesize messageView=_messageView;
@property(retain, nonatomic) XMWeKeMsgContentView *mcontentView; // @synthesize mcontentView;
- (void).cxx_destruct;
- (id)layouter;
- (void)setMessage:(id)arg1;

@end

