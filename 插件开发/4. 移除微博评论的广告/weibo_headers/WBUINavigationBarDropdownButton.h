//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class NSString, UIImageView;

@interface WBUINavigationBarDropdownButton : UIButton
{
    _Bool _activated;
    _Bool _enablesDropDown;
    UIImageView *_arrowImageView;
}

@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(nonatomic) _Bool enablesDropDown; // @synthesize enablesDropDown=_enablesDropDown;
@property(nonatomic) _Bool activated; // @synthesize activated=_activated;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *title;
- (id)initWithFrame:(struct CGRect)arg1;

@end

