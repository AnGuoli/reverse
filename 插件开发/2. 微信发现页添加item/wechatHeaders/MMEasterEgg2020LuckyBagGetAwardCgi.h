//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "StoreEmotionBaseCgi.h"

@class NSData;
@protocol MMEasterEgg2020LuckyBagGetAwardCgiDelegate;

@interface MMEasterEgg2020LuckyBagGetAwardCgi : StoreEmotionBaseCgi
{
    id <MMEasterEgg2020LuckyBagGetAwardCgiDelegate> _delegate;
    NSData *_params;
}

@property(retain, nonatomic) NSData *params; // @synthesize params=_params;
@property(nonatomic) __weak id <MMEasterEgg2020LuckyBagGetAwardCgiDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)handleErrorReturn;
- (void)handleMessageReturnWithResponse:(id)arg1;
- (void)stopRequest;
- (_Bool)startRequest;
- (id)initWithParams:(id)arg1;
- (id)init;

@end

