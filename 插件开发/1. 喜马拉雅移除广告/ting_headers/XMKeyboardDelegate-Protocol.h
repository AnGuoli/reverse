//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, UIView;

@protocol XMKeyboardDelegate <NSObject>

@optional
- (void)xmKeyboardClickAtDelete:(UIView *)arg1;
- (void)xmKeyboardClickAtEmoji:(id)arg1;
- (void)xmKeyboardClickAtSticker:(id)arg1;
- (void)xmKeyboardSearchCancel:(UIView *)arg1;
- (void)xmKeyboardSearchForKey:(NSString *)arg1;
- (void)xmKeyboardDidEndEditing:(UIView *)arg1;
@end

