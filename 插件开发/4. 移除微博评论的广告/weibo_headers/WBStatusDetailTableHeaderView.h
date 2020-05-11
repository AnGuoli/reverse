//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "WBMediaAutoPlaySourceViewProvider-Protocol.h"

@class NSArray, NSString, WBStatusContentView;
@protocol WBMediaAutoPlayProviderDataModel;

@interface WBStatusDetailTableHeaderView : UIView <WBMediaAutoPlaySourceViewProvider>
{
    WBStatusContentView *_statusContentView;
}

@property(retain, nonatomic) WBStatusContentView *statusContentView; // @synthesize statusContentView=_statusContentView;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <WBMediaAutoPlayProviderDataModel> mediaAutoPlayDataModel;
@property(readonly, nonatomic) NSArray *mediaAutoPlaySourceViews;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSArray *mediaAutoPlayContainedSourceViewProviders;
@property(readonly) Class superclass;

@end

