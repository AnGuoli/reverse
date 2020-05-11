//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMWeKeBaseScrollCtrl.h"

#import "XMVXPageViewSubControllerProtocol-Protocol.h"

@class NSString;

@interface XMWeKeCollectedLessonCtrl : XMWeKeBaseScrollCtrl <XMVXPageViewSubControllerProtocol>
{
    long long _categoryId;
    CDUnknownBlockType _collectBlock;
    CDUnknownBlockType _lessonItemClickBlock;
}

@property(copy, nonatomic) CDUnknownBlockType lessonItemClickBlock; // @synthesize lessonItemClickBlock=_lessonItemClickBlock;
@property(copy, nonatomic) CDUnknownBlockType collectBlock; // @synthesize collectBlock=_collectBlock;
@property(nonatomic) long long categoryId; // @synthesize categoryId=_categoryId;
- (void).cxx_destruct;
- (id)vxContentScrollView;
- (void)didReceiveMemoryWarning;
- (void)onCellLongPressed:(id)arg1;
- (void)loadMoreData:(_Bool)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

