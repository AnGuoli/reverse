//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBStoryFluxStore.h"

#import "WBStoryFluxStore-Protocol.h"

@class NSArray, NSString;
@protocol WBStoryADProductsStoreDelegate;

@interface WBStoryADProductsStore : WBStoryFluxStore <WBStoryFluxStore>
{
    id <WBStoryADProductsStoreDelegate> _delegate;
    NSArray *_products;
}

@property(copy, nonatomic) NSArray *products; // @synthesize products=_products;
@property(nonatomic) __weak id <WBStoryADProductsStoreDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)handleLoadProductsAction:(id)arg1;
- (id)actionRecieverDict;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

