//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBShortVideoBaseListController.h"

@interface WBShortVideoRecommendListController : WBShortVideoBaseListController
{
    _Bool _isVideoTapLogged;
}

@property(nonatomic) _Bool isVideoTapLogged; // @synthesize isVideoTapLogged=_isVideoTapLogged;
- (void)_logParamsForVideoTapWithIsNetwork:(long long)arg1 isReturnBackflow:(long long)arg2;
- (void)dataProvider:(id)arg1 didUpdateStatusDetail:(id)arg2;
- (void)dataProvider:(id)arg1 failToUpdateStatusDetail:(id)arg2 error:(id)arg3;
- (void)sharedContext:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)sharedContext:(id)arg1 didChangeDraggingState:(_Bool)arg2;
- (void)initializeCollectionView:(id)arg1;
- (void)dealloc;

@end

