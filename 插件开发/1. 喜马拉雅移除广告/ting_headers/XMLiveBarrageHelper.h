//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMLiveBaseEffectHelper.h"

@class NSOperationQueue, UIViewController, XMLiveBaseApproachInfo, XMSingleBarrageView;
@protocol XMLiveBarrageHelperDelegate;

@interface XMLiveBarrageHelper : XMLiveBaseEffectHelper
{
    double _moveIn;
    double _stayStill;
    double _moveOut;
    unsigned long long _sourceType;
    UIViewController *_sourceVC;
    XMLiveBaseApproachInfo *_approachInfo;
    id <XMLiveBarrageHelperDelegate> _delegate;
    NSOperationQueue *_operationQueue;
    XMSingleBarrageView *_currentBarrageView;
}

+ (struct CGSize)trackViewSize;
- (void).cxx_destruct;
@property(retain, nonatomic) XMSingleBarrageView *currentBarrageView; // @synthesize currentBarrageView=_currentBarrageView;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(nonatomic) __weak id <XMLiveBarrageHelperDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak XMLiveBaseApproachInfo *approachInfo; // @synthesize approachInfo=_approachInfo;
@property(nonatomic) __weak UIViewController *sourceVC; // @synthesize sourceVC=_sourceVC;
@property(nonatomic) unsigned long long sourceType; // @synthesize sourceType=_sourceType;
- (void)p_enterTingPage:(id)arg1;
- (void)p_enterEntRoom:(id)arg1;
- (void)p_enterLiveRoom:(id)arg1;
- (void)barrageViewMoveOut;
- (void)tapBarrageView;
- (void)stopShowEffect;
- (void)cleanEffectMessages;
- (void)mainProcessWithEffectMessage:(id)arg1;
- (void)addEffectMessage:(id)arg1;
- (void)updateConfiguration;
- (void)startShowEffect;
- (id)init;

@end

