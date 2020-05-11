//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMMBaseLayout.h"

@class NSArray, XMMCommentListViewLayoutConfig, XMMMoment;

@interface XMMCommentListViewLayout : XMMBaseLayout
{
    id _delegate;
    NSArray *_labelLayoutArray;
}

+ (id)lookUpPictureImage;
@property(readonly, nonatomic) NSArray *labelLayoutArray; // @synthesize labelLayoutArray=_labelLayoutArray;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)roleImageOfUserInfo:(id)arg1;
- (struct CGSize)layout;
- (id)initWithSize:(struct CGSize)arg1 model:(id)arg2 config:(id)arg3;

// Remaining properties
@property(readonly, nonatomic) XMMCommentListViewLayoutConfig *config; // @dynamic config;
@property(readonly, nonatomic) XMMMoment *model; // @dynamic model;

@end

