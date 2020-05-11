//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class CAShapeLayer, NSString, UIBezierPath, UIButton, UIImageView, UILabel, UITapGestureRecognizer, XMNRequest;

@interface XMOSoundSignatureFriendTips : UIView <UIGestureRecognizerDelegate>
{
    long long _trackId;
    CDUnknownBlockType _tapActionBlock;
    CDUnknownBlockType _praiseActionBlock;
    UIView *_containerView;
    UIImageView *_imageView;
    UILabel *_label;
    UIButton *_button;
    UIView *_triangleView;
    CAShapeLayer *_triangleLayer;
    UIBezierPath *_trianglePath;
    UITapGestureRecognizer *_tapGestureRecognizer;
    XMNRequest *_request;
}

@property(retain, nonatomic) XMNRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(retain, nonatomic) UIBezierPath *trianglePath; // @synthesize trianglePath=_trianglePath;
@property(retain, nonatomic) CAShapeLayer *triangleLayer; // @synthesize triangleLayer=_triangleLayer;
@property(retain, nonatomic) UIView *triangleView; // @synthesize triangleView=_triangleView;
@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(copy, nonatomic) CDUnknownBlockType praiseActionBlock; // @synthesize praiseActionBlock=_praiseActionBlock;
@property(copy, nonatomic) CDUnknownBlockType tapActionBlock; // @synthesize tapActionBlock=_tapActionBlock;
@property(nonatomic) long long trackId; // @synthesize trackId=_trackId;
- (void).cxx_destruct;
- (void)pariseWithTrackId:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)showWithContentView:(id)arg1 position:(struct CGPoint)arg2;
- (void)hide;
- (void)buttonAction;
- (void)tapBackground:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

