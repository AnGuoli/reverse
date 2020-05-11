//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMPlantBaseViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "XMPRecommendTemplateDelegate-Protocol.h"

@class NSMutableArray, NSString, UITableView, XMPlantCutVoiceModel, XMPlantTemplateModel;
@protocol XMPAllTemplateDelegate;

@interface XMPAllTemplateViewController : XMPlantBaseViewController <UITableViewDelegate, UITableViewDataSource, XMPRecommendTemplateDelegate>
{
    id <XMPAllTemplateDelegate> _delegate;
    XMPlantTemplateModel *_selectTemplateModel;
    XMPlantTemplateModel *_defaultTemplateModel;
    XMPlantCutVoiceModel *_model;
    UITableView *_templateTableView;
    NSMutableArray *_dataArray;
    XMPlantTemplateModel *_isNeedChooseTemplateModel;
}

@property(retain, nonatomic) XMPlantTemplateModel *isNeedChooseTemplateModel; // @synthesize isNeedChooseTemplateModel=_isNeedChooseTemplateModel;
@property(retain, nonatomic) NSMutableArray *dataArray; // @synthesize dataArray=_dataArray;
@property(retain, nonatomic) UITableView *templateTableView; // @synthesize templateTableView=_templateTableView;
@property(retain, nonatomic) XMPlantCutVoiceModel *model; // @synthesize model=_model;
@property(retain, nonatomic) XMPlantTemplateModel *defaultTemplateModel; // @synthesize defaultTemplateModel=_defaultTemplateModel;
@property(retain, nonatomic) XMPlantTemplateModel *selectTemplateModel; // @synthesize selectTemplateModel=_selectTemplateModel;
@property(nonatomic) __weak id <XMPAllTemplateDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)templateDownloadFinish:(id)arg1;
- (void)templateDownloading:(double)arg1 model:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)finishDownload:(id)arg1;
- (void)pushNeedSelectTemplateModel:(id)arg1;
- (void)selectTemplateModelFromCell:(id)arg1;
- (void)checkCacheTemplate:(id)arg1;
- (id)transToTemplateList:(id)arg1;
- (void)p_updateWithEmptyWith:(_Bool)arg1;
- (void)updateTemplateList;
- (void)showToast:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)setupUI;
- (void)setupNav;
- (void)setupData;
- (void)back;
- (void)viewDidLoad;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithCutVoiceModel:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

