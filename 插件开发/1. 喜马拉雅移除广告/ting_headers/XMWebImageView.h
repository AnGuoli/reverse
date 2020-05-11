//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

#import "XMTouchEventProtocol-Protocol.h"

@class NSString, UIActivityIndicatorView;
@protocol XMTouchEventProtocol;

@interface XMWebImageView : UIImageView <XMTouchEventProtocol>
{
    SEL eventSel;
    _Bool animated;
    NSString *imgUrl;
    UIActivityIndicatorView *activityIndicator;
    CDUnknownBlockType _imageProcess;
    id <XMTouchEventProtocol> _delegate;
}

+ (void)downloadImageWithURL:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
+ (id)imageWithURL:(id)arg1;
@property(nonatomic) __weak id <XMTouchEventProtocol> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) CDUnknownBlockType imageProcess; // @synthesize imageProcess=_imageProcess;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator;
@property(retain, nonatomic) NSString *imgUrl; // @synthesize imgUrl;
@property(nonatomic) _Bool animated; // @synthesize animated;
- (void).cxx_destruct;
- (void)setImageWithURL:(id)arg1 placeholderImage:(id)arg2 process:(CDUnknownBlockType)arg3 usingActivityIndicatorStyle:(long long)arg4;
- (void)setImageWithURL:(id)arg1 placeholderImage:(id)arg2 usingActivityIndicatorStyle:(long long)arg3;
- (void)setImageWithURL:(id)arg1 usingActivityIndicatorStyle:(long long)arg2;
- (void)setImageWithURL:(id)arg1 placeholderImage:(id)arg2 process:(CDUnknownBlockType)arg3;
- (void)setImageWithURL:(id)arg1 process:(CDUnknownBlockType)arg2;
- (void)setImageWithURL:(id)arg1 placeholderImage:(id)arg2 loadSuccess:(CDUnknownBlockType)arg3 loadFailure:(CDUnknownBlockType)arg4;
- (void)setImageWithURL:(id)arg1 placeholderImage:(id)arg2;
- (void)setImageWithURL:(id)arg1;
- (void)removeActivityIndicator;
- (void)addActivityIndicatorWithStyle:(long long)arg1;
- (void)tapAction:(id)arg1;
- (void)addTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3;
- (void)customInit;
- (id)initWithImage:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

