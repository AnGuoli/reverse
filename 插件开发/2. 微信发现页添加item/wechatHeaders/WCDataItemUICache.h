//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, WCDataItem;

@interface WCDataItemUICache : NSObject
{
    WCDataItem *m_dataItem;
    NSMutableDictionary *m_dicLayerIdShowTipView;
    _Bool m_isShowDetail;
    map_a50a422b m_contentDescHeight;
    map_729765ba m_contentDescLayoutStyles[4];
    map_a50a422b m_likeUserHeight;
    map_729765ba m_likeUserLayoutStyles;
    NSMutableArray *_usersHasUnreadStory;
}

@property(retain, nonatomic) NSMutableArray *usersHasUnreadStory; // @synthesize usersHasUnreadStory=_usersHasUnreadStory;
@property(retain, nonatomic) NSMutableDictionary *dicLayerIdShowTipView; // @synthesize dicLayerIdShowTipView=m_dicLayerIdShowTipView;
@property(nonatomic) _Bool isShowDetail; // @synthesize isShowDetail=m_isShowDetail;
@property(retain, nonatomic) WCDataItem *dataItem; // @synthesize dataItem=m_dataItem;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (_Bool)isEmpty;
- (map_729765ba *)likeUserLayoutStyles;
- (map_a50a422b *)likeUserHeight;
- (map_729765ba *)contentDescLayoutStyles;
- (map_a50a422b *)contentDescHeight;

@end

