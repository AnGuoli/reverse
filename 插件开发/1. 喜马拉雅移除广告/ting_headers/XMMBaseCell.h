//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMCommentBaseCell.h"

@class UIView, XMMCommunityTheme;

@interface XMMBaseCell : XMCommentBaseCell
{
    XMMCommunityTheme *_theme;
    UIView *_cardView;
}

+ (id)layoutArrayWithSize:(struct CGSize)arg1 modelArray:(id)arg2 config:(id)arg3;
+ (id)generateLayoutWithSize:(struct CGSize)arg1 model:(id)arg2 config:(id)arg3;
+ (id)cellWithReuseIdentifier:(id)arg1;
+ (id)reuseIdentifierWithModel:(id)arg1;
+ (id)reuseIdentifierClassDictionary;
@property(retain, nonatomic) UIView *cardView; // @synthesize cardView=_cardView;
@property(retain, nonatomic) XMMCommunityTheme *theme; // @synthesize theme=_theme;
- (void).cxx_destruct;
- (void)removeCardShadow;
- (void)addCardShadow;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setModel:(id)arg1;
- (void)setLayout:(id)arg1;
- (void)didInitialize;

@end

