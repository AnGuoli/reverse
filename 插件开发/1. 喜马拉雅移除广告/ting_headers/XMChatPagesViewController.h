//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMBaseVC.h"

#import "UIPageViewControllerDataSource-Protocol.h"
#import "UIPageViewControllerDelegate-Protocol.h"

@class NSArray, NSString, UIPageViewController, XMChatSegmentedControl;

@interface XMChatPagesViewController : XMBaseVC <UIPageViewControllerDataSource, UIPageViewControllerDelegate>
{
    _Bool _supportGesture;
    XMChatSegmentedControl *_segmentCtrl;
    long long _pageIndex;
    NSArray *_sectionTitles;
    NSArray *_sectionControllers;
    UIPageViewController *_pageCtrl;
}

@property(retain, nonatomic) UIPageViewController *pageCtrl; // @synthesize pageCtrl=_pageCtrl;
@property(retain, nonatomic) NSArray *sectionControllers; // @synthesize sectionControllers=_sectionControllers;
@property(retain, nonatomic) NSArray *sectionTitles; // @synthesize sectionTitles=_sectionTitles;
@property(nonatomic) long long pageIndex; // @synthesize pageIndex=_pageIndex;
@property(nonatomic) _Bool supportGesture; // @synthesize supportGesture=_supportGesture;
@property(retain, nonatomic) XMChatSegmentedControl *segmentCtrl; // @synthesize segmentCtrl=_segmentCtrl;
- (void).cxx_destruct;
- (void)setSheildeds:(id)arg1 unreadNums:(id)arg2;
- (void)reloadData;
- (void)pageViewController:(id)arg1 didFinishAnimating:(_Bool)arg2 previousViewControllers:(id)arg3 transitionCompleted:(_Bool)arg4;
- (id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2;
- (id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2;
- (unsigned long long)indexOfViewController:(id)arg1;
- (id)viewControllerAtIndex:(unsigned long long)arg1;
- (void)setNavigationTitleAtIndex:(unsigned long long)arg1;
- (void)segmentedControlChangedValue:(id)arg1;
- (void)changeToNext;
- (void)initSegmentCtrl;
- (void)didReceiveMemoryWarning;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

