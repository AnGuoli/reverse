//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WBShortVideoSharedContext, WBStoryRLCollectionView;

@interface WBShortVideoBaseViewManager : NSObject
{
    WBStoryRLCollectionView *_collectionView;
    WBShortVideoSharedContext *_sharedContext;
}

@property(nonatomic) __weak WBShortVideoSharedContext *sharedContext; // @synthesize sharedContext=_sharedContext;
@property(retain, nonatomic) WBStoryRLCollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;
- (void)hideBackButton;
- (void)configSubviewsFrame;
- (void)setupOverlayViews;
- (void)setupCollectionView;
- (void)setupSubViews;
- (id)contentView;
- (id)initWithSharedContext:(id)arg1;
- (void)dealloc;

@end

