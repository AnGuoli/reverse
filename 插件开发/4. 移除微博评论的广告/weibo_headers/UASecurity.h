//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface UASecurity : NSObject
{
}

+ (id)AESCryptoWithSource:(id)arg1 andKey:(id)arg2 option:(_Bool)arg3;
+ (id)MD5WithSource:(id)arg1;
+ (id)hexValueWitData:(id)arg1;
+ (id)base64EncodingDataWithString:(id)arg1;
+ (id)base64EncodingStringWithData:(id)arg1;
+ (id)RSASign:(id)arg1 withKey:(id)arg2;
+ (id)RSAEncrypt:(id)arg1 withKey:(id)arg2;
+ (id)generatePrivateKey:(id)arg1;
+ (id)generatePublicKey:(id)arg1;
+ (id)dataFromHexString:(id)arg1;
+ (id)uniqueId;
+ (id)randomId;

@end

