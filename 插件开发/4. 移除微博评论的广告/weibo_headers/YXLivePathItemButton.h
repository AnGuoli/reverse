//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class UIView;
@protocol YXLivePathItemButtonDelegate;

@interface YXLivePathItemButton : UIButton
{
    unsigned long long _index;
    UIView *_bgView;
    id <YXLivePathItemButtonDelegate> _delegate;
}

@property(nonatomic) __weak id <YXLivePathItemButtonDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
@property(nonatomic) unsigned long long index; // @synthesize index=_index;
- (void).cxx_destruct;
- (void)updateFrame:(_Bool)arg1;
- (id)initWithTitle:(id)arg1;

@end

