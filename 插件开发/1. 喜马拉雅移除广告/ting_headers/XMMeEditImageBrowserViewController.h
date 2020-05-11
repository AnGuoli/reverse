//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMBaseViewController.h"

@class UIAlertView, UIImage, UIScrollView, XMEditSoundItemCoverItem, XMWebImageView;
@protocol XMMeEditImageBrowserViewControllerDelegate;

@interface XMMeEditImageBrowserViewController : XMBaseViewController
{
    UIScrollView *_bgScrollView;
    XMWebImageView *_webImage;
    _Bool _isLocalResource;
    id <XMMeEditImageBrowserViewControllerDelegate> _delegate;
    XMEditSoundItemCoverItem *_editCoverItem;
    UIAlertView *_myAlertView;
    UIImage *_localImage;
}

@property(retain, nonatomic) UIImage *localImage; // @synthesize localImage=_localImage;
@property(retain, nonatomic) UIAlertView *myAlertView; // @synthesize myAlertView=_myAlertView;
@property(retain, nonatomic) XMEditSoundItemCoverItem *editCoverItem; // @synthesize editCoverItem=_editCoverItem;
@property(nonatomic) __weak id <XMMeEditImageBrowserViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isLocalResource; // @synthesize isLocalResource=_isLocalResource;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)delImage;
- (void)reloadViews;
- (void)touch;
- (void)back;
- (void)viewDidLoad;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (id)initWithEditCoverItem:(id)arg1;
- (id)initWithLocalImageData:(id)arg1;
- (void)dealloc;

@end

