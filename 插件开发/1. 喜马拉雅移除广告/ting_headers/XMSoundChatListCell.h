//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSDictionary, UIButton, UIImageView, UILabel, UIView, XMWebImageView;
@protocol XMSoundChatListCellDelegate;

@interface XMSoundChatListCell : UITableViewCell
{
    id <XMSoundChatListCellDelegate> _delegate;
    CDUnknownBlockType _clickBlock;
    XMWebImageView *_headerView;
    UILabel *_titleLabel;
    UILabel *_mainVoiceLabel;
    UILabel *_noteLabel;
    UIButton *_unReadCountBtn;
    UIButton *_playBtn;
    UIView *_cardView;
    UIImageView *_bgView;
    NSDictionary *_headerImageDic;
}

@property(retain, nonatomic) NSDictionary *headerImageDic; // @synthesize headerImageDic=_headerImageDic;
@property(retain, nonatomic) UIImageView *bgView; // @synthesize bgView=_bgView;
@property(retain, nonatomic) UIView *cardView; // @synthesize cardView=_cardView;
@property(retain, nonatomic) UIButton *playBtn; // @synthesize playBtn=_playBtn;
@property(retain, nonatomic) UIButton *unReadCountBtn; // @synthesize unReadCountBtn=_unReadCountBtn;
@property(retain, nonatomic) UILabel *noteLabel; // @synthesize noteLabel=_noteLabel;
@property(retain, nonatomic) UILabel *mainVoiceLabel; // @synthesize mainVoiceLabel=_mainVoiceLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) XMWebImageView *headerView; // @synthesize headerView=_headerView;
@property(copy, nonatomic) CDUnknownBlockType clickBlock; // @synthesize clickBlock=_clickBlock;
@property(nonatomic) __weak id <XMSoundChatListCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onPlayBtnClick:(id)arg1;
- (void)onCardViewClick;
- (void)setCardBackgroundImageWithUnread:(_Bool)arg1;
- (void)setHeaderImage:(id)arg1;
- (void)resetState;
- (void)setModel:(id)arg1;
- (void)makeCellConstraint;
- (void)customInit;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

