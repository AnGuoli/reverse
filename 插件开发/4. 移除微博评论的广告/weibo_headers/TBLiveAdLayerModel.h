//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBLiveJSONModel.h"

@class NSArray;
@protocol TBLiveAdLayerCellModel;

@interface TBLiveAdLayerModel : TBLiveJSONModel
{
    NSArray<TBLiveAdLayerCellModel> *_dataList;
}

@property(retain, nonatomic) NSArray<TBLiveAdLayerCellModel> *dataList; // @synthesize dataList=_dataList;
- (void).cxx_destruct;
- (id)getModelWithType:(id)arg1;

@end

