//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface XMQsctDataHelper : NSObject
{
}

+ (void)printBytes:(char *)arg1 withLength:(unsigned long long)arg2;
+ (unsigned char)encrypt_ximalaya:(id)arg1;
+ (id)generateValidateString;
+ (unsigned char)getEncyptXimalayaFromData:(id)arg1;
+ (id)getOperandStringFromData:(id)arg1;
+ (id)cmdToDataWithOpCode:(int)arg1 OperandStr:(id)arg2;

@end

