//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "LiveRoomComponentProtocol-Protocol.h"

@class NSDictionary, NSString, UIViewController;

@interface LiveRoomComponent : UIView <LiveRoomComponentProtocol>
{
    _Bool _immediatelyShow;
    NSDictionary *_config;
    UIView *_contentView;
    UIView *_targetView;
    UIViewController *_viewController;
    NSDictionary *_data;
}

@property(retain, nonatomic) NSDictionary *data; // @synthesize data=_data;
@property(retain, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
@property(retain, nonatomic) UIView *targetView; // @synthesize targetView=_targetView;
@property(nonatomic) _Bool immediatelyShow; // @synthesize immediatelyShow=_immediatelyShow;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) NSDictionary *config; // @synthesize config=_config;
- (void).cxx_destruct;
- (void)onEvent:(id)arg1 data:(id)arg2;
- (void)onReceiveData:(id)arg1;
- (void)onReceiveMesssage:(unsigned long long)arg1 extData:(id)arg2;
- (void)onTimer;
- (void)onDestroy;
- (void)onResume;
- (void)onPause;
- (void)onUpdate;
- (void)onLayout;
- (void)onCreate;
- (_Bool)shouldComponentUpdate;
- (void)setIfNeedShow:(_Bool)arg1;
- (_Bool)shouldImmediatelyShow;
- (void)show:(id)arg1;
- (void)onInit;
- (id)identifier;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

