//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface RNSoundFilter : NSObject
{
    id _xmAudioFilter;
    _Bool _isEnvFilter;
    long long _envType;
}

+ (id)soundFilterWithEnvType:(long long)arg1;
+ (id)soundFilterWithConfig:(CDStruct_6a53955a)arg1;
+ (id)soundFilterWithTone:(float)arg1;
@property(nonatomic) long long envType; // @synthesize envType=_envType;
@property(nonatomic) _Bool isEnvFilter; // @synthesize isEnvFilter=_isEnvFilter;
- (void).cxx_destruct;
- (id)xmAudioFilter;

@end

