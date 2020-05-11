//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBTableViewCell.h"

@class NSString, UIButton, UIImageView, UIView;

@interface WBEmoticonGroupViewCell : WBTableViewCell
{
    _Bool _showSeparateLine;
    _Bool _isDarkMode;
    UIButton *_emoticonGroupButton;
    UIImageView *_emoticonGroupIconView;
    UIView *_separateLineView;
    NSString *_emoticonGroupButtonUrl;
}

@property(nonatomic) _Bool isDarkMode; // @synthesize isDarkMode=_isDarkMode;
@property(retain, nonatomic) NSString *emoticonGroupButtonUrl; // @synthesize emoticonGroupButtonUrl=_emoticonGroupButtonUrl;
@property(retain, nonatomic) UIView *separateLineView; // @synthesize separateLineView=_separateLineView;
@property(nonatomic) _Bool showSeparateLine; // @synthesize showSeparateLine=_showSeparateLine;
@property(retain, nonatomic) UIImageView *emoticonGroupIconView; // @synthesize emoticonGroupIconView=_emoticonGroupIconView;
@property(retain, nonatomic) UIButton *emoticonGroupButton; // @synthesize emoticonGroupButton=_emoticonGroupButton;
- (void).cxx_destruct;
- (void)setSelectedGroup:(_Bool)arg1;
- (void)setEmoticonGroupIconName:(id)arg1;
- (void)setEmoticonGroupIcon:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

