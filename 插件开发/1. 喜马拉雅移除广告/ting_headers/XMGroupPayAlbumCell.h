//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel, UIView, XMGTAlbum, XMWebImageView;

@interface XMGroupPayAlbumCell : UITableViewCell
{
    XMWebImageView *_coverImageView;
    UILabel *_albumNameLabel;
    XMGTAlbum *_gtAlbum;
    UIImageView *_selectedImageView;
    UIView *_line;
}

+ (double)viewHeight;
@property(retain, nonatomic) UIView *line; // @synthesize line=_line;
@property(retain, nonatomic) UIImageView *selectedImageView; // @synthesize selectedImageView=_selectedImageView;
@property(retain, nonatomic) XMGTAlbum *gtAlbum; // @synthesize gtAlbum=_gtAlbum;
- (void).cxx_destruct;
- (void)buildUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

