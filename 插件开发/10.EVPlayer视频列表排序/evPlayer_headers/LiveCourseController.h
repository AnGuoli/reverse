//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseController.h"

@class NSDictionary, NSMutableArray, NSMutableData, NSString, UITableView, UITableViewRowAction;

@interface LiveCourseController : BaseController
{
    UITableView *_tableView;
    NSMutableArray *_course_array;
    NSString *_nib_identifer;
    NSString *_serail_key;
    NSString *_course_name;
    UITableViewRowAction *_deleteRowAction;
    NSMutableData *_responseData;
    NSDictionary *_curentdata;
}

@property(retain, nonatomic) NSDictionary *curentdata; // @synthesize curentdata=_curentdata;
@property(retain, nonatomic) NSMutableData *responseData; // @synthesize responseData=_responseData;
@property(retain, nonatomic) UITableViewRowAction *deleteRowAction; // @synthesize deleteRowAction=_deleteRowAction;
@property(copy, nonatomic) NSString *course_name; // @synthesize course_name=_course_name;
@property(copy, nonatomic) NSString *serail_key; // @synthesize serail_key=_serail_key;
@property(copy, nonatomic) NSString *nib_identifer; // @synthesize nib_identifer=_nib_identifer;
@property(retain, nonatomic) NSMutableArray *course_array; // @synthesize course_array=_course_array;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (id)botChat;
- (void)jumpFrom:(id)arg1;
- (void)updateTableData:(id)arg1;
- (void)requestListByKey:(id)arg1;
- (void)requestDetailByKey:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (_Bool)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (void)didReceiveMemoryWarning;
- (void)refreshClick:(id)arg1;
- (void)setupRefresh;
- (void)viewDidLoad;
- (id)initWithSerail:(id)arg1;

@end

