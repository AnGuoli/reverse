//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBLiveJSONModel.h"

@class NSArray, NSString;
@protocol TBLiveDetailGoodModel;

@interface TBLiveItemListModel : TBLiveJSONModel
{
    NSString *_goodsIndex;
    NSArray<TBLiveDetailGoodModel> *_goodsList;
}

@property(retain, nonatomic) NSArray<TBLiveDetailGoodModel> *goodsList; // @synthesize goodsList=_goodsList;
@property(copy, nonatomic) NSString *goodsIndex; // @synthesize goodsIndex=_goodsIndex;
- (void).cxx_destruct;

@end

