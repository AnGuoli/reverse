//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMBaseVC.h"

@class UIButton, UIImage, XMBBSCommunity, XMWebImageButton;

@interface XMBBSCommunityCreateLogoController : XMBaseVC
{
    XMWebImageButton *_btnIcon;
    UIButton *_btnNext;
    XMBBSCommunity *_community;
    UIImage *_selectedImage;
}

@property(retain, nonatomic) UIImage *selectedImage; // @synthesize selectedImage=_selectedImage;
@property(retain, nonatomic) XMBBSCommunity *community; // @synthesize community=_community;
- (void).cxx_destruct;
- (id)handlePhotoFromImagePicker:(id)arg1;
- (void)p_showAlbum;
- (void)updateImage:(id)arg1;
- (void)dismissimagePicker;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)p_showCamera;
- (void)presentCtrl:(id)arg1;
- (void)p_onImageInsertAction;
- (void)onLogo;
- (void)gotoIntroView;
- (void)onNext;
- (void)viewDidLoad;

@end

