//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBViewController.h"

#import "UISearchBarDelegate-Protocol.h"
#import "WBStickerLibrarySearchAssociationDelegate-Protocol.h"
#import "WBStickerLibrarySearchHomeDelegate-Protocol.h"
#import "WBStickerLibrarySearchResultDelegate-Protocol.h"

@class NSString, UIImage, UIView, UIViewController, WBSearchBar, WBStickerLibrarySearchAssociationViewController, WBStickerLibrarySearchHomeViewController, WBStickerLibrarySearchResultViewController, WBStickerSearchNetworkManager, WBStickerSearchRecommendModel;
@protocol WBStickerLibrarySearchDelegate;

@interface WBStickerLibrarySearchViewController : WBViewController <UISearchBarDelegate, WBStickerLibrarySearchHomeDelegate, WBStickerLibrarySearchAssociationDelegate, WBStickerLibrarySearchResultDelegate>
{
    _Bool _usingNewStyle;
    id <WBStickerLibrarySearchDelegate> _delegate;
    UIImage *_backgroundImage;
    UIView *_contentView;
    UIView *_blurBackgourndView;
    WBSearchBar *_searchBar;
    WBStickerLibrarySearchHomeViewController *_homeVC;
    WBStickerLibrarySearchAssociationViewController *_associationVC;
    WBStickerLibrarySearchResultViewController *_resultVC;
    unsigned long long _pageType;
    WBStickerSearchNetworkManager *_networkManager;
    WBStickerSearchRecommendModel *_recommendModel;
    UIViewController *_currentVC;
}

@property(nonatomic) __weak UIViewController *currentVC; // @synthesize currentVC=_currentVC;
@property(retain, nonatomic) WBStickerSearchRecommendModel *recommendModel; // @synthesize recommendModel=_recommendModel;
@property(retain, nonatomic) WBStickerSearchNetworkManager *networkManager; // @synthesize networkManager=_networkManager;
@property(nonatomic) unsigned long long pageType; // @synthesize pageType=_pageType;
@property(retain, nonatomic) WBStickerLibrarySearchResultViewController *resultVC; // @synthesize resultVC=_resultVC;
@property(retain, nonatomic) WBStickerLibrarySearchAssociationViewController *associationVC; // @synthesize associationVC=_associationVC;
@property(retain, nonatomic) WBStickerLibrarySearchHomeViewController *homeVC; // @synthesize homeVC=_homeVC;
@property(retain, nonatomic) WBSearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(retain, nonatomic) UIView *blurBackgourndView; // @synthesize blurBackgourndView=_blurBackgourndView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIImage *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
@property(nonatomic) _Bool usingNewStyle; // @synthesize usingNewStyle=_usingNewStyle;
@property(nonatomic) __weak id <WBStickerLibrarySearchDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)stickerLibrarySearchResult:(id)arg1;
- (id)associateViewGetSearchText;
- (void)associateViewControllerDidScroll;
- (void)associateViewControllerDidSelectedItem:(id)arg1;
- (void)homeViewControllerDidScroll;
- (void)homeViewControllerDidSelectedHistory:(id)arg1;
- (void)homeViewControllerDidSelectedTag:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (_Bool)searchBar:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)setSearchBarAttributedPlaceholderWith:(id)arg1;
- (void)makeSearchBarCancelButtonWithNewStyle;
- (void)makeBlurImageBackgroundWithImage:(id)arg1;
- (void)makeNewStyle;
- (void)setRecommend:(id)arg1;
- (void)hideKeyboard;
- (void)viewWillLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithNewStyleBackgroundImage:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

