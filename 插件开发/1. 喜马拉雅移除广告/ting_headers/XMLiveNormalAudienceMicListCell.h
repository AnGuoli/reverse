//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMLiveTableViewCell.h"

@class UILabel, XMLiveUser, XMWebImageView;

@interface XMLiveNormalAudienceMicListCell : XMLiveTableViewCell
{
    UILabel *_rankLabel;
    UILabel *_nicknameLabel;
    XMWebImageView *_avatarView;
    XMLiveUser *_item;
    CDUnknownBlockType _acceptBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType acceptBlock; // @synthesize acceptBlock=_acceptBlock;
@property(retain, nonatomic) XMLiveUser *item; // @synthesize item=_item;
@property(retain, nonatomic) XMWebImageView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) UILabel *nicknameLabel; // @synthesize nicknameLabel=_nicknameLabel;
@property(retain, nonatomic) UILabel *rankLabel; // @synthesize rankLabel=_rankLabel;
- (void)changeLineAtIndex:(long long)arg1 withCount:(long long)arg2;
- (void)customInit;
- (void)setupUnits;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

