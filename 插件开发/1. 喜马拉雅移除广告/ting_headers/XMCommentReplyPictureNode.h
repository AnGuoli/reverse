//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMCommentBaseNode.h"

@class NSURL, XMCommentPictureNode;

@interface XMCommentReplyPictureNode : XMCommentBaseNode
{
    XMCommentPictureNode *_node;
    NSURL *_thumbnailUrl;
    NSURL *_originUrl;
    struct CGSize _size;
}

@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(retain, nonatomic) NSURL *originUrl; // @synthesize originUrl=_originUrl;
@property(retain, nonatomic) NSURL *thumbnailUrl; // @synthesize thumbnailUrl=_thumbnailUrl;
@property(retain, nonatomic) XMCommentPictureNode *node; // @synthesize node=_node;
- (void).cxx_destruct;
- (void)didInitialize;

@end

