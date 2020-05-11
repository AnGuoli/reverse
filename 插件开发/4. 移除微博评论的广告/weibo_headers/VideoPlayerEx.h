//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class YXOpenGLView;

@interface VideoPlayerEx : UIView
{
    _Bool _process_video;
    _Bool _isDisPlayEnable;
    _Bool _isInit;
    int count;
    YXOpenGLView *_openGlView;
}

@property(retain, nonatomic) YXOpenGLView *openGlView; // @synthesize openGlView=_openGlView;
- (void).cxx_destruct;
- (void)dealloc;
- (void)cleanSavePic;
- (void)setSavePicFlags:(_Bool)arg1;
- (void)setDisPlayViewState:(_Bool)arg1;
- (_Bool)getDisPlayViewState;
- (_Bool)getProcessVide;
- (void)processVideo:(_Bool)arg1;
- (void)displayTextureFromImage:(unsigned int)arg1;
- (unsigned int)createTextureFromImage:(struct __CVBuffer *)arg1;
- (_Bool)putVideoDataAndLogo:(struct __CVBuffer *)arg1 logoPixelBuffer:(struct __CVBuffer *)arg2 xPos:(int)arg3 yPos:(int)arg4 w:(int)arg5 h:(int)arg6;
- (_Bool)putVideoData:(struct __CVBuffer *)arg1;
- (void)setContentMode:(long long)arg1;
- (void)stopPlay;
- (int)cleanPlayer;
- (void)setFrame:(struct CGRect)arg1;
- (void)startPlayWithWidth:(int)arg1 height:(int)arg2;
- (id)getGLContext;
- (id)init;

@end

