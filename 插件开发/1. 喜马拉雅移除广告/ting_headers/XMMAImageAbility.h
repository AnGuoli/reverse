//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMMARealizableAbility.h"

#import "XMMANativeModule-Protocol.h"

@class NSString, XMMAWebView;
@protocol XMMAImageAbilityProvider;

@interface XMMAImageAbility : XMMARealizableAbility <XMMANativeModule>
{
    XMMAWebView *webview;
    id <XMMAImageAbilityProvider> _provider;
}

+ (_Bool)color1:(id)arg1 likeToColor2:(id)arg2;
+ (id)meanColorFromRGBAs:(id)arg1;
+ (id)keyFromRGBA:(unsigned int)arg1 andGroupSize:(long long)arg2;
+ (id)themeColorsFromImage:(id)arg1 atRect:(struct CGRect)arg2;
+ (void)initialize;
+ (void)load;
@property(nonatomic) __weak id <XMMAImageAbilityProvider> provider; // @synthesize provider=_provider;
@property(nonatomic) __weak XMMAWebView *webview; // @synthesize webview;
- (void).cxx_destruct;
- (id)themeColorForImage:(id)arg1;
- (id)colorComponentsWithColor:(id)arg1;
- (void)dettachFromContext:(id)arg1;
- (void)attachToContext:(id)arg1;
- (void)xmma_v1_getMainColor_param:(id)arg1 result:(CDUnknownBlockType)arg2;
- (void)xmma_v1_saveImageToPhotosAlbum_param:(id)arg1 result:(CDUnknownBlockType)arg2;
- (void)xmma_v1_getImageInfo_param:(id)arg1 result:(CDUnknownBlockType)arg2;
- (void)xmma_v1_previewImage_param:(id)arg1 result:(CDUnknownBlockType)arg2;
- (void)xmma_v1_chooseImage_param:(id)arg1 result:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

