//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBGroupManagementCell.h"

@class WBContactAvatarView;

@interface WBGroupCardCell : WBGroupManagementCell
{
    WBContactAvatarView *_avatarView;
}

@property(retain, nonatomic) WBContactAvatarView *avatarView; // @synthesize avatarView=_avatarView;
- (void).cxx_destruct;
- (void)showIconRadius:(_Bool)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (void)loadSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

