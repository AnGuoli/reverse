//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UIImageView, XMBaseEmoticon;

@interface XMEmoticonBaseCell : UICollectionViewCell
{
    UIImageView *_imageView;
    _Bool _hasInitialized;
    XMBaseEmoticon *_emoticon;
    id _userInfo;
}

@property(retain, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) XMBaseEmoticon *emoticon; // @synthesize emoticon=_emoticon;
@property(nonatomic) _Bool hasInitialized; // @synthesize hasInitialized=_hasInitialized;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)didInitialize;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

