//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView;

@interface XMDeletableImageView : UIView
{
    UIImageView *_imageView;
    UIButton *_deleteButton;
}

@property(retain, nonatomic) UIButton *deleteButton; // @synthesize deleteButton=_deleteButton;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (void)deleteSelf;
- (id)initWithFrame:(struct CGRect)arg1 AndTag:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

