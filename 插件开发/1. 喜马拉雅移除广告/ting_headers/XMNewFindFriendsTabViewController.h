//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMBaseTabelVC.h"

#import "UIScrollViewDelegate-Protocol.h"
#import "XMVXPageViewControllerDataSource-Protocol.h"
#import "XMVXPageViewControllerDelegate-Protocol.h"

@class NSString, UIView, XMHallOfFameViewController, XMNewFindFriendsRecommendController, XMSegmentControl, XMVXPageViewController;

@interface XMNewFindFriendsTabViewController : XMBaseTabelVC <XMVXPageViewControllerDelegate, XMVXPageViewControllerDataSource, UIScrollViewDelegate>
{
    long long _defaultIndex;
    XMSegmentControl *_segmentedControl;
    XMVXPageViewController *_pageVC;
    UIView *_topSegmentView;
    XMNewFindFriendsRecommendController *_findFriendsRecommendVC;
    XMHallOfFameViewController *_hallOfFameVC;
}

@property(retain, nonatomic) XMHallOfFameViewController *hallOfFameVC; // @synthesize hallOfFameVC=_hallOfFameVC;
@property(retain, nonatomic) XMNewFindFriendsRecommendController *findFriendsRecommendVC; // @synthesize findFriendsRecommendVC=_findFriendsRecommendVC;
@property(retain, nonatomic) UIView *topSegmentView; // @synthesize topSegmentView=_topSegmentView;
@property(retain, nonatomic) XMVXPageViewController *pageVC; // @synthesize pageVC=_pageVC;
@property(retain, nonatomic) XMSegmentControl *segmentedControl; // @synthesize segmentedControl=_segmentedControl;
- (void).cxx_destruct;
- (void)addSegmentTabViewController;
- (id)segmentCtrolTitles;
- (id)segmentCtrolSelectedImages;
- (id)segmentCtrolNormalImages;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (id)viewControllerAtIndex:(long long)arg1;
- (void)segmentedControlChangedValue:(long long)arg1;
- (void)loadSegmentControl;
- (id)vxPageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2;
- (id)vxPageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2;
- (void)search:(id)arg1;
- (void)viewDidLoad;
- (id)initWithDefaultIndex:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

