//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class UIImageView, UILabel;

@interface XMAlbumListenedView : UIButton
{
    _Bool _ABTestValue;
    UILabel *_lastPlayItemLabel;
    UILabel *_playAttributeLabel;
    UIImageView *_lastPlayTrackIcon;
}

@property(nonatomic) _Bool ABTestValue; // @synthesize ABTestValue=_ABTestValue;
@property(retain, nonatomic) UIImageView *lastPlayTrackIcon; // @synthesize lastPlayTrackIcon=_lastPlayTrackIcon;
@property(retain, nonatomic) UILabel *playAttributeLabel; // @synthesize playAttributeLabel=_playAttributeLabel;
@property(retain, nonatomic) UILabel *lastPlayItemLabel; // @synthesize lastPlayItemLabel=_lastPlayItemLabel;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateLastPlayItem:(id)arg1;
- (void)customInit;
- (void)layoutSubviews;
- (id)init;
- (void)dealloc;

@end

