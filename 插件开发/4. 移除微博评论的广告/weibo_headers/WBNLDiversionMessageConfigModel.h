//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBNLBaseModel.h"

@class WBNLDiversionBarrageLayerConfigModel, WBNLDiversionSignLayerConfigModel;

@interface WBNLDiversionMessageConfigModel : WBNLBaseModel
{
    long long _install_yzb;
    long long _show_counts;
    long long _show_send_free;
    WBNLDiversionBarrageLayerConfigModel *_barrage_layer;
    WBNLDiversionSignLayerConfigModel *_sign_layer;
}

@property(copy, nonatomic) WBNLDiversionSignLayerConfigModel *sign_layer; // @synthesize sign_layer=_sign_layer;
@property(copy, nonatomic) WBNLDiversionBarrageLayerConfigModel *barrage_layer; // @synthesize barrage_layer=_barrage_layer;
@property(nonatomic) long long show_send_free; // @synthesize show_send_free=_show_send_free;
@property(nonatomic) long long show_counts; // @synthesize show_counts=_show_counts;
@property(nonatomic) long long install_yzb; // @synthesize install_yzb=_install_yzb;
- (void).cxx_destruct;

@end

