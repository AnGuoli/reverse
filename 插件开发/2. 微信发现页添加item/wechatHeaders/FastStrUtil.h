//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface FastStrUtil : NSObject
{
}

+ (unsigned int)decodeToInteger:(struct XmlReaderNode_t *)arg1 attribute:(const char *)arg2;
+ (unsigned int)decodeToInteger:(struct XmlReaderNode_t *)arg1 key:(const char *)arg2;
+ (id)decodeToString:(struct XmlReaderNode_t *)arg1 key:(const char *)arg2;
+ (_Bool)code:(struct CFastStr *)arg1 key:(const char *)arg2 integer:(unsigned int)arg3;
+ (_Bool)code:(struct CFastStr *)arg1 key:(const char *)arg2 string:(id)arg3;

@end

