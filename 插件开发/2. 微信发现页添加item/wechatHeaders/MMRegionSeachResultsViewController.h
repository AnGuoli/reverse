//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayBaseViewController.h"

@class NSArray, NSMutableArray, UISearchController;
@protocol MMRegionSeachResultsViewControllerDelegate;

@interface MMRegionSeachResultsViewController : WCPayBaseViewController
{
    NSArray *_results;
    id <MMRegionSeachResultsViewControllerDelegate> _delegate;
    UISearchController *_searchController;
    NSMutableArray *_countries;
    NSMutableArray *_provinces;
    NSMutableArray *_cities;
    double _searchBackgroundY;
    double _searchBackgroundHeight;
}

@property(nonatomic) double searchBackgroundHeight; // @synthesize searchBackgroundHeight=_searchBackgroundHeight;
@property(nonatomic) double searchBackgroundY; // @synthesize searchBackgroundY=_searchBackgroundY;
@property(retain, nonatomic) NSMutableArray *cities; // @synthesize cities=_cities;
@property(retain, nonatomic) NSMutableArray *provinces; // @synthesize provinces=_provinces;
@property(retain, nonatomic) NSMutableArray *countries; // @synthesize countries=_countries;
@property(nonatomic) __weak UISearchController *searchController; // @synthesize searchController=_searchController;
@property(nonatomic) __weak id <MMRegionSeachResultsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *results; // @synthesize results=_results;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)fixSearchBarBackgroundWhenActive;
- (void)clickInfoCell:(struct WCTableViewNormalCellManager *)arg1;
- (void)reloadData;
- (void)setupData;
- (void)viewDidLoad;

@end

