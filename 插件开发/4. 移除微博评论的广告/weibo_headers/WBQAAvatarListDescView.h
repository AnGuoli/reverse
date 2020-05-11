//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, UILabel, WBArticleInteractUserInfo;

@interface WBQAAvatarListDescView : UIView
{
    WBArticleInteractUserInfo *_articleInteractUserInfo;
    NSArray *_interactUsers;
    UILabel *_userLabel;
    UILabel *_watchDescLabel;
}

@property(retain, nonatomic) UILabel *watchDescLabel; // @synthesize watchDescLabel=_watchDescLabel;
@property(retain, nonatomic) UILabel *userLabel; // @synthesize userLabel=_userLabel;
@property(retain, nonatomic) NSArray *interactUsers; // @synthesize interactUsers=_interactUsers;
@property(retain, nonatomic) WBArticleInteractUserInfo *articleInteractUserInfo; // @synthesize articleInteractUserInfo=_articleInteractUserInfo;
- (void).cxx_destruct;
- (void)tapUserList;
- (id)_statisticsCountStr:(long long)arg1;
- (id)_attributedStringWithOriginalString:(id)arg1 andInteractCountString:(id)arg2;
- (void)configWatchDescLabel;
- (void)configUserLabel;
- (void)_updateSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

