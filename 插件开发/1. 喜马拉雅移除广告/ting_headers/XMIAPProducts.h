//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SKProductsRequestDelegate-Protocol.h"
#import "SKRequestDelegate-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSString;

@interface XMIAPProducts : NSObject <SKRequestDelegate, SKProductsRequestDelegate>
{
    NSMutableArray *_productIds;
    NSMutableArray *_availableProducts;
    NSMutableArray *_invalidProductIds;
    NSMutableArray *_productRequestResponse;
    NSMutableDictionary *_callBacks;
}

+ (id)sharedProducts;
@property(retain, nonatomic) NSMutableDictionary *callBacks; // @synthesize callBacks=_callBacks;
@property(retain, nonatomic) NSMutableArray *productRequestResponse; // @synthesize productRequestResponse=_productRequestResponse;
@property(retain, nonatomic) NSMutableArray *invalidProductIds; // @synthesize invalidProductIds=_invalidProductIds;
@property(retain, nonatomic) NSMutableArray *availableProducts; // @synthesize availableProducts=_availableProducts;
@property(retain, nonatomic) NSMutableArray *productIds; // @synthesize productIds=_productIds;
- (void).cxx_destruct;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)productsRequest:(id)arg1 didReceiveResponse:(id)arg2;
- (void)fetchProductInformationForIds:(id)arg1;
- (void)didGetByError:(id)arg1;
- (void)didGetAvaiableProducts;
- (void)fetchProductInformationForProductId:(id)arg1 completed:(CDUnknownBlockType)arg2;
- (id)productIdsWithProductId:(id)arg1;
- (id)productForProductId:(id)arg1;
- (void)getAllProducts;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

