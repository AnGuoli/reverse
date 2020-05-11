//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIButton, UIScrollView, WBUserEducation, WBUserProfileItemButton, WBUserProfileItemView, WBViewController;
@protocol WBUserProfileEditingViewControllerCommonProtocol;

@interface WBUserProfileEducationListViewAdapter : NSObject
{
    WBUserProfileItemButton *typeView;
    WBUserProfileItemView *nameView;
    WBUserProfileItemButton *dateView;
    WBUserProfileItemView *collegeView;
    UIButton *deleteButton;
    _Bool _deleteButtonHidden;
    _Bool _showSchoolTypeCell;
    UIScrollView *_scrollView;
    WBViewController<WBUserProfileEditingViewControllerCommonProtocol> *_controller;
    WBUserEducation *_education;
}

@property(nonatomic) WBUserEducation *education; // @synthesize education=_education;
@property(nonatomic) WBViewController<WBUserProfileEditingViewControllerCommonProtocol> *controller; // @synthesize controller=_controller;
@property(nonatomic) _Bool showSchoolTypeCell; // @synthesize showSchoolTypeCell=_showSchoolTypeCell;
@property(nonatomic) _Bool deleteButtonHidden; // @synthesize deleteButtonHidden=_deleteButtonHidden;
@property(nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void).cxx_destruct;
- (_Bool)requiredFieldHasInfo;
- (void)showDeleteButton;
- (void)hideDeleteButton;
- (void)layoutSubviews;
- (void)configureApperance;
- (void)bindData;
- (void)loadView;
- (void)dealloc;
- (id)initWithScrollView:(id)arg1 controller:(id)arg2;

@end

