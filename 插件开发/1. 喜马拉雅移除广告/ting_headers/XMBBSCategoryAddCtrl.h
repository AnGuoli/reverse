//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMChatBaseVC.h"

@class CDZResult, UITextField, UIView, XMMCommunityCategory;

@interface XMBBSCategoryAddCtrl : XMChatBaseVC
{
    unsigned long long _communityId;
    XMMCommunityCategory *_category;
    CDZResult *_finishResult;
    UIView *_underlayView;
    UITextField *_textField;
}

@property(retain, nonatomic) UITextField *textField; // @synthesize textField=_textField;
@property(retain, nonatomic) UIView *underlayView; // @synthesize underlayView=_underlayView;
@property(retain, nonatomic) CDZResult *finishResult; // @synthesize finishResult=_finishResult;
@property(retain, nonatomic) XMMCommunityCategory *category; // @synthesize category=_category;
@property(nonatomic) unsigned long long communityId; // @synthesize communityId=_communityId;
- (void).cxx_destruct;
- (void)updateRightButton;
- (void)textFieldTextDidChange:(id)arg1;
- (void)clickRightButton:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)dealloc;
- (void)didInitialize;

@end

