//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YBImageBrowserCellDataProtocol-Protocol.h"

@class NSString, NSURL, PHAsset, UIImage, YBImage;

@interface YBImageBrowseCellData : NSObject <YBImageBrowserCellDataProtocol>
{
    id _downloadToken;
    _Bool _allowSaveToPhotoAlbum;
    _Bool _allowShowSheetView;
    _Bool _loading;
    _Bool _cutting;
    CDUnknownBlockType _imageBlock;
    NSURL *_url;
    PHAsset *_phAsset;
    id _sourceObject;
    UIImage *_thumbImage;
    NSURL *_thumbUrl;
    YBImage *_image;
    double _maxZoomScale;
    unsigned long long _verticalfillType;
    unsigned long long _horizontalfillType;
    id _extraData;
    long long _dataState;
    UIImage *_compressImage;
    double _downloadProgress;
    double _zoomScale;
}

+ (_Bool)shouldDecodeAsynchronously;
+ (double)globalZoomScaleSurplus;
+ (struct CGSize)globalMaxTextureSize;
+ (unsigned long long)globalHorizontalfillType;
+ (unsigned long long)globalVerticalfillType;
+ (void)setShouldDecodeAsynchronously:(_Bool)arg1;
+ (void)setGlobalZoomScaleSurplus:(double)arg1;
+ (void)setGlobalMaxTextureSize:(struct CGSize)arg1;
+ (void)setGlobalHorizontalfillType:(unsigned long long)arg1;
+ (void)setGlobalVerticalfillType:(unsigned long long)arg1;
+ (struct CGSize)getSizeOfCurrentLayoutDirection;
+ (struct CGSize)getContentSizeWithContainerSize:(struct CGSize)arg1 imageViewFrame:(struct CGRect)arg2;
+ (struct CGRect)getImageViewFrameWithContainerSize:(struct CGSize)arg1 imageSize:(struct CGSize)arg2 fillType:(unsigned long long)arg3;
+ (double)getMaximumZoomScaleWithContainerSize:(struct CGSize)arg1 imageSize:(struct CGSize)arg2 fillType:(unsigned long long)arg3;
@property(nonatomic) double zoomScale; // @synthesize zoomScale=_zoomScale;
@property(nonatomic) _Bool cutting; // @synthesize cutting=_cutting;
@property(nonatomic) double downloadProgress; // @synthesize downloadProgress=_downloadProgress;
@property(retain, nonatomic) UIImage *compressImage; // @synthesize compressImage=_compressImage;
@property(nonatomic) long long dataState; // @synthesize dataState=_dataState;
@property(nonatomic) _Bool loading; // @synthesize loading=_loading;
@property(retain, nonatomic) id extraData; // @synthesize extraData=_extraData;
@property(nonatomic) _Bool allowShowSheetView; // @synthesize allowShowSheetView=_allowShowSheetView;
@property(nonatomic) _Bool allowSaveToPhotoAlbum; // @synthesize allowSaveToPhotoAlbum=_allowSaveToPhotoAlbum;
@property(nonatomic) unsigned long long horizontalfillType; // @synthesize horizontalfillType=_horizontalfillType;
@property(nonatomic) unsigned long long verticalfillType; // @synthesize verticalfillType=_verticalfillType;
@property(nonatomic) double maxZoomScale; // @synthesize maxZoomScale=_maxZoomScale;
@property(retain, nonatomic) YBImage *image; // @synthesize image=_image;
@property(retain, nonatomic) NSURL *thumbUrl; // @synthesize thumbUrl=_thumbUrl;
@property(retain, nonatomic) UIImage *thumbImage; // @synthesize thumbImage=_thumbImage;
@property(nonatomic) __weak id sourceObject; // @synthesize sourceObject=_sourceObject;
@property(retain, nonatomic) PHAsset *phAsset; // @synthesize phAsset=_phAsset;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(copy, nonatomic) CDUnknownBlockType imageBlock; // @synthesize imageBlock=_imageBlock;
- (void).cxx_destruct;
- (struct CGSize)getSizeOfCuttingWithOriginSize:(struct CGSize)arg1;
- (struct CGSize)getSizeOfCompressing;
- (_Bool)needCompress;
- (unsigned long long)getFillTypeWithLayoutDirection:(unsigned long long)arg1;
- (void)cuttingImageToRect:(struct CGRect)arg1 complete:(CDUnknownBlockType)arg2;
- (void)compressingImage;
- (void)loadThumbImage;
- (void)downloadImage;
- (void)queryImageCache;
- (void)loadImageFromPHAsset;
- (void)decodeLocalImage;
- (void)loadLocalImage;
- (void)loadData;
- (void)yb_preload;
- (void)yb_browserSaveToPhotoAlbum;
- (_Bool)yb_browserAllowSaveToPhotoAlbum;
- (_Bool)yb_browserAllowShowSheetView;
- (struct CGRect)yb_browserCurrentImageFrameWithImageSize:(struct CGSize)arg1;
- (id)yb_browserCellSourceObject;
- (Class)yb_classOfBrowserCell;
- (void)initVars;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

