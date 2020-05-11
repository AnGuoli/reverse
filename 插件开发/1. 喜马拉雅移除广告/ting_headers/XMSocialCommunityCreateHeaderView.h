//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "XMTImagePickerControllerDelegate-Protocol.h"

@class CDZButton, NSData, NSString, XMSocialCommunityModel, XMWebImageView;
@protocol XMSocialCommunityCreateHeaderViewDelegate;

@interface XMSocialCommunityCreateHeaderView : UIView <XMTImagePickerControllerDelegate>
{
    _Bool _isEditingCover;
    XMSocialCommunityModel *_community;
    id <XMSocialCommunityCreateHeaderViewDelegate> _delegate;
    XMWebImageView *_iconImgV;
    CDZButton *_selectIconBtn;
    CDZButton *_cameraImageBtn;
    CDZButton *_selectCoverBtn;
    NSData *_imageUpload;
    NSString *_uploadImageFilePath;
}

@property(retain, nonatomic) NSString *uploadImageFilePath; // @synthesize uploadImageFilePath=_uploadImageFilePath;
@property(retain, nonatomic) NSData *imageUpload; // @synthesize imageUpload=_imageUpload;
@property(nonatomic) _Bool isEditingCover; // @synthesize isEditingCover=_isEditingCover;
@property(retain, nonatomic) CDZButton *selectCoverBtn; // @synthesize selectCoverBtn=_selectCoverBtn;
@property(retain, nonatomic) CDZButton *cameraImageBtn; // @synthesize cameraImageBtn=_cameraImageBtn;
@property(retain, nonatomic) CDZButton *selectIconBtn; // @synthesize selectIconBtn=_selectIconBtn;
@property(retain, nonatomic) XMWebImageView *iconImgV; // @synthesize iconImgV=_iconImgV;
@property(nonatomic) __weak id <XMSocialCommunityCreateHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) XMSocialCommunityModel *community; // @synthesize community=_community;
- (void).cxx_destruct;
- (void)updateAlbumCover:(id)arg1;
- (void)saveImageToTmpFolder;
- (void)imagePickerController:(id)arg1 didFinishPickingPhotos:(id)arg2 sourceAssets:(id)arg3 isSelectOriginalPhoto:(_Bool)arg4 infos:(id)arg5;
- (void)pickImage:(_Bool)arg1;
- (void)openPhotoOrCamera;
- (void)selectCoverBtnClicked;
- (void)selectIconBtnClicked;
- (void)customInit;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

