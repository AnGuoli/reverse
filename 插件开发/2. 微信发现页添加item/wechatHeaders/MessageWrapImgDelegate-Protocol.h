//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CMessageWrap, NSData, NSString, UIImage;

@protocol MessageWrapImgDelegate <NSObject>

@optional
- (void)onModMsgByBitSet:(NSString *)arg1 MsgWrap:(CMessageWrap *)arg2 BitSet:(unsigned int)arg3;
- (CMessageWrap *)onGetMsg:(NSString *)arg1 LocalID:(unsigned int)arg2 Wrap:(CMessageWrap *)arg3;
- (void)onGetBigImageErrorWithWrap:(CMessageWrap *)arg1;
- (void)onGetBigImageResultWithWrap:(CMessageWrap *)arg1 image:(UIImage *)arg2 imageData:(NSData *)arg3 isSaveImgOK:(_Bool)arg4;
- (void)onUploadImageRequestWithWrap:(CMessageWrap *)arg1;
@end

