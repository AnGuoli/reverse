//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UIView;

@interface XMCollectionViewCell : UICollectionViewCell
{
    UIView *_line;
    _Bool _showLine;
    struct UIEdgeInsets _separatorInset;
}

@property(nonatomic) _Bool showLine; // @synthesize showLine=_showLine;
@property(nonatomic) struct UIEdgeInsets separatorInset; // @synthesize separatorInset=_separatorInset;
- (void).cxx_destruct;
- (void)changeLineAtIndex:(long long)arg1 withCount:(long long)arg2;
- (void)changeBackgroundImageState:(int)arg1;
- (void)changeBackgroundAtIndex:(long long)arg1 withCount:(long long)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

